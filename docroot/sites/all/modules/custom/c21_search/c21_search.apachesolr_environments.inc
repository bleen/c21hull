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
    'apachesolr_index_updated' => 0,
    'apachesolr_last_optimize' => 1386778030,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'listing',
      1 => 'listing_type',
      2 => 'page',
    ),
  );
  $export['opensolr'] = $environment;

  return $export;
}
