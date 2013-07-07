<?php
/**
 * @file
 * c21.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function c21_fontyourface_features_default_font() {
  return array(
    'Muli regular (latin)' => array(
      'name' => 'Muli regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Muli&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Muli',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => 'Helvetica, Arial, sans-serif',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:12:"Muli:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_node_info().
 */
function c21_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
