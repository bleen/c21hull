<?php
/**
 * @file
 * c21_rets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function c21_rets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_drealty_listing__mls_residential_listing';
  $strongarm->value = array(
    'view_modes' => array(
      'search' => array(
        'custom_settings' => TRUE,
      ),
      'list' => array(
        'custom_settings' => TRUE,
      ),
      'gallery' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '21',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_drealty_listing__mls_residential_listing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_drealty_listing_basic_drealty_listing_pattern';
  $strongarm->value = '';
  $export['pathauto_drealty_listing_basic_drealty_listing_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_drealty_listing_mls_residential_listing_pattern';
  $strongarm->value = '';
  $export['pathauto_drealty_listing_mls_residential_listing_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_drealty_listing_pattern';
  $strongarm->value = '[drealty_listing:field-mls-city:name]/[drealty_listing:field-mls-street-name]-[drealty_listing:field-mls-street-number]';
  $export['pathauto_drealty_listing_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'representative_image_field_drealty_listing_basic_drealty_listing';
  $strongarm->value = '';
  $export['representative_image_field_drealty_listing_basic_drealty_listing'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'representative_image_field_drealty_listing_mls_residential_listing';
  $strongarm->value = 'field_mls_photos';
  $export['representative_image_field_drealty_listing_mls_residential_listing'] = $strongarm;

  return $export;
}
