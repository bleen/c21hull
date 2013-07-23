<?php
/**
 * @file
 * c21_rets.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function c21_rets_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'drealty_listing|mls_residential_listing|default';
  $ds_fieldsetting->entity_type = 'drealty_listing';
  $ds_fieldsetting->bundle = 'mls_residential_listing';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_mls_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'photos',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'mls-number',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'list-price',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_city' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Township',
        ),
      ),
    ),
  );
  $export['drealty_listing|mls_residential_listing|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'drealty_listing|mls_residential_listing|teaser';
  $ds_fieldsetting->entity_type = 'drealty_listing';
  $ds_fieldsetting->bundle = 'mls_residential_listing';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_mls_photos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['drealty_listing|mls_residential_listing|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function c21_rets_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'drealty_listing|mls_residential_listing|default';
  $ds_layout->entity_type = 'drealty_listing';
  $ds_layout->bundle = 'mls_residential_listing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_mls_number',
        1 => 'field_mls_photos',
        2 => 'field_mls_list_price',
        3 => 'group_mls_statistics',
        4 => 'field_mls_bedrooms',
        5 => 'group_mls_location_details',
        6 => 'field_mls_bathrooms',
        7 => 'field_mls_city',
        8 => 'field_mls_development',
        9 => 'field_mls_garage',
        10 => 'field_mls_school_district',
        11 => 'field_mls_acreage',
        12 => 'field_mls_year_built',
      ),
    ),
    'fields' => array(
      'field_mls_number' => 'ds_content',
      'field_mls_photos' => 'ds_content',
      'field_mls_list_price' => 'ds_content',
      'group_mls_statistics' => 'ds_content',
      'field_mls_bedrooms' => 'ds_content',
      'group_mls_location_details' => 'ds_content',
      'field_mls_bathrooms' => 'ds_content',
      'field_mls_city' => 'ds_content',
      'field_mls_development' => 'ds_content',
      'field_mls_garage' => 'ds_content',
      'field_mls_school_district' => 'ds_content',
      'field_mls_acreage' => 'ds_content',
      'field_mls_year_built' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['drealty_listing|mls_residential_listing|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'drealty_listing|mls_residential_listing|teaser';
  $ds_layout->entity_type = 'drealty_listing';
  $ds_layout->bundle = 'mls_residential_listing';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_mls_number',
        1 => 'field_mls_photos',
        2 => 'field_mls_list_price',
        3 => 'field_mls_bedrooms',
        4 => 'field_mls_bathrooms',
        5 => 'field_mls_square_feet',
        6 => 'field_mls_school_district',
      ),
    ),
    'fields' => array(
      'field_mls_number' => 'ds_content',
      'field_mls_photos' => 'ds_content',
      'field_mls_list_price' => 'ds_content',
      'field_mls_bedrooms' => 'ds_content',
      'field_mls_bathrooms' => 'ds_content',
      'field_mls_square_feet' => 'ds_content',
      'field_mls_school_district' => 'ds_content',
    ),
    'limit' => array(
      'field_mls_photos' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['drealty_listing|mls_residential_listing|teaser'] = $ds_layout;

  return $export;
}
