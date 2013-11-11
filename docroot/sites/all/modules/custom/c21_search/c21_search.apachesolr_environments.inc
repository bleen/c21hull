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
        'last_changed' => '1384127632',
        'last_entity_id' => '6206',
      ),
      'node' => array(
        'last_changed' => '1384127632',
        'last_entity_id' => '9162',
      ),
    ),
    'apachesolr_index_updated' => 1384129541,
    'apachesolr_last_optimize' => 1384106077,
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
