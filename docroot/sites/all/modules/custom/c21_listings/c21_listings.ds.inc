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
          'lb' => 'Contact Our Agent(s)',
          'lb-el' => 'h3',
          'lb-cl' => 'agents-title',
          'lb-col' => TRUE,
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
      'weight' => '8',
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
          'ow-cl' => 'stat bathroom',
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
    'field_listing_sq_ft_finished' => array(
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
    'field_listing_acreage' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_listing_additional_bldg' => array(
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
    'field_listing_decks' => array(
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
    'field_listing_fireplace' => array(
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
    'field_listing_porch' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
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
    'field_listing_siding' => array(
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
  );
  $export['node|listing|print'] = $ds_fieldsetting;

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
      'weight' => '8',
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
      ),
    ),
    'fields' => array(
      'field_agent_photo' => 'ds_content',
      'title' => 'ds_content',
      'field_agent_phone_number' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
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
        2 => 'field_agent_phone_number',
        3 => 'field_agent_bio',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_agent_photo' => 'ds_content',
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
  $export['node|agent|teaser'] = $ds_layout;

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
        2 => 'field_listing_mls',
        3 => 'group_listing_statistics',
        4 => 'field_listing_featured_photo',
        5 => 'group_listing_location_details',
        6 => 'field_listing_list_price',
        7 => 'field_listing_agent',
        8 => 'field_listing_photos',
        9 => 'field_listing_tags',
        10 => 'field_listing_description',
        11 => 'field_listing_bedrooms',
        12 => 'field_listing_bathrooms',
        13 => 'field_listing_township',
        14 => 'field_listing_development',
        15 => 'field_listing_garage',
        16 => 'field_listing_acreage',
        17 => 'field_listing_school_district',
        18 => 'field_listing_year_built',
      ),
    ),
    'fields' => array(
      'links' => 'ds_content',
      'group_listing_details' => 'ds_content',
      'field_listing_mls' => 'ds_content',
      'group_listing_statistics' => 'ds_content',
      'field_listing_featured_photo' => 'ds_content',
      'group_listing_location_details' => 'ds_content',
      'field_listing_list_price' => 'ds_content',
      'field_listing_agent' => 'ds_content',
      'field_listing_photos' => 'ds_content',
      'field_listing_tags' => 'ds_content',
      'field_listing_description' => 'ds_content',
      'field_listing_bedrooms' => 'ds_content',
      'field_listing_bathrooms' => 'ds_content',
      'field_listing_township' => 'ds_content',
      'field_listing_development' => 'ds_content',
      'field_listing_garage' => 'ds_content',
      'field_listing_acreage' => 'ds_content',
      'field_listing_school_district' => 'ds_content',
      'field_listing_year_built' => 'ds_content',
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
  $ds_layout->id = 'node|listing|micro_teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'listing';
  $ds_layout->view_mode = 'micro_teaser';
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
        8 => 'node_link',
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
        4 => 'group_print_building_info',
        5 => 'field_listing_list_price',
        6 => 'field_listing_acreage',
        7 => 'field_listing_year_built',
        8 => 'field_listing_sewage',
        9 => 'field_listing_taxes',
        10 => 'field_listing_dues',
        11 => 'field_listing_water',
        12 => 'field_listing_zoning',
        13 => 'field_listing_heat',
        14 => 'field_listing_insulation',
        15 => 'field_listing_school_district',
        16 => 'field_listing_siding',
        17 => 'field_listing_fireplace',
        18 => 'field_listing_porch',
        19 => 'field_listing_decks',
        20 => 'field_listing_garage',
        21 => 'field_listing_basement',
        22 => 'field_listing_windows',
        23 => 'field_listing_floors',
        24 => 'field_listing_walls',
        25 => 'field_listing_personal_property',
        26 => 'field_listing_additional_bldg',
        27 => 'field_listing_sq_ft_above',
        28 => 'field_listing_sq_ft_below',
        29 => 'field_listing_sq_ft_finished',
      ),
      'right' => array(
        30 => 'listing_measurements_grid',
        31 => 'field_listing_photos',
      ),
    ),
    'fields' => array(
      'field_listing_id_prefix' => 'left',
      'field_listing_mls' => 'left',
      'field_listing_agent' => 'left',
      'group_print_general_info' => 'left',
      'group_print_building_info' => 'left',
      'field_listing_list_price' => 'left',
      'field_listing_acreage' => 'left',
      'field_listing_year_built' => 'left',
      'field_listing_sewage' => 'left',
      'field_listing_taxes' => 'left',
      'field_listing_dues' => 'left',
      'field_listing_water' => 'left',
      'field_listing_zoning' => 'left',
      'field_listing_heat' => 'left',
      'field_listing_insulation' => 'left',
      'field_listing_school_district' => 'left',
      'field_listing_siding' => 'left',
      'field_listing_fireplace' => 'left',
      'field_listing_porch' => 'left',
      'field_listing_decks' => 'left',
      'field_listing_garage' => 'left',
      'field_listing_basement' => 'left',
      'field_listing_windows' => 'left',
      'field_listing_floors' => 'left',
      'field_listing_walls' => 'left',
      'field_listing_personal_property' => 'left',
      'field_listing_additional_bldg' => 'left',
      'field_listing_sq_ft_above' => 'left',
      'field_listing_sq_ft_below' => 'left',
      'field_listing_sq_ft_finished' => 'left',
      'listing_measurements_grid' => 'right',
      'field_listing_photos' => 'right',
    ),
    'limit' => array(
      'field_listing_agent' => '1',
      'field_listing_school_district' => '1',
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
        8 => 'node_link',
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
