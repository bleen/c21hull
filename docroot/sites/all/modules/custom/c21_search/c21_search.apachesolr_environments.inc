<?php
/**
 * @file
 * c21_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function c21_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'opensolr';
  $environment->name = 'Hosted SOLR support with opensolr.com';
  $environment->url = 'http://us-la.opensolr.com/solr/Listings';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'drealty_listing' => array(
        'last_changed' => '1383269082',
        'last_entity_id' => '5863',
      ),
      'drealty_listing_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'drealty_connection_entity' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1383268989',
        'last_entity_id' => '8338',
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1383657366,
    'apachesolr_last_optimize' => 1383615539,
  );
  $environment->index_bundles = array(
    'drealty_listing' => array(
      0 => 'mls_residential_listing',
    ),
    'node' => array(
      0 => 'listing',
      1 => 'page',
    ),
  );
  $export['opensolr'] = $environment;

  return $export;
}
