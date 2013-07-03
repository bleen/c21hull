<?php
/**
 * @file
 * c21_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function c21_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'c21_search_listings';
  $view->description = 'Primary search tool for finding listings.';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__local_solr';
  $view->human_name = 'c21 Search Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'fts_field_listing_bathrooms' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '10',
        'bef_slider_step' => '.5',
        'bef_slider_animate' => 'fast',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'fts_field_listing_acreage' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '10',
        'bef_slider_step' => '.25',
        'bef_slider_animate' => 'fast',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'fts_field_listing_list_price' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '1000',
        'bef_slider_max' => '1500000',
        'bef_slider_step' => '1000',
        'bef_slider_animate' => 'fast',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'its_field_listing_bedrooms' => array(
      'bef_format' => 'bef_slider',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '10',
        'bef_slider_step' => '1',
        'bef_slider_animate' => 'fast',
        'bef_slider_orientation' => 'horizontal',
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: entity_id */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = '0';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['group'] = 1;
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: fts_field_listing_list_price */
  $handler->display->display_options['filters']['fts_field_listing_list_price']['id'] = 'fts_field_listing_list_price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['field'] = 'fts_field_listing_list_price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['value']['min'] = '150000';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['value']['max'] = '750000';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['group'] = 1;
  $handler->display->display_options['filters']['fts_field_listing_list_price']['exposed'] = TRUE;
  $handler->display->display_options['filters']['fts_field_listing_list_price']['expose']['operator_id'] = 'fts_field_listing_list_price_op';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['expose']['label'] = 'List Price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['expose']['operator'] = 'fts_field_listing_list_price_op';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['expose']['identifier'] = 'fts_field_listing_list_price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: its_field_listing_bedrooms */
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['id'] = 'its_field_listing_bedrooms';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['field'] = 'its_field_listing_bedrooms';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['operator'] = 'between';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['value']['min'] = '1';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['value']['max'] = '4';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['group'] = 1;
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['expose']['operator_id'] = 'its_field_listing_bedrooms_op';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['expose']['label'] = 'Bedrooms';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['expose']['operator'] = 'its_field_listing_bedrooms_op';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['expose']['identifier'] = 'its_field_listing_bedrooms';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: fts_field_listing_bathrooms */
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['id'] = 'fts_field_listing_bathrooms';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['field'] = 'fts_field_listing_bathrooms';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['value']['min'] = '1.5';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['value']['max'] = '4';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['group'] = 1;
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['exposed'] = TRUE;
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['expose']['operator_id'] = 'fts_field_listing_bathrooms_op';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['expose']['label'] = 'Bathrooms';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['expose']['operator'] = 'fts_field_listing_bathrooms_op';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['expose']['identifier'] = 'fts_field_listing_bathrooms';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: fts_field_listing_acreage */
  $handler->display->display_options['filters']['fts_field_listing_acreage']['id'] = 'fts_field_listing_acreage';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['table'] = 'apachesolr__local_solr';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['field'] = 'fts_field_listing_acreage';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['value']['min'] = '1.5';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['value']['max'] = '4';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['group'] = 1;
  $handler->display->display_options['filters']['fts_field_listing_acreage']['exposed'] = TRUE;
  $handler->display->display_options['filters']['fts_field_listing_acreage']['expose']['operator_id'] = 'fts_field_listing_acreage_op';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['expose']['label'] = 'Acreage';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['expose']['operator'] = 'fts_field_listing_acreage_op';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['expose']['identifier'] = 'fts_field_listing_acreage';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Search Listings Page */
  $handler = $view->new_display('page', 'Search Listings Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/listings';
  $export['c21_search_listings'] = $view;

  return $export;
}