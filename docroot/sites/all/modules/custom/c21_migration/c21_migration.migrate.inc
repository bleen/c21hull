<?php

/**
 * Implements hook_migrate_api().
 */
function c21_migration_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'listing_basic' => array(
        'title' => t('Basic Data'),
        'description' => 'Users',
      ),
      'listing_content' => array(
        'title' => t('Listing Content'),
      ),
      'listing_vocabularies' => array(
        'title' => t('Listing Vocabularies'),
      ),
    ),
    'migrations' => array(
      'c21User' => array(
        'class_name' => 'C21UserMigration',
        'group_name' => 'listing_basic',
      ),
      'c21Agent' => array(
        'class_name' => 'C21AgentMigration',
        'group_name' => 'listing_content',
      ),
      'c21Listing' => array(
        'class_name' => 'C21ListingMigration',
        'group_name' => 'listing_content',
      ),
      'c21TermsListingSewage' => array(
        'class_name' => 'C21TermsListingSewageMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingWater' => array(
        'class_name' => 'C21TermsListingWaterMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingHeat' => array(
        'class_name' => 'C21TermsListingHeatMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingInsulation' => array(
        'class_name' => 'C21TermsListingInsulationMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingRoadSurface' => array(
        'class_name' => 'C21TermsListingRoadSurfaceMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingGarage' => array(
        'class_name' => 'C21TermsListingGarageMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingBasement' => array(
        'class_name' => 'C21TermsListingBasementMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingWindows' => array(
        'class_name' => 'C21TermsListingWindowsMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingFloors' => array(
        'class_name' => 'C21TermsListingFloorsMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingWalls' => array(
        'class_name' => 'C21TermsListingWallsMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingAdditionalBuilding' => array(
        'class_name' => 'C21TermsListingAdditionalBuildingMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingSchoolDistrict' => array(
        'class_name' => 'C21TermsListingSchoolDistrictMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingFurniture' => array(
        'class_name' => 'C21TermsListingFurnitureMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingElectricCompany' => array(
        'class_name' => 'C21TermsListingElectricCompanyMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingDevelopment' => array(
        'class_name' => 'C21TermsListingDevelopmentMigration',
        'group_name' => 'listing_vocabularies',
      ),
      'c21TermsListingTownship' => array(
        'class_name' => 'C21TermsListingTownshipMigration',
        'group_name' => 'listing_vocabularies',
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

  /**
   * Shortcut for creating mapings that map a source of 'foo' to a destination
   * of 'field_[context]_foo'.
   *
   * @param array $fields
   *   An array of source field names.
   *
   * @param  string $context (optional)
   *   The context of the field being mapped to. This is typically the name of
   *   the content type.
   */
  protected function addSimpleFieldMappings($fields, $context = 'listing') {
    foreach ($fields as $field) {
      $this->addFieldMapping('field_' . $context . '_' . $field, $field);
    }
  }

  protected function explodeTerms($value, $delimiters) {
    $delimiters =  is_string($delimiters) ? array($delimiters) : $delimiters;
    $delimiters = preg_quote(implode('', $delimiters));

    return empty($delimiters) ? array($value) : preg_split("{[" . $delimiters . "]}", $value, NULL, PREG_SPLIT_NO_EMPTY);
  }

  protected function normalize($value, $matches = array(), $contains = array()) {
    $value = strtolower($value);

    // Add a set of `contains` and `matches` for invalid and junk data.
    $matches = array_merge($matches, array(
      '*' => '',
      '**' => '',
      '***' => '',
      '****' => '',
      '*****' => '',
      '******' => '',
      '*******' => '',
      '********' => '',
      '*********' => '',
      'x' => '',
      'xx' => '',
      'xxx' => '',
      'xxxx' => '',
      'xxxxx' => '',
      'xxxxxx' => '',
      'xxxxxxx' => '',
      'xxxxxxxx' => '',
      'xxxxxxxxx' => '',
      'xxxxxxxxxx' => '',
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
      'test' => '',
      'n/a' => '',
      'n / a' => '',
      'mixed' => 'various',
      'various' => 'various',
      'see ' => '',
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

  protected function normalizeDelimiters($vocabulary) {
    $delimiters = array();

    switch ($vocabulary) {
      case 'sewage':
      case 'water':
      case 'road_surface':
        $delimiters[] = '/';
        break;
      case 'heat':
        $delimiters[] = '/';
        $delimiters[] = ',';
        $delimiters[] = '+';
        break;
      case 'garage':
        $delimiters[] = '/';
        $delimiters[] = '&';
        break;
      case 'basement':
      case 'floors':
        $delimiters[] = ',';
        break;
      case 'windows':
      case 'furniture':
        $delimiters[] = '/';
        $delimiters[] = ',';
        $delimiters[] = '&';
        break;
      case 'walls':
        $delimiters[] = '/';
        $delimiters[] = ',';
        break;
      case 'add_building':
        $delimiters[] = '/';
        $delimiters[] = ',';
        $delimiters[] = '+';
        $delimiters[] = '&';
        break;
    }

    return $delimiters;
  }

  protected function normalizeSewage($value) {
    $matches = array();
    $contains = array(
      'septic needed' => 'septic needed',
      'septics' => 'septic (multiple)',
      'septic' => 'septic',
      'central' => 'central',
      'cess' => 'cesspool',
      'permit' => 'permit required',
    );

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeWater($value) {
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeHeat($value) {
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeRoadSurface($value, $delimiter = "/", $force_string = FALSE) {
    $matches = array(
      't & c' => 'tar & chip',
    );
    $contains = array(
      't&c' => 'tar & chip',
      'paved' => 'paved',
      'undeveloped' => 'dirt',
    );

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeGarage($value) {
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeBasement($value) {
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
      'part fin.' => 'partially finished',
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeWindows($value) {
    $matches = array();
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeFloors($value) {
    $matches = array();
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeWalls($value) {
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeAdditionalBuilding($value) {
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
      'garage' => '',
      'multiple' => 'multiple',
    );

    return $this->normalize($value, $matches, $contains);
  }

  protected function normalizeFurniture($value) {
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

    return $this->normalize($value, $matches, $contains);
  }

  protected function getFloors() {
    $floors = array(
      '1' => array('title' => 'Floor 1', 'destination' => 'f1'),
      '2' => array('title' => 'Floor 2', 'destination' => 'f2'),
      '0' => array('title' => 'Basement', 'destination' => 'b'),
    );

    return $floors;
  }

  protected function getRooms() {
    $rooms = array(
      'livingroom' => array('title' => 'Living Room', 'destination' => 'living_room'),
      'diningroom' => array('title' => 'Dining Room', 'destination' => 'dining_room'),
      'kitchen' => array('title' => 'Kitchen', 'destination' => 'kitchen'),
      'livdinroom' => array('title' => 'Living/Dining Room', 'destination' => 'liv_din_room'),
      'dinkitchen' => array('title' => 'Dining/Kitchen', 'destination' => 'din_kitchen'),
      'bath1' => array('title' => 'Bathroom 1', 'destination' => 'bathroom1'),
      'bath2' => array('title' => 'Bathroom 2', 'destination' => 'bathroom2'),
      'bath3' => array('title' => 'Bathroom 3', 'destination' => 'bathroom3'),
      'bedroom1' => array('title' => 'Bedroom 1', 'destination' => 'bedroom1'),
      'bedroom2' => array('title' => 'Bedroom 2', 'destination' => 'bedroom2'),
      'bedroom3' => array('title' => 'Bedroom 3', 'destination' => 'bedroom3'),
      'bedroom4' => array('title' => 'Bedroom 4', 'destination' => 'bedroom4'),
      'family_room' => array('title' => 'Family Room', 'destination' => 'family_room'),
      'laundry' => array('title' => 'Laundry', 'destination' => 'laundry'),
      'other1' => array('title' => 'Other 1', 'destination' => 'other1'),
      'other2' => array('title' => 'Other 2', 'destination' => 'other2'),
    );

    return $rooms;
  }

}
