<?php
/**
 * @file
 * c21_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function c21_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-c21_search_listings-page'] = array(
    'cache' => -1,
    'css_class' => 'search-form',
    'custom' => 0,
    'delta' => '-exp-c21_search_listings-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'escrow' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'escrow',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
