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
