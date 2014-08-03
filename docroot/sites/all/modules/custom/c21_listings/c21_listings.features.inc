<?php
/**
 * @file
 * c21_listings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_listings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_listings_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function c21_listings_node_info() {
  $items = array(
    'agent' => array(
      'name' => t('Agent'),
      'base' => 'node_content',
      'description' => t('An <em>agent</em> describes a member of the Century21 Roy B. Hull team who represents specific listings for sale.'),
      'has_title' => '1',
      'title_label' => t('Display Name'),
      'help' => '',
    ),
    'listing' => array(
      'name' => t('Listing'),
      'base' => 'node_content',
      'description' => t('A <em>listing</em> describes a specific property being sold by Century21 Roy B. Hull. It isnot used for properties that are ingested from external services.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'listing_type' => array(
      'name' => t('Listing Type'),
      'base' => 'node_content',
      'description' => t('Use <em>listing type</em> to define a new type of listing like "Open", "Exclusive" or "Exclusive Right"'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
