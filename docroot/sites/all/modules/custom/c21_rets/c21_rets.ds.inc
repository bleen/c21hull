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
    'listing_map' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mls_acreage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper garage',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_bathrooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper bathrooms',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_bedrooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper bedrooms ',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_city' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Township',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'detail-wrapper township',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'detail',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_development' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'detail-wrapper development',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'detail',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_garage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper garage',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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
    'field_mls_listing_office' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
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
    'field_mls_school_district' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'detail-wrapper school-district',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'detail',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_mls_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper year-built',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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
    'rets_listing_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_map' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_mls_bathrooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'stat bathrooms',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_bedrooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'stat bedrooms',
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
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'list-price',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
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
    'field_mls_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'photo',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_school_district' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'stat school-district',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_mls_square_feet' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'stat square-feet',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['drealty_listing|mls_residential_listing|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function c21_rets_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'rets_listing_title';
  $ds_field->label = 'RETS Listing Title';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'drealty_listing' => 'drealty_listing',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array();
  $export['rets_listing_title'] = $ds_field;

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
        1 => 'group_mls_photos',
        2 => 'group_mls_statistics',
        3 => 'field_mls_photos',
        4 => 'field_mls_list_price',
        5 => 'group_mls_location_details',
        6 => 'field_mls_bedrooms',
        7 => 'listing_map',
        8 => 'field_mls_bathrooms',
        9 => 'field_mls_listing_office',
        10 => 'field_mls_garage',
        11 => 'field_mls_acreage',
        12 => 'field_mls_year_built',
        13 => 'field_mls_city',
        14 => 'field_mls_development',
        15 => 'field_mls_school_district',
      ),
    ),
    'fields' => array(
      'field_mls_number' => 'ds_content',
      'group_mls_photos' => 'ds_content',
      'group_mls_statistics' => 'ds_content',
      'field_mls_photos' => 'ds_content',
      'field_mls_list_price' => 'ds_content',
      'group_mls_location_details' => 'ds_content',
      'field_mls_bedrooms' => 'ds_content',
      'listing_map' => 'ds_content',
      'field_mls_bathrooms' => 'ds_content',
      'field_mls_listing_office' => 'ds_content',
      'field_mls_garage' => 'ds_content',
      'field_mls_acreage' => 'ds_content',
      'field_mls_year_built' => 'ds_content',
      'field_mls_city' => 'ds_content',
      'field_mls_development' => 'ds_content',
      'field_mls_school_district' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
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
        1 => 'rets_listing_title',
        2 => 'field_mls_photos',
        3 => 'field_mls_list_price',
        4 => 'field_mls_bedrooms',
        5 => 'field_mls_bathrooms',
        6 => 'field_mls_school_district',
        7 => 'field_mls_square_feet',
        8 => 'listing_map',
      ),
    ),
    'fields' => array(
      'field_mls_number' => 'ds_content',
      'rets_listing_title' => 'ds_content',
      'field_mls_photos' => 'ds_content',
      'field_mls_list_price' => 'ds_content',
      'field_mls_bedrooms' => 'ds_content',
      'field_mls_bathrooms' => 'ds_content',
      'field_mls_school_district' => 'ds_content',
      'field_mls_square_feet' => 'ds_content',
      'listing_map' => 'ds_content',
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
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['drealty_listing|mls_residential_listing|teaser'] = $ds_layout;

  return $export;
}
