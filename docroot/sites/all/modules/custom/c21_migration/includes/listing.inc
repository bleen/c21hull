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
    $source_fields = array(
      'nid' => t('The numeric portion of the listing id from the old site.'),
      'tags' => t('General taxonomy terms (Lakeview, Foreclosure, etc...)'),
    );
    $query = Database::getConnection('default', 'legacy')
          ->select('listings', 'l');
    $query->join('listing_building_dtl', 'lbd', 'l.listing_id = lbd.listing_id');
    $query->join('listing_location_dtl', 'lld', 'l.listing_id = lld.listing_id');
    $query->join('listing_web_dtl', 'lwd', 'l.listing_id = lwd.listing_id');
    $query->fields('l')
          ->fields('lbd')
          ->fields('lld')
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


    $this->addSimpleMappings(array('nid', 'title'));

    // Migrate requires is_new to be TRUE when predefining an nid.
    $this->addFieldMapping('is_new')
         ->defaultValue('TRUE');

    $this->addFieldMapping('field_listing_agent', 'agent')
         ->separator('/')
         ->callbacks(array($this, 'callbackProcessListingAgent'));
    $this->addFieldMapping('field_listing_description', 'blurb');
    $this->addFieldMapping('field_listing_description:format', NULL)
         ->defaultValue('rich_text');
    $this->addFieldMapping('field_listing_tags', 'tags')
         ->separator(',');
  }

  function prepareRow($source_row) {
    if (parent::prepareRow($current_row) === FALSE) {
      return FALSE;
    }

    // Get the numeric portion of the listing id.
    list($town, $id) = explode('-', $source_row->listing_id);
    $source_row->nid = $id;
    if (!is_numeric($id)) {
      return FALSE;
    }

    // Make certain the title is present.
    if (empty($source_row->title)) {
      $source_row->title = ($source_row->status == 'forsale' ? 'For sale' : 'Unavailable') . ' in ' . $source_row->township;
    }

    // Remove test data.
    if (stripos($source->agent, 'test') !== FALSE) {
      return FALSE;
    }

    // Setup "tags".
    $source_row->tags = array();
    if ($source_row->is_lakefront) {
      $source_row->tags[] = 'Lakefront';
    }
    if ($source_row->is_newconstruction) {
      $source_row->tags[] = 'New Construction';
    }
    if ($source_row->is_foreclosure) {
      $source_row->tags[] = 'Foreclosure';
    }
    if ($source_row->is_fine) {
      $source_row->tags[] = 'Fine & Unique';
    }
    $source_row->tags = implode(',', $source_row->tags);

    return TRUE;
  }

  function callbackProcessListingTags($value){
    return $value;
  }

  function callbackProcessListingAgent($values) {
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
        if (empty($nid)){drush_print_r($val);}
        $ids[] = $nid;
      }
    }

    return $ids;
  }
}
