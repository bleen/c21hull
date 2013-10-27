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
        'last_changed' => 0,
        'last_entity_id' => 0,
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
        'last_changed' => '1381454971',
        'last_entity_id' => '10421',
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
    'apachesolr_index_updated' => 1381456749,
    'apachesolr_last_optimize' => 1381456600,
  );
  $environment->index_bundles = array(
    'drealty_listing' => array(
      0 => 'mls_residential_listing',
    ),
    'node' => array(
      0 => 'aggregation_page_detail',
      1 => 'listing',
      2 => 'page',
    ),
  );
  $export['opensolr'] = $environment;

  return $export;
}
