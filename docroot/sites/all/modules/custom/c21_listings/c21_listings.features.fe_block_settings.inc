<?php
/**
 * @file
 * c21_listings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function c21_listings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-964ecad519128c5b59d0f4917f6399da'] = array(
    'cache' => -1,
    'css_class' => 'recently-added',
    'custom' => 0,
    'delta' => '964ecad519128c5b59d0f4917f6399da',
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
