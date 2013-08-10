<?php

/**
 * Defines the migration of `buyers` and `sellers`.
 */
class C21BuyerSellerMigration extends C21Migration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments);
    $this->dependencies = array('c21Listing');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'listing_id' => array(
          'type' => 'varchar',
          'not null' => TRUE,
          'length' => 255,
          'alias' => $person_type == 'seller' ? 'ls' : 'lb',
        ),
        'disp_order' => array(
          'type' => 'int',
          'not null' => TRUE,
          'unsigned' => TRUE,
          'alias' => $person_type == 'seller' ? 'ls' : 'lb',
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    switch ($person_type) {
      case 'seller':
        $source_query = Database::getConnection('default', 'legacy')
          ->select('listing_sellers', 'ls')
          ->fields('ls', array('listing_id', 'disp_order', 'firstname', 'lastname', 'company', 'address', 'city', 'state', 'zip', 'office_only'))
          ->orderBy('disp_order');
        break;
      case 'buyer':
        $source_query = Database::getConnection('default', 'legacy')
          ->select('listing_buyers', 'lb')
          ->fields('lb', array('listing_id', 'disp_order', 'firstname', 'lastname', 'company', 'address', 'city', 'state', 'zip'))
          ->orderBy('disp_order');
        break;
    }

    $this->source = new MigrateSourceSQL($source_query, array(), NULL, array('map_joinable' => FALSE));
    $this->destination = new MigrateDestinationFieldCollection(
      'field_listing_' . $person_type,
      array('host_entity_type' => 'node')
    );

    $this->addFieldMapping('host_entity_id', 'listing_id')
      ->sourceMigration('c21Listing');
    $this->addFieldMapping('field_' . $person_type . '_first_name', 'firstname');
    $this->addFieldMapping('field_' . $person_type . '_last_name', 'lastname');
    $this->addFieldMapping('field_' . $person_type . '_company', 'company');
    $this->addFieldMapping('field_seller_internal_only', 'office_only');

    $this->addFieldMapping('field_' . $person_type . '_address', NULL)
         ->defaultValue('US');
    $this->addFieldMapping('field_' . $person_type . '_address:thoroughfare', 'address');
    $this->addFieldMapping('field_' . $person_type . '_address:locality', 'city');
    $this->addFieldMapping('field_' . $person_type . '_address:administrative_area', 'state');
    $this->addFieldMapping('field_' . $person_type . '_address:postal_code', 'zip');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE || !$this->validListingId($source_row->listing_id)) {
      return FALSE;
    }
  }
}
class C21BuyerMigration extends C21BuyerSellerMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
    $this->description = t('c21hull.com buyers');
  }
}
class C21SellerMigration extends C21BuyerSellerMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
    $this->description = t('c21hull.com sellers');
  }
}




/**
 * Base class for phone/email migrations for buyers and sellers.
 */
class C21BuyerSellerPhoneEmailMigration extends C21Migration {
  protected $person_type;
  protected $phone_type;
  protected $phone_type_default;

  public function __construct($arguments, $person_type, $phone_type, $phone_type_default) {
    parent::__construct($arguments);

    $this->person_type = $person_type;
    $this->phone_type = $phone_type;
    $this->phone_type_default = $phone_type_default;

    $this->description = t('c21hull.com ' . $this->person_type . ' ' . $this->phone_type . ' numbers');
    switch ($this->person_type) {
      case 'buyer':
        $this->dependencies = array('c21Buyer');
        $source_query = Database::getConnection('default', 'legacy')
         ->select('listing_buyers', 'lb')
         ->isNotNull('lb.' . $phone_type)
         ->fields('lb', array('listing_id', 'disp_order', 'home_phone', 'business_phone', 'local_phone', 'cell_phone', 'fax', 'email'));
        break;

      case 'seller':
        $this->dependencies = array('c21Seller');
        $source_query = Database::getConnection('default', 'legacy')
         ->select('listing_sellers', 'ls')
         ->isNotNull('ls.' . $phone_type)
         ->fields('ls', array('listing_id', 'disp_order', 'home_phone', 'business_phone', 'local_phone', 'cell_phone', 'fax', 'email'));
        break;
    }

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'listing_id' => array(
          'type' => 'varchar',
          'not null' => TRUE,
          'length' => 255,
          'alias' => $this->person_type == 'seller' ? 'ls' : 'lb',
        ),
        'disp_order' => array(
          'type' => 'int',
          'not null' => TRUE,
          'unsigned' => TRUE,
          'alias' => $this->person_type == 'seller' ? 'ls' : 'lb',
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    $this->source = new MigrateSourceSQL($source_query, array(), NULL, array('map_joinable' => FALSE));

    switch ($this->person_type) {
      case 'buyer':
        $this->addFieldMapping('host_entity_id', 'buyer_id')
          ->sourceMigration('c21Buyer');
        break;

      case 'seller':
        $this->addFieldMapping('host_entity_id', 'seller_id')
          ->sourceMigration('c21Seller');
        break;
    }

    if ($this->phone_type != 'email') {
      $this->destination = new MigrateDestinationFieldCollection(
        'field_' . $this->person_type . '_phone',
        array('host_entity_type' => 'field_collection_item')
      );
      $this->addFieldMapping('field_' . $this->person_type . '_phone_number', $this->phone_type);
      $this->addFieldMapping('field_' . $this->person_type . '_phone_extension', $this->phone_type . '_extension');
      $this->addFieldMapping('field_' . $this->person_type . '_phone_type', NULL)
           ->defaultValue($this->phone_type_default);
    }
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE || empty($source_row->{$this->phone_type}) || !$this->validListingId($source_row->listing_id)) {
      return FALSE;
    }

    $source_row->{$this->person_type . '_id'} = array(
      array(
        'listing_id' => $source_row->listing_id,
        'disp_order' => $source_row->disp_order,
      ),
    );

    if ($this->phone_type != 'email') {
      $source_row->{$this->phone_type} = $this->formatPhoneNumber($source_row->{$this->phone_type}, 'number');
      $source_row->{$this->phone_type . '_extension'} = $this->formatPhoneNumber($source_row->{$this->phone_type}, 'extension');
    }
  }

  function formatPhoneNumber($number, $mode = 'full') {
    $pattern = '/\D*\(?(\d{3})?\)?\D*(\d{3})\D*(\d{4})\D*(\d{1,8})?/';
    if (preg_match($pattern, $number, $match)) {
      if ($match[3]) {
        if ($match[1]) {
          $num = '(' . $match[1] .') ' . $match[2] . '-' . $match[3];
        }
        else {
          $num = $match[2] . '-' . $match[3];
        }
      }
      else {
        $num = NULL;
      }
      isset($match[4]) ? $ext = $match[4] : $ext = NULL;
    }
    else {
      // The number couldnt be cleaned up.
      return $number;
    }

    switch ($mode) {
      case 'number':
        return $num;
      case 'extension':
        return $ext;
      case 'full':
      default:
        return $ext ? $num . ' x' . $ext : $num;
    }
  }
}

/**
 * Defines the migration of home phone.
 */
class C21BuyerSellerHomePhoneMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'home_phone', 'Home');
  }
}
class C21SellerHomePhoneMigration extends C21BuyerSellerHomePhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerHomePhoneMigration extends C21BuyerSellerHomePhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}


/**
 * Defines the migration of `sellers` business phone.
 */
class C21BuyerSellerBusinessPhoneMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'business_phone', 'Business');
  }
}
class C21SellerBusinessPhoneMigration extends C21BuyerSellerBusinessPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerBusinessPhoneMigration extends C21BuyerSellerBusinessPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}


/**
 * Defines the migration of `sellers` local phone.
 */
class C21BuyerSellerLocalPhoneMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'local_phone', 'Local');
  }
}
class C21SellerLocalPhoneMigration extends C21BuyerSellerLocalPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerLocalPhoneMigration extends C21BuyerSellerLocalPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}


/**
 * Defines the migration of `sellers` cell phone.
 */
class C21BuyerSellerCellPhoneMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'cell_phone', 'Cell');
  }
}
class C21SellerCellPhoneMigration extends C21BuyerSellerCellPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerCellPhoneMigration extends C21BuyerSellerCellPhoneMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}


/**
 * Defines the migration of `sellers` fax.
 */
class C21BuyerSellerFaxMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'fax', 'Fax');
  }
}
class C21SellerFaxMigration extends C21BuyerSellerFaxMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerFaxMigration extends C21BuyerSellerFaxMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}


/**
 * Defines the migration of `sellers` email.
 */
class C21BuyerSellerEmailMigration extends C21BuyerSellerPhoneEmailMigration {
  public function __construct($arguments, $person_type) {
    parent::__construct($arguments, $person_type, 'email', 'Email');
    $this->description = t('c21hull.com ' . $person_type . ' email');

    $this->destination = new MigrateDestinationFieldCollection(
      'field_' . $person_type . '_email',
      array('host_entity_type' => 'field_collection_item')
    );

    $this->addFieldMapping('field_' . $person_type . '_email_address', 'email');
    $this->addFieldMapping('field_' . $person_type . '_email_type', NULL)
         ->defaultValue('Personal');
  }
}
class C21SellerEmailMigration extends C21BuyerSellerEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'seller');
  }
}
class C21BuyerEmailMigration extends C21BuyerSellerEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments, 'buyer');
  }
}
