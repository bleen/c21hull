<?php

/**
 * Defines the migration of `Listings`.
 */
class C21ListingMigration extends C21Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com listings');
    $this->dependencies = array('c21Agent');

    // Setup the source object for the listing data.
    $source_fields = $this->getSourceFields();
    $query = Database::getConnection('default', 'legacy')
          ->select('listings', 'l');
    $query->join('listing_building_dtl', 'lbd', 'l.listing_id = lbd.listing_id');
    $query->join('listing_location_dtl', 'lld', 'l.listing_id = lld.listing_id');
    $query->join('listing_web_dtl', 'lwd', 'l.listing_id = lwd.listing_id');
    $query->join('listing_commercial_dtl', 'lcd', 'l.listing_id = lcd.listing_id');
    $query->join('listing_transaction_dtl', 'ltd', 'l.listing_id = ltd.listing_id');
    $query->fields('l')
          ->fields('lbd')
          ->fields('lld')
          ->fields('lcd')
          ->fields('ltd', array('closing_date', 'sale_price', 'gcc', 'sale_agent'))
          ->fields('lwd');
    $this->source = new MigrateSourceSQL($query, $source_fields, NULL, array('map_joinable' => FALSE));

    // Setup the destination object.
    $this->destination = new MigrateDestinationNode('listing');

    // Setup the mapping object.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'listing_id' => array(
          'type' => 'varchar',
          'length' => 24,
          'not null' => TRUE,
          'description' => 'Listing ID.',
          'alias' => 'l',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Map simple mappings.
    $this->addSimpleMappings(array('nid', 'title'));
    $this->addSimpleFieldMappings(array('id_prefix', 'list_date', 'closing_date', 'sale_price', 'mls', 'list_price', 'commission', 'acreage', 'taxes', 'dues', 'style', 'building_type', 'year_built', 'bedrooms', 'bathrooms', 'siding', 'fireplace', 'porch', 'decks', 'personal_property', 'directions', 'block', 'lot', 'section', 'state', 'sq_ft_above', 'sq_ft_below', 'sq_ft_finished'));

    // Map standard field mappings
    $this->addFieldMapping('is_new')
         ->defaultValue('TRUE');
    $this->addFieldMapping('uid', 'created_by')
         ->sourceMigration('c21User');
    $this->addFieldMapping('status', 'is_hidden');
    $this->addFieldMapping('promote', 'is_featured');
    $this->addFieldMapping('created', 'creation_date');
    $this->addFieldMapping('field_listing_agent', 'agent')
         ->separator('/')
         ->callbacks(array($this, 'callbackProcessAgent'));
    $this->addFieldMapping('field_listing_sale_agent', 'sale_agent')
         ->separator('/')
         ->callbacks(array($this, 'callbackProcessAgent'));
    $this->addFieldMapping('field_listing_description', 'blurb');
    $this->addFieldMapping('field_listing_tags', 'tags')
         ->separator(',');
    $this->addFieldMapping('field_listing_description:format', NULL)
         ->defaultValue('rich_text');
    $this->addFieldMapping('field_listing_type', 'listing_type')
         ->callbacks(array($this, 'callbackProcessListingType'));
    $this->addFieldMapping('field_listing_status', 'status')
         ->callbacks(array($this, 'callbackProcessListingStatus'));
    $this->addFieldMapping('field_listing_zoning', 'zoning')
         ->callbacks(array($this, 'callbackProcessListingZoning'));
    $this->addFieldMapping('field_listing_lockbox_key', 'lockbox');
    $this->addFieldMapping('field_listing_virtual_tour', 'tour_link');
    $this->addFieldMapping('field_listing_tax_map', 'tax_map_num');
    $this->addFieldMapping('field_listing_street', 'street_road');
    $this->addFieldMapping('field_listing_notes', 'additional_info');
    $this->addFieldMapping('field_listing_notes:format', NULL)
         ->defaultValue('rich_text');
    $this->addFieldMapping('field_listing_personal_property:format', NULL)
         ->defaultValue('rich_text');
    $this->addFieldMapping('field_listing_gross_commission', 'gcc');

    // Map "Photos".
    $this->addFieldMapping('field_listing_featured_photo', 'featured_photo_filename');
    $this->addFieldMapping('field_listing_featured_photo:source_dir', 'featured_photo_source_dir');
    $this->addFieldMapping('field_listing_featured_photo:destination_file', 'featured_photo_destination_file');
    $this->addFieldMapping('field_listing_featured_photo:file_replace')
        ->defaultValue(MigrateFile::FILE_EXISTS_REUSE);
    $this->addFieldMapping('field_listing_photos', 'photos_filenames');
    $this->addFieldMapping('field_listing_photos:source_dir', 'photos_source_dir');
    $this->addFieldMapping('field_listing_photos:destination_file', 'photos_destination_files');
    $this->addFieldMapping('field_listing_photos:file_replace')
        ->defaultValue(MigrateFile::FILE_EXISTS_REUSE);

    // Map taxonomies term reference fields.
    $this->addFieldMapping('field_listing_sewage', 'sewage')
         ->separator(',');
    $this->addFieldMapping('field_listing_water', 'water')
         ->separator(',');
    $this->addFieldMapping('field_listing_heat', 'heat')
         ->separator(',');
    $this->addFieldMapping('field_listing_insulation', 'insulation')
         ->separator(',');
    $this->addFieldMapping('field_listing_garage', 'garage')
         ->separator(',');
    $this->addFieldMapping('field_listing_basement', 'basement')
         ->separator(',');
    $this->addFieldMapping('field_listing_windows', 'windows')
         ->separator(',');
    $this->addFieldMapping('field_listing_floors', 'floors')
         ->separator(',');
    $this->addFieldMapping('field_listing_walls', 'walls')
         ->separator(',');
    $this->addFieldMapping('field_listing_additional_bldg', 'add_building')
         ->separator(',');
    $this->addFieldMapping('field_listing_school_district', 'school_district')
         ->separator(',');
    $this->addFieldMapping('field_listing_development', 'development')
         ->separator(',');
    $this->addFieldMapping('field_listing_township', 'township')
         ->separator(',');

    // Map room Measurements.
    foreach ($this->getRooms() as $room => $room_data) {
      foreach ($this->getFloors() as $floor => $floor_data) {
        $this->addFieldMapping('field_listing_' . $room_data['destination'] . '_' . $floor_data['destination'], $room . '_' . $floor);
      }
    }

    // Map legacy data.
    $this->addFieldMapping('field_listing_legacy_data', 'legacy_data');

  }

  function prepareRow($source_row) {
    if (parent::prepareRow($source_row) === FALSE) {
      return FALSE;
    }

    // Remove listings whose id starts with two digits.
    if (!$this->validListingId($source_row->listing_id)) {
      return FALSE;
    }

    // Get the numeric portion of the listing id.
    list($prefix, $id) = explode('-', $source_row->listing_id);
    $source_row->nid = $id;
    $source_row->id_prefix = $prefix;

    // Make certain the title is present.
    if (empty($source_row->title)) {
      $source_row->title = ($source_row->status == 'forsale' ? 'For sale' : 'Unavailable') . ' in ' . $source_row->township;
    }

    // Prepare teh MLS Number by removing errant characters
    if (!empty($source_row->mls)) {
      $source_row->mls = preg_replace('/[^-0-9]/', '', $source_row->mls);
    }

    // Prepare the creation date, status, etc...
    $source_row->creation_date = strtotime($source_row->creation_date);
    $source_row->is_hidden = !$source_row->is_hidden;

    // Default the state for all listings to "PA"
    $source_row->state = 'PA';

    // Prepare the "building type" field. Options include "residence",
    // "commercial" or "land".
    $source_row->building_type = 'residence';
    if ($source_row->is_land == 1) {
      $source_row->building_type = 'land';
    }
    if (!empty($source_row->business_type)) {
      $source_row->building_type = 'commercial';
    }

    // Prepare images for import.
    $source_dir = variable_get('environment', 'local') ? '/Users/alex/Sites/c21hull/source_files/photos' : '/home/hull/c21hull.com/listings/photos';
    $source_dir .= '/' . $source_row->listing_id;
    if (file_exists($source_dir)) {
      $photos = scandir($source_dir);
      $filenames = array();
      $destination_filenames = array();

      $source_row->featured_photo_filename = $source_row->primary_photo . '_lg.jpg';
      $source_row->featured_photo_destination_file = $source_row->nid . '.jpg';
      $source_row->featured_photo_source_dir = $source_dir;
      foreach ($photos as $photo) {
        $file = pathinfo($photo);
        list($num, $size) = explode('_', $file['filename']);
        if ($file['extension'] == 'jpg' && $size == 'lg' && $num != $source_row->primary_photo) {
          $filenames[] = $file['basename'];
          if (is_numeric($num)) {
            $destination_filenames[] = $source_row->nid . '_' . $num  . '.' . $file['extension'];
          }
          else {
            $destination_filenames[] = $source_row->nid . '.' . $file['extension'];
          }
        }
        else {
          continue;
        }
      }
      $source_row->photos_filenames = $filenames;
      $source_row->photos_destination_files = $destination_filenames;
      $source_row->photos_source_dir = $source_dir;
    }

    // Special handling for school district. All the "Del" values are actually
    // the names of schools in the Deleware Valley district. We should alter
    // those values to be "Deleware valley" and add the school name to the
    // notes field.
    if (strpos($source_row->school_district, 'Del Val -') === 0) {
      switch ($source_row->school_district) {
        case 'Del Val - DD':
          $source_row->additional_info .= ' | Dingman-Deleware Elementary';
          break;
        case 'Del Val - DV':
          $source_row->additional_info .= ' | Deleware Valley Elementary';
          break;
        case 'Del Val - SH':
          $source_row->additional_info .= ' | Shohola Elementary';
          break;
      }
      $source_row->school_district = 'Delaware Valley';
    }

    // Prepare taxonomy terms.
    $source_row->tags = $this->prepareListingTags($source_row);
    $extra_sewage_fields = array(
      'shared' => 'shared',
      'septic_permit' => 'existing septic permit',
    );
    $extra_water_fields = array(
      'shared' => 'shared',
    );
    $extra_development_fields = array(
      'spec_notes' => '@value',
    );

    $source_row->sewage = $this->prepareListingTerms($source_row, 'sewage', 'normalizeSewage', $extra_sewage_fields);
    $source_row->water = $this->prepareListingTerms($source_row, 'water', 'normalizeWater', $extra_water_fields);
    $source_row->heat = $this->prepareListingTerms($source_row, 'heat', 'normalizeHeat');
    $source_row->insulation = $this->prepareListingTerms($source_row, 'insulation');
    $source_row->garage = $this->prepareListingTerms($source_row, 'garage', 'normalizeGarage');
    $source_row->basement = $this->prepareListingTerms($source_row, 'basement', 'normalizeBasement');
    $source_row->windows = $this->prepareListingTerms($source_row, 'windows', 'normalizeWindows');
    $source_row->floors = $this->prepareListingTerms($source_row, 'floors', 'normalizeFloors');
    $source_row->walls = $this->prepareListingTerms($source_row, 'walls', 'normalizeWalls');
    $source_row->add_building = $this->prepareListingTerms($source_row, 'add_building', 'normalizeAdditionalBuilding');
    $source_row->school_district = $this->prepareListingTerms($source_row, 'school_district');
    $source_row->development = $this->prepareListingTerms($source_row, 'development');
    $source_row->township = $this->prepareListingTerms($source_row, 'township');

    // Prepare measurements.
    foreach ($this->getRooms() as $room => $room_data) {
      foreach ($this->getFloors() as $floor => $floor_data) {
        $query = Database::getConnection('default', 'legacy')
          ->select('listing_measurements', 'lm')
          ->fields('lm', array('measurement'))
          ->condition('listing_id', $source_row->listing_id)
          ->condition('floor', $floor)
          ->condition('room', $room);

        $measurement = Database::getConnection('default', 'legacy')
          ->select('listing_measurements', 'lm')
          ->fields('lm', array('measurement'))
          ->condition('listing_id', $source_row->listing_id)
          ->condition('floor', $floor)
          ->condition('room', $room)
          ->execute()
          ->fetchField();

        $source_row->{$room . '_' . $floor} = is_null($measurement) ? '' : $measurement;
      }
    }

    // Prepare the list date and sale date.
    $list_date_data = array(
      'from' => $source_row->start_date != "0000-00-00" ? $source_row->start_date : NULL,
      'to' => $source_row->end_date != "0000-00-00" ? $source_row->end_date : NULL,
    );
    $source_row->list_date = drupal_json_encode($list_date_data);
    $closing_date_data = array(
      'from' => $source_row->closing_date != "0000-00-00" ? $source_row->closing_date : NULL,
    );
    $source_row->closing_date = drupal_json_encode($closing_date_data);


    // Prepare the list price and commission by removing 0 values.
    if ($source_row->list_price == 0) {
      $source_row->list_price = '';
    }
    if ($source_row->commission == 0) {
      $source_row->commission = '';
    }
    if ($source_row->sale_price == 0) {
      $source_row->sale_price = '';
    }
    if ($source_row->gcc == 0) {
      $source_row->gcc = '';
    }

    // Prepare the legacy data.
    $source_row->legacy_data = json_encode($source_row, JSON_PRETTY_PRINT);

    return TRUE;
  }

  /**
   * Definition for Migration complete() method
   */
  function complete($entity, $row) {
    if (module_exists('redirect')) {
      $source_url = 'listings/browse.htm?listing_id=' . $row->listing_id;

      // If one doesnt iexist, create an object with our redirect parameters.
      if (isset($entity->type) && $entity->type == 'listing' && !redirect_load_by_source($source_url)) {
        $redirect = new stdClass();

        redirect_object_prepare($redirect, array(
          'source' => $source_url,
          'source_options' => array(),
          'redirect' => 'node/' . $entity->nid,
          'redirect_options' => array(),
          'language' => LANGUAGE_NONE,
        ));
        redirect_save($redirect);
      }
    }
  }

  function getSourceFields() {
    $source_fields = array(
      'nid' => t('The numeric portion of the listing id from the old site.'),
      'tags' => t('General taxonomy terms (Lakeview, Foreclosure, etc...)'),
      'list_date' => t('The list date range for the listing.'),
      'featured_photo_filename' => t('Featured photo file'),
      'featured_photo_source_dir' => t('Featured photo source directory'),
      'featured_photo_destination_file' => t('Featured photo destination filename'),
      'photos_filenames' => t('Photo files'),
      'photos_source_dir' => t('Photo source directory'),
      'photos_destination_files' => t('Photo destination filename'),
      'sewage' => t('Sewage terms'),
      'water' => t('Water terms'),
      'heat' => t('Heat terms'),
      'insulation' => t('Insula terms'),
      'garage' => t('Garage terms'),
      'basement' => t('Basement terms'),
      'windows' => t('Windows terms'),
      'floors' => t('Floors terms'),
      'walls' => t('Walls terms'),
      'add_building' => t('Add building terms'),
      'school_district' => t('School terms'),
      'development' => t('Development terms'),
      'township' => t('Township terms'),
    );

    // Add fields for `Measurment` fields.
    foreach ($this->getRooms() as $room => $room_data) {
      foreach ($this->getFloors() as $floor => $floor_data) {
        $source_fields[$room . '_' . $floor] = $room_data['title'] . ' measurements (' . $floor_data['title'] . ')';
      }
    }

    return $source_fields;
  }

  function prepareListingTags($source_row) {
    $tags = array();
    if ($source_row->is_lakefront) {
      $tags[] = 'Lakefront';
    }
    if ($source_row->is_newconstruction) {
      $tags[] = 'New Construction';
    }
    if ($source_row->is_foreclosure) {
      $tags[] = 'Foreclosure';
    }
    if ($source_row->is_fine) {
      $tags[] = 'Fine & Unique';
    }
    return implode(',', $tags);
  }

  function prepareListingTerms($source_row, $field, $normalize_function = 'normalize', $extra_fields = array()) {
    $terms = array();

    $delimiters = $this->normalizeDelimiters($field);
    $source_terms = $this->explodeTerms($source_row->{$field}, $delimiters);

    foreach ($source_terms as $source_term) {
      $terms[] = $this->{$normalize_function}($source_term);
    }

    foreach ($extra_fields as $extra_field => $additional_term) {
      if ($source_row->{$extra_field}) {
        $terms[] = $additional_term == '@value' ? $source_row->{$extra_field} : $additional_term;
      }
    }

    return implode(',', $terms);
  }

  function callbackProcessAgent($values) {
    $ids = array();

    foreach ($values as $val) {
      $val = strtolower(trim($val));

      // Do some manual processing to normalize the data.
      switch ($val) {
        case stripos($val, "raarup") !== FALSE:
          $val = 'ed raarup';
          break;
        case stripos($val, "stafirny") !== FALSE:
          $val = 'jacqueline stafirny';
          break;
        case stripos($val, "mauro") !== FALSE:
          $val = 'kathy mauro';
          break;
        case stripos($val, "ciuffreda") !== FALSE:
          $val = 'kimberly ciuffreda';
          break;
        case stripos($val, "pizarro") !== FALSE:
          $val = 'leslie pizarro';
          break;
        case stripos($val, "peters") !== FALSE:
          $val = 'patricia peters';
          break;
        case stripos($val, "grippe") !== FALSE:
          $val = 'peggy grippe';
          break;
        case stripos($val, "hull") !== FALSE:
          $val = 'roy b. hull';
          break;
        case stripos($val, "soesman") !== FALSE:
          $val = 'sandy soesman';
          break;
        case stripos($val, "heiblim") !== FALSE:
          $val = 'sally heiblim';
          break;
        case stripos($val, "silverstone") !== FALSE:
          $val = 'ellen silverstone';
          break;
        case stripos($val, "cappello") !== FALSE:
          $val = 'sue cappello';
          break;
        case stripos($val, "rocco") !== FALSE:
          $val = 'theresa rocco';
          break;
        case stripos($val, "cook") !== FALSE:
          $val = 'elizabeth cook';
          break;
        case stripos($val, "scheibner") !==FALSE:
          $val = 'lisa scheibner';
          break;
        case stripos($val, "test") !== FALSE:
        case stripos($val, "xxxx") !== FALSE:
          $val = '';
          break;
      }

      if (!empty($val)) {
        // Get the new node ids for the given agent.
        $query = db_select('node', 'n');
        $query->condition('n.type', 'agent')
              ->condition('n.title', "%$val%", 'LIKE')
              ->fields('n', array('nid'));
        $nid = $query->execute()->fetchField();
        $ids[] = $nid;
      }
    }

    return $ids;
  }

  function callbackProcessListingType($value) {
    $query = new EntityFieldQuery();
    $entities = $query->entityCondition('entity_type', 'node')
                      ->entityCondition('bundle', 'listing_type')
                      ->execute();
    $nodes = node_load_multiple(array_keys($entities['node']));
    foreach ($nodes as $nid => $node) {
      if (strtolower($value) == strtolower($node->title)) {
        $value = $nid;
        break;
      }
    }

    return $value;
  }

  function callbackProcessListingStatus($value) {
    switch($value) {
      case 'forsale':
        $value = 'for_sale';
        break;
      case 'pending':
        $value = 'pending';
        break;
      case 'expired':
      case 'inactive':
        $value = 'inactive';
        break;
      case 'sold':
      case 'soldoutside':
        $value = 'sold';
        break;
      case 'wdperminently':
      case 'wdtemp':
        $value = 'withdrawn';
        break;
    }

    return $value;
  }

  function callbackProcessListingZoning($value) {
    switch($value) {
      case 'rescomm':
        $value = 'res_comm';
        break;
    }

    return $value;
  }

}
