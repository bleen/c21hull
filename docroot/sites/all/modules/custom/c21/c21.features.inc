<?php
/**
 * @file
 * c21.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "borealis_sb" && $api == "borealis_sb_default") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_views_api($module = NULL, $api = NULL) {
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
 * Implements hook_image_default_styles().
 */
function c21_image_default_styles() {
  $styles = array();

  // Exported image style: c21square.
  $styles['c21square'] = array(
    'name' => 'c21square',
    'label' => 'c21square',
    'effects' => array(
      1 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: c21wide.
  $styles['c21wide'] = array(
    'name' => 'c21wide',
    'label' => 'c21wide',
    'effects' => array(
      1 => array(
        'label' => 'Focal Point Scale And Crop',
        'help' => 'Scale and crop based on data provided by <em>Focal Point</em>.',
        'effect callback' => 'focal_point_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'focal_point',
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
