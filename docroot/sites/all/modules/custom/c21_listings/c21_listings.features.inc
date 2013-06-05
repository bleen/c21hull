<?php
/**
 * @file
 * c21_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_listings_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function c21_listings_node_info() {
  $items = array(
    'listing' => array(
      'name' => t('Listing'),
      'base' => 'node_content',
      'description' => t('A <em>listing</em> describes a specific property being sold by Century21 Roy B. Hull. It isnot used for properties that are ingested from external services.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
