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
  $ds_fieldsetting->id = 'field_collection_item|field_listing_seller|micro_teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_listing_seller';
  $ds_fieldsetting->view_mode = 'micro_teaser';
  $ds_fieldsetting->settings = array(
    'field_seller_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_seller_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_listing_seller|micro_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_listing_seller|teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_listing_seller';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_seller_first_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'seller-first-name',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_seller_last_name' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'seller-last-name',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_listing_seller|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_seller_email|teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_seller_email';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_seller_email_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'email',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_seller_email_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'email-type',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_seller_email|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_seller_phone|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_seller_phone';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_seller_phone_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'phone-number',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_seller_phone_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'phone-type',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_seller_phone|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_seller_phone|teaser';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_seller_phone';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'field_seller_phone_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'phone-number',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
    'field_seller_phone_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'span',
          'fis-cl' => 'phone-type',
          'fis-at' => '',
          'fis-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_seller_phone|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agent|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agent';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'full-name',
        'ft' => array(),
      ),
    ),
    'field_agent_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => 'headshot',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|agent|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agent|micro_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agent';
  $ds_fieldsetting->view_mode = 'micro_teaser';
  $ds_fieldsetting->settings = array(
    'meet_our_agents' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_agent_phone_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_agent_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'headshot',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_agent_email' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|agent|micro_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|agent|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'agent';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'full-name',
        'ft' => array(),
      ),
    ),
    'field_agent_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => 'headshot',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|agent|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'listing_map' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_listing_acreage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'stats-wrapper acreage',
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
    'field_listing_agent' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'aside',
          'ow-cl' => 'agents',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'agent',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_bathrooms' => array(
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
    'field_listing_bedrooms' => array(
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
    'field_listing_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'description',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_listing_development' => array(
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
    'field_listing_featured_photo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => 'featured-photo',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_garage' => array(
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
    'field_listing_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'list-price',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_listing_mls' => array(
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
    'field_listing_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'listing-photos horizontal-scroller',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'figures items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'figure',
          'fi-cl' => 'photo item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_school_district' => array(
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
    'field_listing_township' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
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
    'field_listing_year_built' => array(
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
          'fi-el' => 'time',
          'fi-cl' => 'stat',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|listing|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|micro_teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'micro_teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'listing-title',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'More info',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'more-info',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_featured_photo' => array(
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
    'field_listing_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'list-price',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_mls' => array(
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
  );
  $export['node|listing|micro_teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|print';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'print';
  $ds_fieldsetting->settings = array(
    'listing_measurements_grid' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_office_info' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_listing_acreage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_agent' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-agent field-type-text field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_basement' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_dues' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_floors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_garage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_heat' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_id_prefix' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-id field-type-text field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_insulation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_mls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_personal_property' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_photos' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_listing_school_district' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_sewage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_sq_ft_above' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Sq. Ft. Above',
        ),
      ),
    ),
    'field_listing_sq_ft_below' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Sq. Ft. Below',
        ),
      ),
    ),
    'field_listing_sq_ft_finished' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Sq. Ft. Finished',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-sq-ft-finished field-type-number-integer field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_taxes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_walls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_water' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_windows' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_zoning' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_outside_features' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_fireplace_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_siding_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|listing|print'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|listing|print_internal';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'listing';
  $ds_fieldsetting->view_mode = 'print_internal';
  $ds_fieldsetting->settings = array(
    'listing_fine_print' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_measurements_grid' => array(
      'weight' => '28',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'listing_office_info' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_listing_acreage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_agent' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Agent(s)',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-agent field-type-text field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_basement' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_block' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_development' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_directions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-directions field-type-text-long field-label-above multiline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_dues' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_floors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_garage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_heat' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_id_prefix' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-id field-type-text field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_insulation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_list_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_lockbox_key' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_lot' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_mls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_notes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_listing_personal_property' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Personal Property',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-personal-property field-label-inline inline multiline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_school_district' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_section' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_seller' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'seller',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_sewage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_sq_ft_above' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Sq. Ft. Above',
        ),
      ),
    ),
    'field_listing_sq_ft_below' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Sq. Ft. Below',
        ),
      ),
    ),
    'field_listing_sq_ft_finished' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Sq. Ft. Finished',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-sq-ft-finished field-type-number-integer field-label-inline inline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_street' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_listing_tax_map' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_taxes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_township' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_walls' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_water' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_windows' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_zoning' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_outside_features' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Outside Features',
          'lb-el' => 'div',
          'lb-cl' => 'field-label',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field field-name-field-listing-outside-features field-label-inline inline multiline',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'div',
          'fis-cl' => 'field-items',
          'fis-at' => '',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'field-item',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_fireplace_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_siding_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_style_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
  );
  $export['node|listing|print_internal'] = $ds_fieldsetting;

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
    'listing_map' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'listing-title',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'More info',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'more-info',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_listing_bathrooms' => array(
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
    'field_listing_bedrooms' => array(
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
    'field_listing_featured_photo' => array(
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
    'field_listing_list_price' => array(
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
    'field_listing_mls' => array(
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
    'field_listing_school_district' => array(
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
    'field_listing_sq_ft_finished' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Square Feet',
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
  $export['node|listing|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function c21_listings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_fine_print';
  $ds_field->label = 'Fine Print';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'listing|print
listing|print_internal';
  $ds_field->properties = array();
  $export['listing_fine_print'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_map';
  $ds_field->label = 'Map';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'drealty_listing' => 'drealty_listing',
    'node' => 'node',
  );
  $ds_field->ui_limit = 'listing|*
mls_residential_listing|*';
  $ds_field->properties = array();
  $export['listing_map'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_measurements_grid';
  $ds_field->label = 'Measurements Grid';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'listing|*';
  $ds_field->properties = array();
  $export['listing_measurements_grid'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'listing_office_info';
  $ds_field->label = 'Office Info';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'listing|*';
  $ds_field->properties = array();
  $export['listing_office_info'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'meet_our_agents';
  $ds_field->label = 'Meet Our Agents';
  $ds_field->field_type = 3;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'agent|teaser
agent|micro_teaser';
  $ds_field->properties = array();
  $export['meet_our_agents'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function c21_listings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_listing_seller|teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_listing_seller';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_seller_first_name',
        1 => 'field_seller_last_name',
        2 => 'field_seller_company',
        3 => 'field_seller_address',
        4 => 'field_seller_phone',
        5 => 'field_seller_email',
      ),
    ),
    'fields' => array(
      'field_seller_first_name' => 'ds_content',
      'field_seller_last_name' => 'ds_content',
      'field_seller_company' => 'ds_content',
      'field_seller_address' => 'ds_content',
      'field_seller_phone' => 'ds_content',
      'field_seller_email' => 'ds_content',
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
  $export['field_collection_item|field_listing_seller|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_seller_email|teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_seller_email';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_seller_email_address',
        1 => 'field_seller_email_type',
      ),
    ),
    'fields' => array(
      'field_seller_email_address' => 'ds_content',
      'field_seller_email_type' => 'ds_content',
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
  $export['field_collection_item|field_seller_email|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_seller_phone|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_seller_phone';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_seller_phone_number',
        1 => 'field_seller_phone_type',
      ),
    ),
    'fields' => array(
      'field_seller_phone_number' => 'ds_content',
      'field_seller_phone_type' => 'ds_content',
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
  $export['field_collection_item|field_seller_phone|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_seller_phone|teaser';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_seller_phone';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_seller_phone_number',
        1 => 'field_seller_phone_type',
      ),
    ),
    'fields' => array(
      'field_seller_phone_number' => 'ds_content',
      'field_seller_phone_type' => 'ds_content',
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
  $export['field_collection_item|field_seller_phone|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agent|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agent';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_agent_photo',
        1 => 'title',
        2 => 'field_agent_phone_number',
        3 => 'field_agent_bio',
      ),
    ),
    'fields' => array(
      'field_agent_photo' => 'ds_content',
      'title' => 'ds_content',
      'field_agent_phone_number' => 'ds_content',
      'field_agent_bio' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|agent|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agent|micro_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agent';
  $ds_layout->view_mode = 'micro_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_agent_photo',
        1 => 'title',
        2 => 'field_agent_phone_number',
        3 => 'field_agent_email',
        4 => 'meet_our_agents',
      ),
    ),
    'fields' => array(
      'field_agent_photo' => 'ds_content',
      'title' => 'ds_content',
      'field_agent_phone_number' => 'ds_content',
      'field_agent_email' => 'ds_content',
      'meet_our_agents' => 'ds_content',
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
  $export['node|agent|micro_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|agent|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'agent';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_agent_photo',
        2 => 'field_agent_bio',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_agent_photo' => 'ds_content',
      'field_agent_bio' => 'ds_content',
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
  $export['node|agent|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_listing_id_prefix',
        1 => 'field_listing_type',
        2 => 'field_listing_agent',
        3 => 'field_listing_description',
        4 => 'field_listing_tags',
        5 => 'field_listing_mls',
        6 => 'field_listing_status',
        7 => 'field_listing_list_date',
        8 => 'field_listing_zoning',
        9 => 'field_listing_list_price',
        10 => 'field_listing_commission',
        11 => 'field_listing_lockbox_key',
        12 => 'field_listing_acreage',
        13 => 'field_listing_taxes',
        14 => 'field_listing_dues',
        15 => 'field_listing_virtual_tour',
        16 => 'field_listing_featured_photo',
        17 => 'field_listing_photos',
        18 => 'field_listing_year_built',
        19 => 'field_listing_bedrooms',
        20 => 'field_listing_bathrooms',
        21 => 'field_listing_sewage',
        22 => 'field_listing_water',
        23 => 'field_listing_heat',
        24 => 'field_listing_insulation',
        25 => 'field_listing_garage',
        26 => 'field_listing_basement',
        27 => 'field_listing_windows',
        28 => 'field_listing_floors',
        29 => 'field_listing_walls',
        30 => 'field_listing_school_district',
        31 => 'field_listing_personal_property',
        32 => 'field_listing_sq_ft_above',
        33 => 'field_listing_sq_ft_below',
        34 => 'field_listing_sq_ft_finished',
        35 => 'field_listing_living_room_f2',
        36 => 'field_listing_bedroom1_f2',
        37 => 'field_listing_bedroom1_f1',
        38 => 'field_listing_living_room_f1',
        39 => 'field_listing_living_room_b',
        40 => 'field_listing_other2_b',
        41 => 'field_listing_other1_f1',
        42 => 'field_listing_other3_f1',
        43 => 'field_listing_other3_f2',
        44 => 'field_listing_other1_f2',
        45 => 'field_listing_other2_f1',
        46 => 'field_listing_other1_b',
        47 => 'field_listing_other3_b',
        48 => 'field_listing_bathroom3_f2',
        49 => 'field_listing_bathroom2_b',
        50 => 'field_listing_bathroom1_f2',
        51 => 'field_listing_bathroom1_f1',
        52 => 'field_listing_bathroom1_b',
        53 => 'field_listing_bathroom2_f1',
        54 => 'field_listing_bathroom2_f2',
        55 => 'field_listing_bedroom1_b',
        56 => 'field_listing_bedroom5_f1',
        57 => 'field_listing_bathroom3_f1',
        58 => 'field_listing_bathroom3_b',
        59 => 'field_listing_other2_f2',
        60 => 'field_listing_liv_din_f2',
        61 => 'field_listing_bedroom3_f2',
        62 => 'field_listing_dining_room_f2',
        63 => 'field_listing_liv_din_f1',
        64 => 'field_listing_family_room_b',
        65 => 'field_listing_family_room_f2',
        66 => 'field_listing_family_room_f1',
        67 => 'field_listing_dining_room_f1',
        68 => 'field_listing_dining_room_b',
        69 => 'field_listing_din_kitchen_b',
        70 => 'field_listing_bedroom4_f1',
        71 => 'field_listing_din_kitchen_f1',
        72 => 'field_listing_bedroom4_f2',
        73 => 'field_listing_din_kitchen_f2',
        74 => 'field_listing_bedroom4_b',
        75 => 'field_listing_bedroom3_f1',
        76 => 'field_listing_laundry_f1',
        77 => 'field_listing_bedroom5_f2',
        78 => 'field_listing_laundry_f2',
        79 => 'field_listing_bedroom2_f1',
        80 => 'field_listing_liv_din_b',
        81 => 'field_listing_bedroom2_b',
        82 => 'field_listing_bedroom3_b',
        83 => 'field_listing_laundry_b',
        84 => 'field_listing_bedroom5_b',
        85 => 'field_listing_bedroom2_f2',
        86 => 'field_listing_kitchen_b',
        87 => 'field_listing_kitchen_f1',
        88 => 'field_listing_kitchen_f2',
        89 => 'field_listing_directions',
        90 => 'field_listing_tax_map',
        91 => 'field_listing_lot',
        92 => 'field_listing_block',
        93 => 'field_listing_section',
        94 => 'field_listing_street',
        95 => 'field_listing_seller',
        96 => 'field_listing_notes',
        97 => 'field_listing_development',
        98 => 'field_listing_township',
        99 => 'field_listing_legacy_data',
        100 => 'field_listing_state',
        101 => 'field_listing_building_type',
        102 => 'field_listing_buyer',
        103 => 'field_listing_closing_date',
        104 => 'field_listing_sale_price',
        105 => 'field_listing_sale_agent',
        106 => 'field_listing_gross_commission',
        107 => 'field_listing_outside_features',
        108 => 'field_listing_fireplace_info',
        109 => 'field_listing_style_info',
        110 => 'field_listing_siding_info',
        111 => 'field_listing_longitude',
        112 => 'field_listing_latitude',
      ),
    ),
    'fields' => array(
      'field_listing_id_prefix' => 'ds_content',
      'field_listing_type' => 'ds_content',
      'field_listing_agent' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'field_listing_tags' => 'ds_content',
      'field_listing_mls' => 'ds_content',
      'field_listing_status' => 'ds_content',
      'field_listing_list_date' => 'ds_content',
      'field_listing_zoning' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_commission' => 'ds_content',
      'field_listing_lockbox_key' => 'ds_content',
      'field_listing_acreage' => 'ds_content',
      'field_listing_taxes' => 'ds_content',
      'field_listing_dues' => 'ds_content',
      'field_listing_virtual_tour' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_photos' => 'ds_content',
      'field_listing_year_built' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_sewage' => 'ds_content',
      'field_listing_water' => 'ds_content',
      'field_listing_heat' => 'ds_content',
      'field_listing_insulation' => 'ds_content',
      'field_listing_garage' => 'ds_content',
      'field_listing_basement' => 'ds_content',
      'field_listing_windows' => 'ds_content',
      'field_listing_floors' => 'ds_content',
      'field_listing_walls' => 'ds_content',
      'field_listing_school_district' => 'ds_content',
      'field_listing_personal_property' => 'ds_content',
      'field_listing_sq_ft_above' => 'ds_content',
      'field_listing_sq_ft_below' => 'ds_content',
      'field_listing_sq_ft_finished' => 'ds_content',
      'field_listing_living_room_f2' => 'ds_content',
      'field_listing_bedroom1_f2' => 'ds_content',
      'field_listing_bedroom1_f1' => 'ds_content',
      'field_listing_living_room_f1' => 'ds_content',
      'field_listing_living_room_b' => 'ds_content',
      'field_listing_other2_b' => 'ds_content',
      'field_listing_other1_f1' => 'ds_content',
      'field_listing_other3_f1' => 'ds_content',
      'field_listing_other3_f2' => 'ds_content',
      'field_listing_other1_f2' => 'ds_content',
      'field_listing_other2_f1' => 'ds_content',
      'field_listing_other1_b' => 'ds_content',
      'field_listing_other3_b' => 'ds_content',
      'field_listing_bathroom3_f2' => 'ds_content',
      'field_listing_bathroom2_b' => 'ds_content',
      'field_listing_bathroom1_f2' => 'ds_content',
      'field_listing_bathroom1_f1' => 'ds_content',
      'field_listing_bathroom1_b' => 'ds_content',
      'field_listing_bathroom2_f1' => 'ds_content',
      'field_listing_bathroom2_f2' => 'ds_content',
      'field_listing_bedroom1_b' => 'ds_content',
      'field_listing_bedroom5_f1' => 'ds_content',
      'field_listing_bathroom3_f1' => 'ds_content',
      'field_listing_bathroom3_b' => 'ds_content',
      'field_listing_other2_f2' => 'ds_content',
      'field_listing_liv_din_f2' => 'ds_content',
      'field_listing_bedroom3_f2' => 'ds_content',
      'field_listing_dining_room_f2' => 'ds_content',
      'field_listing_liv_din_f1' => 'ds_content',
      'field_listing_family_room_b' => 'ds_content',
      'field_listing_family_room_f2' => 'ds_content',
      'field_listing_family_room_f1' => 'ds_content',
      'field_listing_dining_room_f1' => 'ds_content',
      'field_listing_dining_room_b' => 'ds_content',
      'field_listing_din_kitchen_b' => 'ds_content',
      'field_listing_bedroom4_f1' => 'ds_content',
      'field_listing_din_kitchen_f1' => 'ds_content',
      'field_listing_bedroom4_f2' => 'ds_content',
      'field_listing_din_kitchen_f2' => 'ds_content',
      'field_listing_bedroom4_b' => 'ds_content',
      'field_listing_bedroom3_f1' => 'ds_content',
      'field_listing_laundry_f1' => 'ds_content',
      'field_listing_bedroom5_f2' => 'ds_content',
      'field_listing_laundry_f2' => 'ds_content',
      'field_listing_bedroom2_f1' => 'ds_content',
      'field_listing_liv_din_b' => 'ds_content',
      'field_listing_bedroom2_b' => 'ds_content',
      'field_listing_bedroom3_b' => 'ds_content',
      'field_listing_laundry_b' => 'ds_content',
      'field_listing_bedroom5_b' => 'ds_content',
      'field_listing_bedroom2_f2' => 'ds_content',
      'field_listing_kitchen_b' => 'ds_content',
      'field_listing_kitchen_f1' => 'ds_content',
      'field_listing_kitchen_f2' => 'ds_content',
      'field_listing_directions' => 'ds_content',
      'field_listing_tax_map' => 'ds_content',
      'field_listing_lot' => 'ds_content',
      'field_listing_block' => 'ds_content',
      'field_listing_section' => 'ds_content',
      'field_listing_street' => 'ds_content',
      'field_listing_seller' => 'ds_content',
      'field_listing_notes' => 'ds_content',
      'field_listing_development' => 'ds_content',
      'field_listing_township' => 'ds_content',
      'field_listing_legacy_data' => 'ds_content',
      'field_listing_state' => 'ds_content',
      'field_listing_building_type' => 'ds_content',
      'field_listing_buyer' => 'ds_content',
      'field_listing_closing_date' => 'ds_content',
      'field_listing_sale_price' => 'ds_content',
      'field_listing_sale_agent' => 'ds_content',
      'field_listing_gross_commission' => 'ds_content',
      'field_listing_outside_features' => 'ds_content',
      'field_listing_fireplace_info' => 'ds_content',
      'field_listing_style_info' => 'ds_content',
      'field_listing_siding_info' => 'ds_content',
      'field_listing_longitude' => 'ds_content',
      'field_listing_latitude' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|listing|default'] = $ds_layout;

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
        0 => 'links',
        1 => 'group_listing_details',
        2 => 'field_listing_bedrooms',
        3 => 'group_listing_statistics',
        4 => 'field_listing_bathrooms',
        5 => 'field_listing_mls',
        6 => 'group_listing_location_details',
        7 => 'field_listing_featured_photo',
        8 => 'field_listing_garage',
        9 => 'field_listing_list_price',
        10 => 'field_listing_acreage',
        11 => 'field_listing_photos',
        12 => 'field_listing_year_built',
        13 => 'field_listing_tags',
        14 => 'field_listing_description',
        15 => 'field_listing_township',
        16 => 'field_listing_development',
        17 => 'field_listing_school_district',
        18 => 'listing_map',
        19 => 'field_listing_agent',
      ),
    ),
    'fields' => array(
      'links' => 'ds_content',
      'group_listing_details' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'group_listing_statistics' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_mls' => 'ds_content',
      'group_listing_location_details' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_garage' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_acreage' => 'ds_content',
      'field_listing_photos' => 'ds_content',
      'field_listing_year_built' => 'ds_content',
      'field_listing_tags' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'field_listing_township' => 'ds_content',
      'field_listing_development' => 'ds_content',
      'field_listing_school_district' => 'ds_content',
      'listing_map' => 'ds_content',
      'field_listing_agent' => 'ds_content',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|listing|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|micro_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'micro_teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_listing_mls',
        1 => 'title',
        2 => 'field_listing_featured_photo',
        3 => 'field_listing_list_price',
        4 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_listing_mls' => 'ds_content',
      'title' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'node_link' => 'ds_content',
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
  $export['node|listing|micro_teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_listing_id_prefix',
        1 => 'field_listing_mls',
        2 => 'field_listing_agent',
        3 => 'group_print_general_info',
        4 => 'field_listing_list_price',
        5 => 'group_print_building_info',
        7 => 'field_listing_year_built',
        8 => 'field_listing_acreage',
        9 => 'field_listing_sewage',
        10 => 'field_listing_taxes',
        12 => 'field_listing_dues',
        13 => 'field_listing_water',
        14 => 'field_listing_heat',
        15 => 'field_listing_zoning',
        16 => 'field_listing_school_district',
        17 => 'field_listing_insulation',
        18 => 'field_listing_siding_info',
        19 => 'field_listing_fireplace_info',
        20 => 'field_listing_garage',
        21 => 'field_listing_basement',
        22 => 'field_listing_windows',
        23 => 'field_listing_floors',
        24 => 'field_listing_walls',
        25 => 'field_listing_outside_features',
        26 => 'field_listing_sq_ft_above',
        27 => 'field_listing_sq_ft_below',
        28 => 'field_listing_sq_ft_finished',
        29 => 'field_listing_personal_property',
      ),
      'right' => array(
        6 => 'field_listing_photos',
        11 => 'listing_office_info',
        30 => 'listing_measurements_grid',
      ),
    ),
    'fields' => array(
      'field_listing_id_prefix' => 'left',
      'field_listing_mls' => 'left',
      'field_listing_agent' => 'left',
      'group_print_general_info' => 'left',
      'field_listing_list_price' => 'left',
      'group_print_building_info' => 'left',
      'field_listing_photos' => 'right',
      'field_listing_year_built' => 'left',
      'field_listing_acreage' => 'left',
      'field_listing_sewage' => 'left',
      'field_listing_taxes' => 'left',
      'listing_office_info' => 'right',
      'field_listing_dues' => 'left',
      'field_listing_water' => 'left',
      'field_listing_heat' => 'left',
      'field_listing_zoning' => 'left',
      'field_listing_school_district' => 'left',
      'field_listing_insulation' => 'left',
      'field_listing_siding_info' => 'left',
      'field_listing_fireplace_info' => 'left',
      'field_listing_garage' => 'left',
      'field_listing_basement' => 'left',
      'field_listing_windows' => 'left',
      'field_listing_floors' => 'left',
      'field_listing_walls' => 'left',
      'field_listing_outside_features' => 'left',
      'field_listing_sq_ft_above' => 'left',
      'field_listing_sq_ft_below' => 'left',
      'field_listing_sq_ft_finished' => 'left',
      'field_listing_personal_property' => 'left',
      'listing_measurements_grid' => 'right',
    ),
    'limit' => array(
      'field_listing_agent' => '1',
      'field_listing_photos' => '9',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|listing|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|listing|print_internal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'print_internal';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_listing_id_prefix',
        1 => 'field_listing_mls',
        2 => 'field_listing_agent',
        3 => 'field_listing_list_price',
        4 => 'field_listing_school_district',
        5 => 'field_listing_lockbox_key',
        6 => 'field_listing_style_info',
        7 => 'field_listing_acreage',
        8 => 'field_listing_taxes',
        9 => 'field_listing_dues',
        10 => 'field_listing_zoning',
        11 => 'field_listing_year_built',
        12 => 'field_listing_sewage',
        13 => 'field_listing_water',
        14 => 'field_listing_heat',
        15 => 'field_listing_insulation',
        16 => 'field_listing_siding_info',
        17 => 'field_listing_fireplace_info',
        18 => 'field_listing_garage',
        19 => 'field_listing_basement',
        20 => 'field_listing_windows',
        21 => 'field_listing_floors',
        22 => 'field_listing_walls',
        23 => 'field_listing_sq_ft_above',
        24 => 'field_listing_sq_ft_below',
        25 => 'field_listing_sq_ft_finished',
        26 => 'field_listing_outside_features',
        27 => 'field_listing_personal_property',
      ),
      'right' => array(
        28 => 'listing_measurements_grid',
        29 => 'field_listing_tax_map',
        30 => 'field_listing_development',
        31 => 'field_listing_lot',
        32 => 'field_listing_block',
        33 => 'field_listing_section',
        34 => 'field_listing_township',
        35 => 'field_listing_street',
        36 => 'field_listing_directions',
        37 => 'group_print_sellers',
        38 => 'group_print_notes',
        39 => 'field_listing_seller',
        40 => 'field_listing_tags',
        42 => 'field_listing_notes',
      ),
      'footer' => array(
        41 => 'listing_office_info',
        43 => 'listing_fine_print',
      ),
    ),
    'fields' => array(
      'field_listing_id_prefix' => 'left',
      'field_listing_mls' => 'left',
      'field_listing_agent' => 'left',
      'field_listing_list_price' => 'left',
      'field_listing_school_district' => 'left',
      'field_listing_lockbox_key' => 'left',
      'field_listing_style_info' => 'left',
      'field_listing_acreage' => 'left',
      'field_listing_taxes' => 'left',
      'field_listing_dues' => 'left',
      'field_listing_zoning' => 'left',
      'field_listing_year_built' => 'left',
      'field_listing_sewage' => 'left',
      'field_listing_water' => 'left',
      'field_listing_heat' => 'left',
      'field_listing_insulation' => 'left',
      'field_listing_siding_info' => 'left',
      'field_listing_fireplace_info' => 'left',
      'field_listing_garage' => 'left',
      'field_listing_basement' => 'left',
      'field_listing_windows' => 'left',
      'field_listing_floors' => 'left',
      'field_listing_walls' => 'left',
      'field_listing_sq_ft_above' => 'left',
      'field_listing_sq_ft_below' => 'left',
      'field_listing_sq_ft_finished' => 'left',
      'field_listing_outside_features' => 'left',
      'field_listing_personal_property' => 'left',
      'listing_measurements_grid' => 'right',
      'field_listing_tax_map' => 'right',
      'field_listing_development' => 'right',
      'field_listing_lot' => 'right',
      'field_listing_block' => 'right',
      'field_listing_section' => 'right',
      'field_listing_township' => 'right',
      'field_listing_street' => 'right',
      'field_listing_directions' => 'right',
      'group_print_sellers' => 'right',
      'group_print_notes' => 'right',
      'field_listing_seller' => 'right',
      'field_listing_tags' => 'right',
      'listing_office_info' => 'footer',
      'field_listing_notes' => 'right',
      'listing_fine_print' => 'footer',
    ),
    'limit' => array(
      'field_listing_school_district' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|listing|print_internal'] = $ds_layout;

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
        0 => 'field_listing_mls',
        1 => 'field_listing_featured_photo',
        2 => 'field_listing_list_price',
        3 => 'title',
        4 => 'field_listing_bedrooms',
        5 => 'field_listing_bathrooms',
        6 => 'field_listing_sq_ft_finished',
        7 => 'field_listing_school_district',
        8 => 'listing_map',
        9 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_listing_mls' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'title' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_sq_ft_finished' => 'ds_content',
      'field_listing_school_district' => 'ds_content',
      'listing_map' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'limit' => array(
      'field_listing_school_district' => '1',
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
  $export['node|listing|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function c21_listings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'print_internal';
  $ds_view_mode->label = 'Print Internal';
  $ds_view_mode->entities = array(
    'drealty_listing' => 'drealty_listing',
    'node' => 'node',
  );
  $export['print_internal'] = $ds_view_mode;

  return $export;
}
