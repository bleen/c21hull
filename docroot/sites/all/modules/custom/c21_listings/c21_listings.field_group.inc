<?php
/**
 * @file
 * c21_listings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function c21_listings_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_building_info|node|listing|form';
  $field_group->group_name = 'group_listing_building_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Building Information',
    'weight' => '10',
    'children' => array(
      0 => 'field_listing_year_built',
      1 => 'field_listing_bedrooms',
      2 => 'field_listing_bathrooms',
      3 => 'field_listing_sewage_extras',
      4 => 'field_listing_water_extras',
      5 => 'field_listing_siding',
      6 => 'field_listing_fireplace',
      7 => 'field_listing_porch',
      8 => 'field_listing_decks',
      9 => 'field_listing_sewage',
      10 => 'field_listing_water',
      11 => 'field_listing_heat',
      12 => 'field_listing_insulation',
      13 => 'field_listing_road_surface',
      14 => 'field_listing_garage',
      15 => 'field_listing_basement',
      16 => 'field_listing_windows',
      17 => 'field_listing_floors',
      18 => 'field_listing_walls',
      19 => 'field_listing_additional_bldg',
      20 => 'field_listing_school_district',
      21 => 'field_listing_furniture',
      22 => 'field_listing_electric_company',
      23 => 'field_listing_personal_property',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_building_info|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_details|node|listing|form';
  $field_group->group_name = 'group_listing_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_listing_measurements',
      1 => 'group_listing_building_info',
      2 => 'group_listing_general_info',
      3 => 'group_listing_images_videos',
      4 => 'group_listing_location_info',
      5 => 'group_listing_notes',
      6 => 'group_listing_sellers',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_listing_details|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_general_info|node|listing|form';
  $field_group->group_name = 'group_listing_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'General Information',
    'weight' => '8',
    'children' => array(
      0 => 'field_listing_type',
      1 => 'field_listing_mls',
      2 => 'field_listing_status',
      3 => 'field_listing_list_date',
      4 => 'field_listing_zoning',
      5 => 'field_listing_list_price',
      6 => 'field_listing_comission',
      7 => 'field_listing_lockbox_key',
      8 => 'field_listing_style',
      9 => 'field_listing_acreage',
      10 => 'field_listing_taxes',
      11 => 'field_listing_dues',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_general_info|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_images_videos|node|listing|form';
  $field_group->group_name = 'group_listing_images_videos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Images & Videos',
    'weight' => '9',
    'children' => array(
      0 => 'field_listing_virtual_tour',
      1 => 'field_listing_featured_photo',
      2 => 'field_listing_photos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_images_videos|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_location_info|node|listing|form';
  $field_group->group_name = 'group_listing_location_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Location Information',
    'weight' => '13',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_location_info|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_notes|node|listing|form';
  $field_group->group_name = 'group_listing_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_notes|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_sellers|node|listing|form';
  $field_group->group_name = 'group_listing_sellers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Sellers',
    'weight' => '14',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_sellers|node|listing|form'] = $field_group;

  return $export;
}
