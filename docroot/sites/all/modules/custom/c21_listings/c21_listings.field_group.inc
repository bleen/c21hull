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
      3 => 'field_listing_siding',
      4 => 'field_listing_fireplace',
      5 => 'field_listing_porch',
      6 => 'field_listing_decks',
      7 => 'field_listing_sewage',
      8 => 'field_listing_water',
      9 => 'field_listing_heat',
      10 => 'field_listing_insulation',
      11 => 'field_listing_road_surface',
      12 => 'field_listing_garage',
      13 => 'field_listing_basement',
      14 => 'field_listing_windows',
      15 => 'field_listing_floors',
      16 => 'field_listing_walls',
      17 => 'field_listing_additional_bldg',
      18 => 'field_listing_school_district',
      19 => 'field_listing_furniture',
      20 => 'field_listing_electric_company',
      21 => 'field_listing_personal_property',
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
    'weight' => '5',
    'children' => array(
      0 => 'group_listing_building_info',
      1 => 'group_listing_general_info',
      2 => 'group_listing_images_videos',
      3 => 'group_listing_location_info',
      4 => 'group_listing_measurements',
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
      6 => 'field_listing_lockbox_key',
      7 => 'field_listing_style',
      8 => 'field_listing_acreage',
      9 => 'field_listing_taxes',
      10 => 'field_listing_dues',
      11 => 'field_listing_commission',
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
    'weight' => '12',
    'children' => array(
      0 => 'field_listing_directions',
      1 => 'field_listing_tax_map',
      2 => 'field_listing_lot',
      3 => 'field_listing_block',
      4 => 'field_listing_section',
      5 => 'field_listing_street',
      6 => 'field_listing_development',
      7 => 'field_listing_township',
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
  $export['group_listing_location_info|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_measurements|node|listing|form';
  $field_group->group_name = 'group_listing_measurements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Measurements',
    'weight' => '11',
    'children' => array(
      0 => 'field_listing_sq_ft_above',
      1 => 'field_listing_sq_ft_below',
      2 => 'field_listing_sq_ft_finished',
      3 => 'group_listing_rooms',
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
  $export['group_listing_measurements|node|listing|form'] = $field_group;

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
    'children' => array(
      0 => 'field_listing_notes',
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
  $export['group_listing_notes|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_rooms|node|listing|form';
  $field_group->group_name = 'group_listing_rooms';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_measurements';
  $field_group->data = array(
    'label' => 'Rooms',
    'weight' => '48',
    'children' => array(
      0 => 'field_listing_living_room_f1',
      1 => 'field_listing_dining_room_f1',
      2 => 'field_listing_kitchen_f1',
      3 => 'field_listing_liv_din_f1',
      4 => 'field_listing_din_kitchen_f1',
      5 => 'field_listing_bathroom1_f1',
      6 => 'field_listing_bathroom2_f1',
      7 => 'field_listing_bathroom3_f1',
      8 => 'field_listing_bedroom1_f1',
      9 => 'field_listing_bedroom2_f1',
      10 => 'field_listing_bedroom3_f1',
      11 => 'field_listing_bedroom4_f1',
      12 => 'field_listing_family_room_f1',
      13 => 'field_listing_laundry_f1',
      14 => 'field_listing_other1_f1',
      15 => 'field_listing_other2_f1',
      16 => 'field_listing_living_room_f2',
      17 => 'field_listing_dining_room_f2',
      18 => 'field_listing_kitchen_f2',
      19 => 'field_listing_liv_din_f2',
      20 => 'field_listing_din_kitchen_f2',
      21 => 'field_listing_bathroom1_f2',
      22 => 'field_listing_bathroom2_f2',
      23 => 'field_listing_bathroom3_f2',
      24 => 'field_listing_bedroom1_f2',
      25 => 'field_listing_bedroom2_f2',
      26 => 'field_listing_bedroom3_f2',
      27 => 'field_listing_bedroom4_f2',
      28 => 'field_listing_family_room_f2',
      29 => 'field_listing_laundry_f2',
      30 => 'field_listing_other1_f2',
      31 => 'field_listing_other2_f2',
      32 => 'field_listing_living_room_b',
      33 => 'field_listing_dining_room_b',
      34 => 'field_listing_kitchen_b',
      35 => 'field_listing_liv_din_b',
      36 => 'field_listing_din_kitchen_b',
      37 => 'field_listing_bathroom1_b',
      38 => 'field_listing_bathroom2_b',
      39 => 'field_listing_bathroom3_b',
      40 => 'field_listing_bedroom1_b',
      41 => 'field_listing_bedroom2_b',
      42 => 'field_listing_bedroom3_b',
      43 => 'field_listing_bedroom4_b',
      44 => 'field_listing_family_room_b',
      45 => 'field_listing_laundry_b',
      46 => 'field_listing_other1_b',
      47 => 'field_listing_other2_b',
      48 => 'field_listing_bedroom5_b',
      49 => 'field_listing_bedroom5_f1',
      50 => 'field_listing_bedroom5_f2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Rooms',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'rooms',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_rooms|node|listing|form'] = $field_group;

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
    'weight' => '13',
    'children' => array(
      0 => 'field_listing_seller',
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
  $export['group_listing_sellers|node|listing|form'] = $field_group;

  return $export;
}
