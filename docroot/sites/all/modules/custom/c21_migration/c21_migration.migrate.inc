<?php

/**
 * Implements hook_migrate_api().
 */
function c21_migration_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'c21User' => array(
        'class_name' => 'C21UserMigration',
      ),
      'c21Agent' => array(
        'class_name' => 'C21AgentMigration',
      ),
      'c21Listing' => array(
        'class_name' => 'C21ListingMigration',
      ),
      'c21TermsListingSewage' => array(
        'class_name' => 'C21TermsListingSewageMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingWater' => array(
        'class_name' => 'C21TermsListingWaterMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingHeat' => array(
        'class_name' => 'C21TermsListingHeatMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingInsulation' => array(
        'class_name' => 'C21TermsListingInsulationMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingRoadSurface' => array(
        'class_name' => 'C21TermsListingRoadSurfaceMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingGarage' => array(
        'class_name' => 'C21TermsListingGarageMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingBasement' => array(
        'class_name' => 'C21TermsListingBasementMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingWindows' => array(
        'class_name' => 'C21TermsListingWindowsMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingFloors' => array(
        'class_name' => 'C21TermsListingFloorsMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingWalls' => array(
        'class_name' => 'C21TermsListingWallsMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingAdditionalBuilding' => array(
        'class_name' => 'C21TermsListingAdditionalBuildingMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingSchoolDistrict' => array(
        'class_name' => 'C21TermsListingSchoolDistrictMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingFurniture' => array(
        'class_name' => 'C21TermsListingFurnitureMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingElectricCompany' => array(
        'class_name' => 'C21TermsListingElectricCompanyMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingDevelopment' => array(
        'class_name' => 'C21TermsListingDevelopmentMigration',
        'group' => 'Listing Vocabularies',
      ),
      'c21TermsListingTownship' => array(
        'class_name' => 'C21TermsListingTownshipMigration',
        'group' => 'Listing Vocabularies',
      ),
    ),
  );
  return $api;
}

/**
 * Defines the base class for the c21hull data migration.
 */
abstract class C21Migration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Alexander Ross', 'alex@bleen.net', t('Technical Lead')),
      new MigrateTeamMember('Robin Gruen', 'rgruen@c21hull.com', t('Product Owner')),
    );
  }

  public function normalize(&$value, $matches = array(), $contains = array(), $lowercase = TRUE) {
    if (empty($value)) {
      return FALSE;
    }

    $value = $lowercase ? strtolower($value) : $value;

    // Add a set of `contains` and `matches` for invalid and junk data.
    $matches = array_merge($matches, array(
      '*' => FALSE,
      '**' => FALSE,
      '***' => FALSE,
      '****' => FALSE,
      '*****' => FALSE,
      '******' => FALSE,
      '*******' => FALSE,
      '********' => FALSE,
      '*********' => FALSE,
      'x' => FALSE,
      'xx' => FALSE,
      'xxx' => FALSE,
      'xxxx' => FALSE,
      'xxxxx' => FALSE,
      'xxxxxx' => FALSE,
      'xxxxxxx' => FALSE,
      'xxxxxxxx' => FALSE,
      'xxxxxxxxx' => FALSE,
      'xxxxxxxxxx' => FALSE,
      'uk' => 'unknown',
      'unknown' => 'unknown',
      'u/k' => 'unknown',
      'u / k' => 'unknown',
    ));
    $contains = array_merge($contains, array(
      'shared' => 'shared',
      '?' => 'unknown',
      '??' => 'unknown',
      '???' => 'unknown',
      '????' => 'unknown',
      'tbd' => 'to be determined',
      'none' => 'none',
      'test' => FALSE,
      'n/a' => FALSE,
      'n / a' => FALSE,
      'mixed' => 'various',
      'various' => 'various',
      'see ' => FALSE,
    ));

    // Matches should always be checked first.
    foreach ($matches as $string => $normalized) {
      if ($value == $string) {
// drush_print('MATCHED ' . $value . ' (returned ' . $normalized . ')');
        return trim($normalized);
      }
    }

    foreach ($contains as $string => $normalized) {
      if (stripos($value, $string) !== FALSE) {
// drush_print($value . ' CONTAINS ' . $string . ' (returned ' . $normalized . ')');
        return trim($normalized);
      }
    }
drush_print('NO MATCH: ' . $value);
    // As a fallback, return the value itself.
    return trim($value);
  }

  public function normalizeSewage($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array(
      'septic needed - expired permit' => 'septic needed,permit required',
      'septic/cesspool' => 'septic,cesspool',
    );
    $contains = array(
      'septic needed' => 'septic needed',
      'septics' => 'septic (multiple)',
      'septic' => 'septic',
      'central' => 'central',
      'cess' => 'cesspool',
      'permit' => 'permit required',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeWater($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array();
    $contains = array(
      'well needed' => 'well needed',
      'wells' => 'well (multiple)',
      'well' => 'well',
      'central' => 'central',
      'community' => 'community',
      'public' => 'public',
      'seasonal' => 'seasonal',
      'permit req' => 'permit required',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeHeat($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array(
    );
    $contains = array(
      'gha' => 'gha',
      'gfa' => 'gfa',
      'ghw' => 'ghw',
      'hwg' => 'ghw',
      'gfha' => 'gfha',
      'ghwbb' => 'ghwbb',
      'hwbb' => 'hwbb',
      'bbe' => 'ebb',
      'ebb' => 'ebb',
      'wbb' => 'wbb',
      'ofa' => 'ofa',
      'ofha' => 'ofha',
      'oha' => 'oha',
      'ofa' => 'ofa',
      'ohw' => 'ohwbb',
      'pfa' => 'pfa',
      'pfha' => 'pfha',
      'pha' => 'pha',
      'phw' => 'phw',
      'phwbb' => 'phwbb',
      'cac' => 'central air',
      'central' => 'central air',
      'thermal' => 'thermal',
      'steam' => 'steam',
      'fireplace' => 'fireplace',
      'heatpump' => 'heat pump',
      'heat pump' => 'heat pump',
      'wood' => 'wood',
      'f/a' => 'forced air',
      'forced air' => 'forced air',
      'fha' => 'forced air',
      'kerosene' => 'kerosene',
      'pellet' => 'pellet stove',
      'prop' => 'propane',
      'radia' => 'radiators',
      'electric' => 'electric',
      'oil' => 'oil',
      'nat.' => 'natural gas',
      'natural' => 'natural gas',
      'town gas' => 'town gas',
      'gas' => 'gas',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeRoadSurface($value, $delimiter = "/", $return_all = FALSE) {
    $matches = array(
      't & c' => 'tar & chip',
    );
    $contains = array(
      't&c' => 'tar & chip',
      'paved' => 'paved',
      'undeveloped' => 'dirt',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeGarage($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array(
      'garage' => '1 car',
      'yes' => '1 car',
      'small' => FALSE,
      '*see add info' => FALSE,
    );
    $contains = array(
      'carport' => 'carport',
      'car port' => 'carport',
      'car-port' => 'carport',
      'attached' => 'attached',
      'detached' => 'detached',
      'det\'d' => 'detached',
      'oversize' => 'oversized',
      'heated' => 'heated',
      'workshop' => 'workshop',
      '1 car' => '1 car',
      '1-car' => '1 car',
      '1+' => '1 car',
      '1.5' => '1.5 cars',
      '1car' => '1 car',
      '1 bay' => '1 car',
      '2 car' => '2 cars',
      '2-car' => '2 cars',
      '2+' => '2 cars',
      '2.5' => '2.5 cars',
      '2car' => '2 cars',
      '2 bay' => '2 cars',
      '3 car' => '3 cars',
      '3-car' => '3 cars',
      '3+' => '3 cars',
      '3.5' => '3.5 cars',
      '3car' => '3 cars',
      '3 bay' => '3 cars',
      '4 car' => '4 cars',
      '4-car' => '4 cars',
      '4+' => '4 cars',
      '4.5' => '4.5 cars',
      '4car' => '4 cars',
      '4 bay' => '4 cars',
      '5 car' => '5 cars',
      '5-car' => '5 cars',
      '5+' => '5 cars',
      '5.5' => '5.5 cars',
      '5car' => '5 cars',
      '5 bay' => '5 cars',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeBasement($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array(
      't & c' => 'tar & chip',
    );
    $contains = array(
      'cellar' => 'cellar',
      'full' => 'full',
      'high crawl' => 'stand-up (high) crawl',
      'hi crawl' => 'stand-up (high) crawl',
      'hi-crawl' => 'stand-up (high) crawl',
      'stand-up' => 'stand-up (high) crawl',
      'partial' => 'partially finished',
      'part fin' => 'partially finished',
      'part. fin' => 'partially finished',
      'part' => 'partially finished',
      'unfinished' => 'unfinished',
      'finished' => 'finished',
      '1/2 crawl' => '1/2 crawl',
      '1/3 crawl' => '1/3 crawl',
      '2/3 crawl' => '2/3 crawl',
      '1/4 crawl' => '1/4 crawl',
      '3/4 crawl' => '3/4 crawl',
      '1/2 full' => '1/2 full',
      '1/3 full' => '1/3 full',
      '2/3 full' => '2/3 full',
      '1/4 full' => '1/4 full',
      '3/4 full' => '3/4 full',
      'crwal' => 'crawl',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeWindows($value, $delimiter = ",", $return_all = FALSE) {
    $contains = array(
      'andersen' => 'andersen',
      'insulated' => 'insulated',
      'lead' => 'lead glass',
      'new' => 'new',
      'jeldwin' => 'jeldwin',
      'storm' => 'storm windows',
      'screen' => 'screens',
      'therm' => 'thermal',
      'double' => 'double pane',
      'd. pane' => 'double pane',
      'single' => 'single pane',
      's. pane' => 'single pane',
      'single' => 'single pane',
      'triple' => 'triple pane',
      'dp' => 'double pane',
      'sp' => 'single pane',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeFloors($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array(

    );
    $contains = array(
      'laminent' => 'laminate',
      'laminant' => 'laminate',
      'laminate' => 'laminate',
      'maple' => 'maple',
      'marble' => 'marble',
      'concrete' => 'concrete',
      'oak' => 'oak',
      'bamboo' => 'bamboo',
      'hickory' => 'hickory',
      'pine' => 'pine',
      'ply wood' => 'plywood',
      'cherry' => 'cherry',
      'hardwood' => 'hardwood',
      'sub-flooring' => 'sub-flooring',
      'pergo' => 'pergo',
      'plank' => 'plank',
      'cork' => 'cork',
      'linoleum' => 'linoleum',
      'limestone' => 'limestone',
      'pavers' => 'pavers',
      'slate' => 'slate',
      'granite' => 'granite',
      'bluestone' => 'bluestone',
      'brick' => 'brick',
      'flagstrone' => 'flagstone',
      'stone' => 'stone',
      'vinyl' => 'vinyl',
      'carpet' => 'carpet',
      'tile' => 'tile',
      'ceramic' => 'ceramic tile',
      'porcelain' => 'porcelain',
      'needs' => 'none',
      'unfinished' => 'unfinished',
      'wood' => 'wood',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeWalls($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array();
    $contains = array(
      'concrete' => 'concrete',
      'cedar' => 'cedar',
      'log' => 'log',
      'knotty pine' => 'knotty pine',
      'rough cut pine' => 'rough cut pine',
      'pine' => 'pine',
      'stucco' => 'stucco',
      'plaster' => 'plaster',
      'wains' => 'wainscoting',
      'wanes' => 'wainscoting',
      'painted panel' => 'painted paneling',
      'panel' => 'paneling',
      'barn' => 'barn board',
      'vinyl' => 'vinyl',
      't&g' => 'tongue & groove',
      't & g' => 'tongue & groove',
      'plaster' => 'plaster',
      'tile' => 'tile',
      'wallpaper' => 'wallpaper',
      'sheetrock' => 'sheetrock',
      'wood' => 'wood',
      'mix' => 'various',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeAdditionalBuilding($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array();
    $contains = array(
      'greenhouse' => 'greenhouse',
      'gazebo' => 'gazebo',
      'cabana' => 'cabana',
      'pool' => 'pool house',
      'cabin' => 'cabin',
      'playhouse' => 'playhouse',
      'workshop' => 'workshop',
      'wood storage' => 'wood storage',
      'studio' => 'studio',
      'outhouse' => 'outhouse',
      'carport' => 'carport',
      'car port' => 'carport',
      'car-port' => 'carport',
      'carriage' => 'carriage house',
      'carraige' => 'carriage house',
      'outbuildings' => 'outbuilding (multiple)',
      'outbuilding' => 'outbuilding',
      'barns' => 'barns (multiple)',
      'barn' => 'barn',
      'sheds' => 'sheds (multiple)',
      'shed' => 'shed',
      'garage' => FALSE,
      'multiple' => 'multiple',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }

  public function normalizeFurniture($value, $delimiter = ",", $return_all = FALSE) {
    $matches = array();
    $contains = array(
      'all' => 'all',
      'some' => 'some',
      'most' => 'most',
      'included' => 'included',
      'negotiable' => 'negotiable',
      'fully furnish' => 'fully furnished',
      'furnished' => 'furnished',
    );

    $normalized = $this->normalize($value, $matches, $contains);

    if (is_string($normalized)) {
      $normalized_values = explode($delimiter, $normalized);
      return $return_all ? $normalized_values : $normalized_values[0];
    }
    else {
      return $normalized;
    }
  }
}
