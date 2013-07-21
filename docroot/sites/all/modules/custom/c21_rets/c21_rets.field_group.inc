<?php
/**
 * @file
 * c21_rets.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function c21_rets_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mls_location_details|drealty_listing|mls_residential_listing|default';
  $field_group->group_name = 'group_mls_location_details';
  $field_group->entity_type = 'drealty_listing';
  $field_group->bundle = 'mls_residential_listing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Details',
    'weight' => '4',
    'children' => array(
      0 => 'field_mls_city',
      1 => 'field_mls_development',
      2 => 'field_mls_school_district',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location Details',
      'instance_settings' => array(
        'classes' => 'group_location_details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mls_location_details|drealty_listing|mls_residential_listing|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mls_statistics|drealty_listing|mls_residential_listing|default';
  $field_group->group_name = 'group_mls_statistics';
  $field_group->entity_type = 'drealty_listing';
  $field_group->bundle = 'mls_residential_listing';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statistics',
    'weight' => '3',
    'children' => array(
      0 => 'field_mls_bedrooms',
      1 => 'field_mls_bathrooms',
      2 => 'field_mls_acreage',
      3 => 'field_mls_garage',
      4 => 'field_mls_year_built',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Statistics',
      'instance_settings' => array(
        'classes' => 'group_statistics',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_mls_statistics|drealty_listing|mls_residential_listing|default'] = $field_group;

  return $export;
}
