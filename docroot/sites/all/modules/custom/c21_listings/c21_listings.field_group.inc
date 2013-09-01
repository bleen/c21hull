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
      0 => 'field_listing_additional_bldg',
      1 => 'field_listing_basement',
      2 => 'field_listing_bathrooms',
      3 => 'field_listing_bedrooms',
      4 => 'field_listing_decks',
      5 => 'field_listing_fireplace',
      6 => 'field_listing_floors',
      7 => 'field_listing_garage',
      8 => 'field_listing_heat',
      9 => 'field_listing_insulation',
      10 => 'field_listing_personal_property',
      11 => 'field_listing_porch',
      12 => 'field_listing_sewage',
      13 => 'field_listing_siding',
      14 => 'field_listing_walls',
      15 => 'field_listing_water',
      16 => 'field_listing_windows',
      17 => 'field_listing_year_built',
      18 => 'field_listing_building_type',
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
  $field_group->identifier = 'group_listing_buyers|node|listing|form';
  $field_group->group_name = 'group_listing_buyers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_transaction';
  $field_group->data = array(
    'label' => 'Buyers',
    'weight' => '141',
    'children' => array(
      0 => 'field_listing_buyer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Buyers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_buyers|node|listing|form'] = $field_group;

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
    'weight' => '7',
    'children' => array(
      0 => 'group_listing_building_info',
      1 => 'group_listing_general_info',
      2 => 'group_listing_images_videos',
      3 => 'group_listing_ligacy_data',
      4 => 'group_listing_location_info',
      5 => 'group_listing_measurements',
      6 => 'group_listing_notes',
      7 => 'group_listing_sellers',
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
  $field_group->identifier = 'group_listing_details|node|listing|full';
  $field_group->group_name = 'group_listing_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Listing Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_listing_description',
      1 => 'field_listing_featured_photo',
      2 => 'field_listing_list_price',
      3 => 'field_listing_mls',
      4 => 'field_listing_photos',
      5 => 'field_listing_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Listing Details',
      'instance_settings' => array(
        'classes' => ' group-listing-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_details|node|listing|full'] = $field_group;

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
      0 => 'field_listing_acreage',
      1 => 'field_listing_commission',
      2 => 'field_listing_dues',
      3 => 'field_listing_list_date',
      4 => 'field_listing_list_price',
      5 => 'field_listing_lockbox_key',
      6 => 'field_listing_mls',
      7 => 'field_listing_style',
      8 => 'field_listing_taxes',
      9 => 'field_listing_type',
      10 => 'field_listing_zoning',
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
      0 => 'field_listing_featured_photo',
      1 => 'field_listing_photos',
      2 => 'field_listing_virtual_tour',
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
  $field_group->identifier = 'group_listing_ligacy_data|node|listing|form';
  $field_group->group_name = 'group_listing_ligacy_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_details';
  $field_group->data = array(
    'label' => 'Legacy Data',
    'weight' => '15',
    'children' => array(
      0 => 'field_listing_legacy_data',
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
  $export['group_listing_ligacy_data|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_location_details|node|listing|full';
  $field_group->group_name = 'group_listing_location_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location Details',
    'weight' => '3',
    'children' => array(
      0 => 'field_listing_development',
      1 => 'field_listing_school_district',
      2 => 'field_listing_township',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location Details',
      'instance_settings' => array(
        'classes' => 'group_location_details group-listing-location-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_location_details|node|listing|full'] = $field_group;

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
      0 => 'field_listing_block',
      1 => 'field_listing_development',
      2 => 'field_listing_directions',
      3 => 'field_listing_lot',
      4 => 'field_listing_school_district',
      5 => 'field_listing_section',
      6 => 'field_listing_street',
      7 => 'field_listing_tax_map',
      8 => 'field_listing_township',
      9 => 'field_listing_state',
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
    'weight' => '14',
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
      0 => 'field_listing_bathroom1_b',
      1 => 'field_listing_bathroom1_f1',
      2 => 'field_listing_bathroom1_f2',
      3 => 'field_listing_bathroom2_b',
      4 => 'field_listing_bathroom2_f1',
      5 => 'field_listing_bathroom2_f2',
      6 => 'field_listing_bathroom3_b',
      7 => 'field_listing_bathroom3_f1',
      8 => 'field_listing_bathroom3_f2',
      9 => 'field_listing_bedroom1_b',
      10 => 'field_listing_bedroom1_f1',
      11 => 'field_listing_bedroom1_f2',
      12 => 'field_listing_bedroom2_b',
      13 => 'field_listing_bedroom2_f1',
      14 => 'field_listing_bedroom2_f2',
      15 => 'field_listing_bedroom3_b',
      16 => 'field_listing_bedroom3_f1',
      17 => 'field_listing_bedroom3_f2',
      18 => 'field_listing_bedroom4_b',
      19 => 'field_listing_bedroom4_f1',
      20 => 'field_listing_bedroom4_f2',
      21 => 'field_listing_bedroom5_b',
      22 => 'field_listing_bedroom5_f1',
      23 => 'field_listing_bedroom5_f2',
      24 => 'field_listing_din_kitchen_b',
      25 => 'field_listing_din_kitchen_f1',
      26 => 'field_listing_din_kitchen_f2',
      27 => 'field_listing_dining_room_b',
      28 => 'field_listing_dining_room_f1',
      29 => 'field_listing_dining_room_f2',
      30 => 'field_listing_family_room_b',
      31 => 'field_listing_family_room_f1',
      32 => 'field_listing_family_room_f2',
      33 => 'field_listing_kitchen_b',
      34 => 'field_listing_kitchen_f1',
      35 => 'field_listing_kitchen_f2',
      36 => 'field_listing_laundry_b',
      37 => 'field_listing_laundry_f1',
      38 => 'field_listing_laundry_f2',
      39 => 'field_listing_liv_din_b',
      40 => 'field_listing_liv_din_f1',
      41 => 'field_listing_liv_din_f2',
      42 => 'field_listing_living_room_b',
      43 => 'field_listing_living_room_f1',
      44 => 'field_listing_living_room_f2',
      45 => 'field_listing_other1_b',
      46 => 'field_listing_other1_f1',
      47 => 'field_listing_other1_f2',
      48 => 'field_listing_other2_b',
      49 => 'field_listing_other2_f1',
      50 => 'field_listing_other2_f2',
      51 => 'field_listing_other3_b',
      52 => 'field_listing_other3_f1',
      53 => 'field_listing_other3_f2',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_statistics|node|listing|full';
  $field_group->group_name = 'group_listing_statistics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Statistics',
    'weight' => '2',
    'children' => array(
      0 => 'field_listing_acreage',
      1 => 'field_listing_bathrooms',
      2 => 'field_listing_bedrooms',
      3 => 'field_listing_garage',
      4 => 'field_listing_year_built',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Statistics',
      'instance_settings' => array(
        'classes' => 'group_statistics group-listing-statistics field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_statistics|node|listing|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_transaction_dtls|node|listing|form';
  $field_group->group_name = 'group_listing_transaction_dtls';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_transaction';
  $field_group->data = array(
    'label' => 'Transaction Details',
    'weight' => '140',
    'children' => array(
      0 => 'field_listing_closing_date',
      1 => 'field_listing_sale_price',
      2 => 'field_listing_sale_agent',
      3 => 'field_listing_gross_commission',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Transaction Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_transaction_dtls|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_transaction|node|listing|form';
  $field_group->group_name = 'group_listing_transaction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transaction',
    'weight' => '6',
    'children' => array(
      0 => 'group_listing_transaction_dtls',
      1 => 'group_listing_buyers',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_listing_transaction|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_building_info|node|listing|print';
  $field_group->group_name = 'group_print_building_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Building Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_listing_additional_bldg',
      1 => 'field_listing_basement',
      2 => 'field_listing_decks',
      3 => 'field_listing_fireplace',
      4 => 'field_listing_floors',
      5 => 'field_listing_garage',
      6 => 'field_listing_heat',
      7 => 'field_listing_insulation',
      8 => 'field_listing_personal_property',
      9 => 'field_listing_porch',
      10 => 'field_listing_sewage',
      11 => 'field_listing_siding',
      12 => 'field_listing_sq_ft_above',
      13 => 'field_listing_sq_ft_below',
      14 => 'field_listing_sq_ft_finished',
      15 => 'field_listing_walls',
      16 => 'field_listing_water',
      17 => 'field_listing_windows',
      18 => 'field_listing_year_built',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Building Info',
      'instance_settings' => array(
        'classes' => ' group-print-building-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_building_info|node|listing|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_general_info|node|listing|print';
  $field_group->group_name = 'group_print_general_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'General Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_listing_acreage',
      1 => 'field_listing_dues',
      2 => 'field_listing_list_price',
      3 => 'field_listing_school_district',
      4 => 'field_listing_taxes',
      5 => 'field_listing_zoning',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'General Info',
      'instance_settings' => array(
        'classes' => ' group-print-general-info field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_general_info|node|listing|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_measurements|node|listing|print';
  $field_group->group_name = 'group_print_measurements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Measurements',
    'weight' => '24',
    'children' => array(
      0 => 'listing_measurements_grid',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Measurements',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_measurements|node|listing|print'] = $field_group;

  return $export;
}
