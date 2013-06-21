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
  $environment->url = 'https://opensolr.com/solr/c21hull';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '2:150.0',
    'apachesolr_search_promote_boost' => '2.0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'agent' => '0',
      'page' => '0',
      'listing' => '21.0',
    ),
  );
  $environment->index_bundles = array();
  $export['hosted_solr_support'] = $environment;

  return $export;
}
