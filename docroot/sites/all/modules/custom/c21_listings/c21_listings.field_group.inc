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
      0 => 'field_listing_basement',
      1 => 'field_listing_bathrooms',
      2 => 'field_listing_bedrooms',
      3 => 'field_listing_building_type',
      4 => 'field_listing_floors',
      5 => 'field_listing_garage',
      6 => 'field_listing_heat',
      7 => 'field_listing_insulation',
      8 => 'field_listing_personal_property',
      9 => 'field_listing_sewage',
      10 => 'field_listing_walls',
      11 => 'field_listing_water',
      12 => 'field_listing_windows',
      13 => 'field_listing_year_built',
      14 => 'field_listing_outside_features',
      15 => 'field_listing_fireplace_info',
      16 => 'field_listing_siding_info',
      17 => 'field_listing_to_be_built',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-listing-building-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_building_info|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_buyer1|node|listing|form';
  $field_group->group_name = 'group_listing_buyer1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_buyers';
  $field_group->data = array(
    'label' => 'Buyer 1',
    'weight' => '156',
    'children' => array(
      0 => 'field_listing_buyer1_address',
      1 => 'field_listing_buyer1_company',
      2 => 'field_listing_buyer1_email',
      3 => 'field_listing_buyer1_name',
      4 => 'field_listing_buyer1_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buyer 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-listing-buyer1 group-listing-buyer group-listing-buysell field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_buyer1|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_buyer2|node|listing|form';
  $field_group->group_name = 'group_listing_buyer2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_buyers';
  $field_group->data = array(
    'label' => 'Buyer 2',
    'weight' => '157',
    'children' => array(
      0 => 'field_listing_buyer2_address',
      1 => 'field_listing_buyer2_company',
      2 => 'field_listing_buyer2_email',
      3 => 'field_listing_buyer2_name',
      4 => 'field_listing_buyer2_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Buyer 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-listing-buyer2 group-listing-buyer group-listing-buysell field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_buyer2|node|listing|form'] = $field_group;

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
      1 => 'group_listing_buyer1',
      2 => 'group_listing_buyer2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Buyers',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-listing-buyers field-group-tab',
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
      4 => 'group_listing_location_info',
      5 => 'group_listing_measurements',
      6 => 'group_listing_notes',
      7 => 'group_listing_sellers',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'classes' => 'group-listing-details field-group-tabs',
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
    'weight' => '0',
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
        'id' => 'node_listing_full_group_listing_details',
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
      7 => 'field_listing_taxes',
      8 => 'field_listing_type',
      9 => 'field_listing_zoning',
      10 => 'field_listing_style_info',
      11 => 'field_listing_taxes_tbd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'General Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-listing-general-info field-group-tab',
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
        'classes' => ' group-listing-images-videos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_images_videos|node|listing|form'] = $field_group;

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
    'weight' => '2',
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
        'id' => 'node_listing_full_group_listing_location_details',
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
      6 => 'field_listing_state',
      7 => 'field_listing_street',
      8 => 'field_listing_tax_map',
      9 => 'field_listing_township',
      10 => 'field_listing_latitude',
      11 => 'field_listing_longitude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-listing-location-info field-group-tab',
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
      3 => 'field_listing_measurements',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-listing-measurements field-group-tab',
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
        'classes' => ' group-listing-notes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_listing_notes|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_seller1|node|listing|form';
  $field_group->group_name = 'group_listing_seller1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_sellers';
  $field_group->data = array(
    'label' => 'Seller 1',
    'weight' => '166',
    'children' => array(
      0 => 'field_listing_seller1_phone',
      1 => 'field_listing_seller1_name',
      2 => 'field_listing_seller1_company',
      3 => 'field_listing_seller1_email',
      4 => 'field_listing_seller1_address',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Seller 1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-listing-seller1 group-listing-seller group-listing-buysell field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_seller1|node|listing|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_seller2|node|listing|form';
  $field_group->group_name = 'group_listing_seller2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_listing_sellers';
  $field_group->data = array(
    'label' => 'Seller 2',
    'weight' => '167',
    'children' => array(
      0 => 'field_listing_seller2_address',
      1 => 'field_listing_seller2_company',
      2 => 'field_listing_seller2_email',
      3 => 'field_listing_seller2_name',
      4 => 'field_listing_seller2_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Seller 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-listing-seller2 group-listing-seller group-listing-buysell field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_listing_seller2|node|listing|form'] = $field_group;

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
      1 => 'group_listing_seller1',
      2 => 'group_listing_seller2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-listing-sellers field-group-tab',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_listing_acreage',
      1 => 'field_listing_bathrooms',
      2 => 'field_listing_bedrooms',
      3 => 'field_listing_garage',
      4 => 'field_listing_year_built',
      5 => 'links',
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
        'id' => 'node_listing_full_group_listing_statistics',
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
      1 => 'field_listing_gross_commission',
      2 => 'field_listing_sale_agent',
      3 => 'field_listing_sale_price',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Transaction Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-listing-transaction-dtls field-group-tab',
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
      0 => 'group_listing_buyers',
      1 => 'group_listing_transaction_dtls',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Transaction',
      'instance_settings' => array(
        'classes' => 'group-listing-transaction field-group-tabs',
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
    'weight' => '100',
    'children' => array(
      0 => 'field_listing_basement',
      1 => 'field_listing_floors',
      2 => 'field_listing_garage',
      3 => 'field_listing_heat',
      4 => 'field_listing_insulation',
      5 => 'field_listing_personal_property',
      6 => 'field_listing_sewage',
      7 => 'field_listing_sq_ft_above',
      8 => 'field_listing_sq_ft_below',
      9 => 'field_listing_sq_ft_finished',
      10 => 'field_listing_walls',
      11 => 'field_listing_water',
      12 => 'field_listing_windows',
      13 => 'field_listing_year_built',
      14 => 'field_listing_outside_features',
      15 => 'field_listing_fireplace_info',
      16 => 'field_listing_siding_info',
      17 => 'listing_sq_ft_total',
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
        'id' => 'node_listing_print_group_print_building_info',
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
    'weight' => '30',
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
        'id' => 'node_listing_print_group_print_general_info',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_general_info|node|listing|print'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_notes|node|listing|print_internal';
  $field_group->group_name = 'group_print_notes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print_internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Notes',
    'weight' => '31',
    'children' => array(
      0 => 'field_listing_notes',
      1 => 'field_listing_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Notes',
      'instance_settings' => array(
        'classes' => 'group-print-notes field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_listing_print_internal_group_print_notes',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_notes|node|listing|print_internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_seller1|node|listing|print_internal';
  $field_group->group_name = 'group_print_seller1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print_internal';
  $field_group->parent_name = 'group_print_sellers';
  $field_group->data = array(
    'label' => 'Seller1',
    'weight' => '301',
    'children' => array(
      0 => 'field_listing_seller1_address',
      1 => 'field_listing_seller1_company',
      2 => 'field_listing_seller1_email',
      3 => 'field_listing_seller1_name',
      4 => 'field_listing_seller1_phone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Seller1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-print-seller1 group-print-seller field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_seller1|node|listing|print_internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_seller2|node|listing|print_internal';
  $field_group->group_name = 'group_print_seller2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print_internal';
  $field_group->parent_name = 'group_print_sellers';
  $field_group->data = array(
    'label' => 'Seller2',
    'weight' => '350',
    'children' => array(
      0 => 'field_listing_buyer2_phone',
      1 => 'field_listing_seller2_address',
      2 => 'field_listing_seller2_company',
      3 => 'field_listing_seller2_email',
      4 => 'field_listing_seller2_name',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Seller2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-print-seller2  group-print-seller  field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_seller2|node|listing|print_internal'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_print_sellers|node|listing|print_internal';
  $field_group->group_name = 'group_print_sellers';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'listing';
  $field_group->mode = 'print_internal';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sellers',
    'weight' => '300',
    'children' => array(
      0 => 'group_print_seller1',
      1 => 'group_print_seller2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sellers',
      'instance_settings' => array(
        'classes' => 'group-print-sellers field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_listing_print_internal_group_print_sellers',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_print_sellers|node|listing|print_internal'] = $field_group;

  return $export;
}
