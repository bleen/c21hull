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
  $environment->env_id = 'hosted_solr_support';
  $environment->name = 'Hosted SOLR support (opensolr.com)';
  $environment->url = 'http://us.opensolr.com/solr/c21hull';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1372465265',
        'last_entity_id' => '8307',
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
    'apachesolr_index_updated' => 1372809790,
    'apachesolr_last_optimize' => 1372465282,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'agent',
      1 => 'aggregation_page_detail',
      2 => 'listing',
      3 => 'listing_type',
      4 => 'page',
      5 => 'test',
    ),
  );
  $export['hosted_solr_support'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'local_solr';
  $environment->name = 'Local SOLR';
  $environment->url = 'http://localhost:8080/solr/c21hull';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
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
      'drealty_listing' => array(
        'last_changed' => '1375152216',
        'last_entity_id' => '20710',
      ),
      'node' => array(
        'last_changed' => '1375152216',
        'last_entity_id' => '8745',
      ),
    ),
    'apachesolr_index_updated' => 1375153490,
    'apachesolr_last_optimize' => 1375150552,
  );
  $environment->index_bundles = array(
    'drealty_listing' => array(
      0 => 'mls_residential_listing',
    ),
    'node' => array(
      0 => 'listing',
      1 => 'test',
    ),
  );
  $export['local_solr'] = $environment;

  return $export;
}
