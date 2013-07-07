<?php
/**
 * @file
 * c21_listings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function c21_listings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '17',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|listing|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|listing|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_listing_bathrooms' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_listing_bedrooms' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_listing_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|listing|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function c21_listings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_listing_id_prefix',
        2 => 'field_listing_mls',
        3 => 'field_listing_featured_photo',
        4 => 'field_listing_photos',
        5 => 'field_listing_list_price',
        6 => 'field_listing_description',
        7 => 'field_listing_bedrooms',
        8 => 'field_listing_bathrooms',
        9 => 'field_listing_garage',
        10 => 'field_listing_year_built',
        11 => 'field_listing_acreage',
        12 => 'field_listing_school_district',
        13 => 'field_listing_township',
        14 => 'field_listing_development',
        15 => 'field_listing_tags',
        16 => 'field_listing_agent',
        17 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_listing_id_prefix' => 'ds_content',
      'field_listing_mls' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_photos' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_garage' => 'ds_content',
      'field_listing_year_built' => 'ds_content',
      'field_listing_acreage' => 'ds_content',
      'field_listing_school_district' => 'ds_content',
      'field_listing_township' => 'ds_content',
      'field_listing_development' => 'ds_content',
      'field_listing_tags' => 'ds_content',
      'field_listing_agent' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|listing|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_listing_featured_photo',
        2 => 'field_listing_list_price',
        3 => 'field_listing_bedrooms',
        4 => 'field_listing_bathrooms',
        5 => 'field_listing_description',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|listing|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_listing_featured_photo',
        2 => 'field_listing_list_price',
        3 => 'field_listing_bedrooms',
        4 => 'field_listing_bathrooms',
        5 => 'field_listing_description',
        6 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|listing|teaser'] = $ds_layout;

  return $export;
}