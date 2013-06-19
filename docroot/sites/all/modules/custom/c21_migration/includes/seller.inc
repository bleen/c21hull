<?php

/**
 * Defines the migration of `sellers`.
 */
class C21SellerMigration extends C21Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com sellers');
    $this->dependencies = array('c21Listing');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'listing_id' => array(
          'type' => 'varchar',
          'not null' => TRUE,
          'length' => 255,
          'alias' => 'ls',
        ),
        'disp_order' => array(
          'type' => 'int',
          'not null' => TRUE,
          'unsigned' => TRUE,
          'alias' => 'ls',
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    $source_query = Database::getConnection('default', 'legacy')
         ->select('listing_sellers', 'ls')
         ->fields('ls', array('listing_id', 'disp_order', 'firstname', 'lastname', 'company', 'address', 'city', 'state', 'zip', 'office_only'))
         ->orderBy('disp_order');

    $this->source = new MigrateSourceSQL($source_query, array(), NULL, array('map_joinable' => FALSE));
    $this->destination = new MigrateDestinationFieldCollection(
      'field_listing_seller',
      array('host_entity_type' => 'node')
    );

    $this->addFieldMapping('host_entity_id', 'listing_id')
      ->sourceMigration('c21Listing');
    $this->addFieldMapping('field_seller_first_name', 'firstname');
    $this->addFieldMapping('field_seller_last_name', 'lastname');
    $this->addFieldMapping('field_seller_company', 'company');
    $this->addFieldMapping('field_seller_internal_only', 'office_only');

    $this->addFieldMapping('field_seller_address', NULL)
         ->defaultValue('US');
    $this->addFieldMapping('field_seller_address:thoroughfare', 'address');
    $this->addFieldMapping('field_seller_address:locality', 'city');
    $this->addFieldMapping('field_seller_address:administrative_area', 'state');
    $this->addFieldMapping('field_seller_address:postal_code', 'zip');
  }
}

class C21SellerPhoneEmailMigration extends C21Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller phone numbers');
    $this->dependencies = array('c21Seller');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'listing_id' => array(
          'type' => 'varchar',
          'not null' => TRUE,
          'length' => 255,
          'alias' => 'ls',
        ),
        'disp_order' => array(
          'type' => 'int',
          'not null' => TRUE,
          'unsigned' => TRUE,
          'alias' => 'ls',
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    $source_query = Database::getConnection('default', 'legacy')
         ->select('listing_sellers', 'ls')
         ->fields('ls', array('listing_id', 'disp_order', 'home_phone', 'business_phone', 'local_phone', 'cell_phone', 'fax', 'email'));
    $this->source = new MigrateSourceSQL($source_query, array(), NULL, array('map_joinable' => FALSE));
    $this->destination = new MigrateDestinationFieldCollection(
      'field_seller_phone',
      array('host_entity_type' => 'field_collection_item')
    );

    $this->addFieldMapping('host_entity_id', 'seller_id')
      ->sourceMigration('c21Seller');

  }
  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    $source_row->seller_id = array(
      array(
        'listing_id' => $source_row->listing_id,
        'disp_order' => $source_row->disp_order,
      ),
    );
  }

  function formatPhoneNumber($number) {
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

    return $ext ? $num . ' x' . $ext : $num;
  }

}

/**
 * Defines the migration of `sellers` home phone.
 */
class C21SellerHomePhoneMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller home phone numbers');

    $this->addFieldMapping('field_seller_phone_number', 'home_phone');
    $this->addFieldMapping('field_seller_phone_type', NULL)
         ->defaultValue('Home');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->home_phone)) {
      return FALSE;
    }

    $source_row->home_phone = $this->formatPhoneNumber($source_row->home_phone);
  }
}

/**
 * Defines the migration of `sellers` business phone.
 */
class C21SellerBusinessPhoneMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller home phone numbers');

    $this->addFieldMapping('field_seller_phone_number', 'business_phone');
    $this->addFieldMapping('field_seller_phone_type', NULL)
         ->defaultValue('Business');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->business_phone)) {
      return FALSE;
    }

    $source_row->business_phone = $this->formatPhoneNumber($source_row->business_phone);
  }
}

/**
 * Defines the migration of `sellers` local phone.
 */
class C21SellerLocalPhoneMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller local phone numbers');

    $this->addFieldMapping('field_seller_phone_number', 'local_phone');
    $this->addFieldMapping('field_seller_phone_type', NULL)
         ->defaultValue('Local');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->local_phone)) {
      return FALSE;
    }

    $source_row->local_phone = $this->formatPhoneNumber($source_row->local_phone);
  }
}

/**
 * Defines the migration of `sellers` cell phone.
 */
class C21SellerCellPhoneMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller cell phone numbers');

    $this->addFieldMapping('field_seller_phone_number', 'cell_phone');
    $this->addFieldMapping('field_seller_phone_type', NULL)
         ->defaultValue('Cell');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->cell_phone)) {
      return FALSE;
    }

    $source_row->cell_phone = $this->formatPhoneNumber($source_row->cell_phone);
  }
}

/**
 * Defines the migration of `sellers` fax.
 */
class C21SellerFaxMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller fax numbers');

    $this->addFieldMapping('field_seller_phone_number', 'fax');
    $this->addFieldMapping('field_seller_phone_type', NULL)
         ->defaultValue('Fax');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->fax)) {
      return FALSE;
    }

    $source_row->fax = $this->formatPhoneNumber($source_row->fax);
  }
}

/**
 * Defines the migration of `sellers` email.
 */
class C21SellerEmailMigration extends C21SellerPhoneEmailMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com seller email');

    $this->destination = new MigrateDestinationFieldCollection(
      'field_seller_email',
      array('host_entity_type' => 'field_collection_item')
    );

    $this->addFieldMapping('field_seller_email_address', 'email');
    $this->addFieldMapping('field_seller_email_type', NULL)
         ->defaultValue('Personal');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    if (empty($source_row->email)) {
      return FALSE;
    }
  }
}





