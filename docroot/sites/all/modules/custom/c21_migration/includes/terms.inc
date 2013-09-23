<?php

/**
 * @file
 * Defines the migration of taxonomy data.
 */


/**
 * Defines the migration fo rthe Listing Sewage taxonomy.
 */
class C21TermsListingMigration extends C21Migration {

  private $vocabulary;
  protected $ucwords;

  public function __construct($arguments, $vocabulary, $ucwords = FALSE) {
    parent::__construct($arguments);
    $this->vocabulary = $vocabulary;
    $this->ucwords = $ucwords;
    $this->description = t('c21hull.com terms - %vocab', array('%vocab' => $this->vocabulary['name']));

    // Setup the source object for the tag data.
    $query = Database::getConnection('default', C21_MIGRATION_SOURCE)
         ->select($this->vocabulary['table'])
         ->fields($this->vocabulary['table'], array($this->vocabulary['column']))
         ->groupBy($this->vocabulary['column']);
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Setup the destination object.
    $this->destination = new MigrateDestinationTerm($this->vocabulary['vocabulary']);

    // Setup the mapping object.
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          $this->vocabulary['column'] =>  array(
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
            'description' => $this->vocabulary['description'],
          )
        ),
        MigrateDestinationTerm::getKeySchema()
    );

    $this->addFieldMapping('name', $this->vocabulary['column']);
  }

  function prepareRow($source_row) {
    $normalized_values = array();
    $normalize_function = 'normalize' . str_replace(' ', '', ucwords($this->vocabulary['name']));
    $normalize_function = method_exists($this, $normalize_function) ? $normalize_function : 'normalize';
    $delimiters = $this->normalizeDelimiters($this->vocabulary['column']);

    $terms = strtolower($source_row->{$this->vocabulary['column']});
    $terms = $this->explodeTerms($terms, $delimiters);
    foreach ($terms as $term) {
      $term = trim($term);
      $normalized_value = trim($this->{$normalize_function}($term));
      if (!empty($normalized_value)) {
        $normalized_values[] = $this->ucwords ? ucwords($normalized_value) : $normalized_value;
      }
    }

    if (!empty($normalized_values)) {
      $source_row->{$this->vocabulary['column']} = implode(',', $normalized_values);
    }
    else {
      return FALSE;
    }
  }
}

/**
 * Defines the migration fo rthe Listing Sewage taxonomy.
 */
class C21TermsListingSewageMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'sewage',
      'table' => 'listing_building_dtl',
      'column' => 'sewage',
      'vocabulary' => 'listing_sewage',
      'description' => t('Sewage Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingWaterMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'water',
      'table' => 'listing_building_dtl',
      'column' => 'water',
      'vocabulary' => 'listing_water',
      'description' => t('Water Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingHeatMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'heat',
      'table' => 'listing_building_dtl',
      'column' => 'heat',
      'vocabulary' => 'listing_heat',
      'description' => t('Heat Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingInsulationMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'insulation',
      'table' => 'listing_building_dtl',
      'column' => 'insulation',
      'vocabulary' => 'listing_insulation',
      'description' => t('Insulation Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingGarageMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'garage',
      'table' => 'listing_building_dtl',
      'column' => 'garage',
      'vocabulary' => 'listing_garage',
      'description' => t('Garage Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingBasementMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'basement',
      'table' => 'listing_building_dtl',
      'column' => 'basement',
      'vocabulary' => 'listing_basement',
      'description' => t('Basement Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingWindowsMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'windows',
      'table' => 'listing_building_dtl',
      'column' => 'windows',
      'vocabulary' => 'listing_windows',
      'description' => t('Windows Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingFloorsMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'floors',
      'table' => 'listing_building_dtl',
      'column' => 'floors',
      'vocabulary' => 'listing_floors',
      'description' => t('Floors Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingWallsMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'walls',
      'table' => 'listing_building_dtl',
      'column' => 'walls',
      'vocabulary' => 'listing_walls',
      'description' => t('Walls Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingAdditionalBuildingMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'additional building',
      'table' => 'listing_building_dtl',
      'column' => 'add_building',
      'vocabulary' => 'listing_additional_building',
      'description' => t('Additional Building Terms'),
    );

    parent::__construct($arguments, $vocabulary);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingSchoolDistrictMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'school district',
      'table' => 'listing_building_dtl',
      'column' => 'school_district',
      'vocabulary' => 'listing_school_district',
      'description' => t('School District'),
    );

    parent::__construct($arguments, $vocabulary, TRUE);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingDevelopmentMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'development',
      'table' => 'listing_location_dtl',
      'column' => 'development',
      'vocabulary' => 'listing_development',
      'description' => t('Development'),
    );

    parent::__construct($arguments, $vocabulary, TRUE);
  }
}

/**
 * Defines the migration fo rthe Listing Water taxonomy.
 */
class C21TermsListingTownshipMigration extends C21TermsListingMigration {
  public function __construct($arguments) {
    $vocabulary = array(
      'name' => 'township',
      'table' => 'listing_location_dtl',
      'column' => 'township',
      'vocabulary' => 'listing_township',
      'description' => t('Township'),
    );

    parent::__construct($arguments, $vocabulary, TRUE);
  }
}


