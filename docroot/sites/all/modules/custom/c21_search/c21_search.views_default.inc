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
  $view->base_table = 'apachesolr__opensolr';
  $view->human_name = 'c21 Search Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Listings';
  $handler->display->display_options['css_class'] = 'view-page-listing-teasers';
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
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Basic message';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There were no listings found. Try broadening your search criteria.';
  $handler->display->display_options['empty']['area']['format'] = 'rich_text';
  /* Field: Apache Solr: entity_id */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_type'] = '0';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_id']['element_wrapper_type'] = '0';
  /* Field: Apache Solr: entity_type */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = '';
  $handler->display->display_options['fields']['entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entity_type']['element_default_classes'] = FALSE;
  /* Field: Apache Solr: bundle */
  $handler->display->display_options['fields']['bundle']['id'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['bundle']['field'] = 'bundle';
  $handler->display->display_options['fields']['bundle']['label'] = '';
  $handler->display->display_options['fields']['bundle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bundle']['element_label_colon'] = FALSE;
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__opensolr';
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
  /* Filter criterion: Apache Solr: im_field_listing_township */
  $handler->display->display_options['filters']['im_field_listing_township']['id'] = 'im_field_listing_township';
  $handler->display->display_options['filters']['im_field_listing_township']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['im_field_listing_township']['field'] = 'im_field_listing_township';
  $handler->display->display_options['filters']['im_field_listing_township']['group'] = 1;
  $handler->display->display_options['filters']['im_field_listing_township']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_field_listing_township']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['im_field_listing_township']['expose']['label'] = 'Township';
  $handler->display->display_options['filters']['im_field_listing_township']['expose']['operator'] = 'im_field_listing_township_op';
  $handler->display->display_options['filters']['im_field_listing_township']['expose']['identifier'] = 'im_field_listing_township';
  $handler->display->display_options['filters']['im_field_listing_township']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: im_field_listing_school_district */
  $handler->display->display_options['filters']['im_field_listing_school_district']['id'] = 'im_field_listing_school_district';
  $handler->display->display_options['filters']['im_field_listing_school_district']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['im_field_listing_school_district']['field'] = 'im_field_listing_school_district';
  $handler->display->display_options['filters']['im_field_listing_school_district']['group'] = 1;
  $handler->display->display_options['filters']['im_field_listing_school_district']['exposed'] = TRUE;
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['label'] = 'School District';
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['operator'] = 'im_field_listing_school_district_op';
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['identifier'] = 'im_field_listing_school_district';
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['im_field_listing_school_district']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Apache Solr: fts_field_listing_list_price */
  $handler->display->display_options['filters']['fts_field_listing_list_price']['id'] = 'fts_field_listing_list_price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['field'] = 'fts_field_listing_list_price';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['value']['min'] = '15000';
  $handler->display->display_options['filters']['fts_field_listing_list_price']['value']['max'] = '1000000';
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
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['field'] = 'its_field_listing_bedrooms';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['operator'] = 'between';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['value']['min'] = '0';
  $handler->display->display_options['filters']['its_field_listing_bedrooms']['value']['max'] = '5';
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
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['field'] = 'fts_field_listing_bathrooms';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['value']['min'] = '0';
  $handler->display->display_options['filters']['fts_field_listing_bathrooms']['value']['max'] = '5';
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
  $handler->display->display_options['filters']['fts_field_listing_acreage']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['field'] = 'fts_field_listing_acreage';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['operator'] = 'between';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['value']['min'] = '0';
  $handler->display->display_options['filters']['fts_field_listing_acreage']['value']['max'] = '5';
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
  /* Filter criterion: Apache Solr: sm_field_listing_status */
  $handler->display->display_options['filters']['sm_field_listing_status']['id'] = 'sm_field_listing_status';
  $handler->display->display_options['filters']['sm_field_listing_status']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['sm_field_listing_status']['field'] = 'sm_field_listing_status';
  $handler->display->display_options['filters']['sm_field_listing_status']['operator'] = 'word';
  $handler->display->display_options['filters']['sm_field_listing_status']['value'] = 'for_sale pending';
  /* Filter criterion: Apache Solr: bs_status */
  $handler->display->display_options['filters']['bs_status']['id'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['filters']['bs_status']['field'] = 'bs_status';
  $handler->display->display_options['filters']['bs_status']['value'] = 'true';

  /* Display: Search Listings Page */
  $handler = $view->new_display('page', 'Search Listings Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'search/listings';
  $export['c21_search_listings'] = $view;

  return $export;
}
