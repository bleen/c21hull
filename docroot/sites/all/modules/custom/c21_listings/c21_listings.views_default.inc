<?php
/**
 * @file
 * c21_listings.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function c21_listings_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'c21_agents';
  $view->description = 'A list of current agents';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'c21 Agents';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meet Our Agents';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'field_data_field_agent_last_name|field_agent_last_name_value';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Last Name (field_agent_last_name) */
  $handler->display->display_options['sorts']['field_agent_last_name_value']['id'] = 'field_agent_last_name_value';
  $handler->display->display_options['sorts']['field_agent_last_name_value']['table'] = 'field_data_field_agent_last_name';
  $handler->display->display_options['sorts']['field_agent_last_name_value']['field'] = 'field_agent_last_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agent' => 'agent',
  );
  /* Filter criterion: Content: Status (field_agent_status) */
  $handler->display->display_options['filters']['field_agent_status_value']['id'] = 'field_agent_status_value';
  $handler->display->display_options['filters']['field_agent_status_value']['table'] = 'field_data_field_agent_status';
  $handler->display->display_options['filters']['field_agent_status_value']['field'] = 'field_agent_status_value';
  $handler->display->display_options['filters']['field_agent_status_value']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'agents';
  $export['c21_agents'] = $view;

  $view = new view();
  $view->name = 'c21_featured_listings';
  $view->description = 'A view of the most recently added listings that are not marked as "featured"';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'c21 Featured Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listings/featured';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more featured listings';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['flexslider_views_slideshow']['optionset'] = 'c21_random_slide';
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Featured Photo (field_listing_featured_photo:fid) */
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['id'] = 'field_listing_featured_photo_fid';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['table'] = 'field_data_field_listing_featured_photo';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['field'] = 'field_listing_featured_photo_fid';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['operator'] = 'not empty';
  $export['c21_featured_listings'] = $view;

  $view = new view();
  $view->name = 'c21_recently_added_listings';
  $view->description = 'A view of the most recently added listings that are not marked as "featured"';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'c21 Recently Added Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently Added Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listings/recently-added';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'more recent listings';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['slideshow_type'] = 'flexslider_views_slideshow';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|created';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '0';
  /* Filter criterion: Content: Featured Photo (field_listing_featured_photo:fid) */
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['id'] = 'field_listing_featured_photo_fid';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['table'] = 'field_data_field_listing_featured_photo';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['field'] = 'field_listing_featured_photo_fid';
  $handler->display->display_options['filters']['field_listing_featured_photo_fid']['operator'] = 'not empty';
  $export['c21_recently_added_listings'] = $view;

  $view = new view();
  $view->name = 'c21_reports';
  $view->description = 'Content overview page for Workbench.';
  $view->tag = 'Workbench';
  $view->base_table = 'node';
  $view->human_name = 'c21 Reports';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Listing Reports';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer site configuration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply Filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear Filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_listing_list_date_value2' => array(
      'bef_format' => 'bef_datepicker',
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
    'field_listing_agent_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_listing_building_type_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_listing_status_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_listing_id_prefix' => 'field_listing_id_prefix',
    'field_listing_mls' => 'field_listing_mls',
    'field_listing_list_price' => 'field_listing_list_price',
    'field_listing_list_date' => 'field_listing_list_date',
    'field_listing_list_date_1' => 'field_listing_list_date_1',
    'field_listing_agent' => 'field_listing_agent',
    'field_listing_type' => 'field_listing_type',
    'field_listing_status' => 'field_listing_status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_id_prefix' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_mls' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_list_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_list_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_list_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_agent' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_listing_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results were found.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Listing ID */
  $handler->display->display_options['fields']['field_listing_id_prefix']['id'] = 'field_listing_id_prefix';
  $handler->display->display_options['fields']['field_listing_id_prefix']['table'] = 'field_data_field_listing_id_prefix';
  $handler->display->display_options['fields']['field_listing_id_prefix']['field'] = 'field_listing_id_prefix';
  $handler->display->display_options['fields']['field_listing_id_prefix']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_listing_id_prefix']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_listing_id_prefix']['type'] = 'listing_id';
  /* Field: Content: MLS # */
  $handler->display->display_options['fields']['field_listing_mls']['id'] = 'field_listing_mls';
  $handler->display->display_options['fields']['field_listing_mls']['table'] = 'field_data_field_listing_mls';
  $handler->display->display_options['fields']['field_listing_mls']['field'] = 'field_listing_mls';
  $handler->display->display_options['fields']['field_listing_mls']['element_type'] = '0';
  $handler->display->display_options['fields']['field_listing_mls']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_listing_mls']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_listing_mls']['field_api_classes'] = TRUE;
  /* Field: Content: List Price */
  $handler->display->display_options['fields']['field_listing_list_price']['id'] = 'field_listing_list_price';
  $handler->display->display_options['fields']['field_listing_list_price']['table'] = 'field_data_field_listing_list_price';
  $handler->display->display_options['fields']['field_listing_list_price']['field'] = 'field_listing_list_price';
  $handler->display->display_options['fields']['field_listing_list_price']['element_type'] = '0';
  $handler->display->display_options['fields']['field_listing_list_price']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_listing_list_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_listing_list_price']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_listing_list_price']['field_api_classes'] = TRUE;
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_listing_list_date']['id'] = 'field_listing_list_date';
  $handler->display->display_options['fields']['field_listing_list_date']['table'] = 'field_data_field_listing_list_date';
  $handler->display->display_options['fields']['field_listing_list_date']['field'] = 'field_listing_list_date';
  $handler->display->display_options['fields']['field_listing_list_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_listing_list_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_listing_list_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_listing_list_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_listing_list_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_listing_list_date']['field_api_classes'] = TRUE;
  /* Field: Content: List Date */
  $handler->display->display_options['fields']['field_listing_list_date_1']['id'] = 'field_listing_list_date_1';
  $handler->display->display_options['fields']['field_listing_list_date_1']['table'] = 'field_data_field_listing_list_date';
  $handler->display->display_options['fields']['field_listing_list_date_1']['field'] = 'field_listing_list_date';
  $handler->display->display_options['fields']['field_listing_list_date_1']['label'] = 'Expires On';
  $handler->display->display_options['fields']['field_listing_list_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Agent */
  $handler->display->display_options['fields']['field_listing_agent']['id'] = 'field_listing_agent';
  $handler->display->display_options['fields']['field_listing_agent']['table'] = 'field_data_field_listing_agent';
  $handler->display->display_options['fields']['field_listing_agent']['field'] = 'field_listing_agent';
  $handler->display->display_options['fields']['field_listing_agent']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_listing_agent']['delta_offset'] = '0';
  /* Field: Content: Listing Type */
  $handler->display->display_options['fields']['field_listing_type']['id'] = 'field_listing_type';
  $handler->display->display_options['fields']['field_listing_type']['table'] = 'field_data_field_listing_type';
  $handler->display->display_options['fields']['field_listing_type']['field'] = 'field_listing_type';
  $handler->display->display_options['fields']['field_listing_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_listing_status']['id'] = 'field_listing_status';
  $handler->display->display_options['fields']['field_listing_status']['table'] = 'field_data_field_listing_status';
  $handler->display->display_options['fields']['field_listing_status']['field'] = 'field_listing_status';
  $handler->display->display_options['fields']['field_listing_status']['element_type'] = '0';
  $handler->display->display_options['fields']['field_listing_status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_listing_status']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_listing_status']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_listing_status']['field_api_classes'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'listing' => 'listing',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 1;
  /* Filter criterion: Content: List Date - end date (field_listing_list_date:value2) */
  $handler->display->display_options['filters']['field_listing_list_date_value2']['id'] = 'field_listing_list_date_value2';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['table'] = 'field_data_field_listing_list_date';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['field'] = 'field_listing_list_date_value2';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_listing_list_date_value2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listing_list_date_value2']['expose']['operator_id'] = 'field_listing_list_date_value2_op';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['expose']['label'] = 'Expiration Date';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['expose']['operator'] = 'field_listing_list_date_value2_op';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['expose']['identifier'] = 'field_listing_list_date_value2';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_listing_list_date_value2']['group_info']['label'] = 'List Date - end date (field_listing_list_date:value2)';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['group_info']['identifier'] = 'field_listing_list_date_value2';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_listing_list_date_value2']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_listing_list_date_value2']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_listing_list_date_value2']['year_range'] = '-10:+1';
  /* Filter criterion: Content: Agent (field_listing_agent) */
  $handler->display->display_options['filters']['field_listing_agent_target_id']['id'] = 'field_listing_agent_target_id';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['table'] = 'field_data_field_listing_agent';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['field'] = 'field_listing_agent_target_id';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_listing_agent_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listing_agent_target_id']['expose']['operator_id'] = 'field_listing_agent_target_id_op';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['expose']['label'] = 'Agent';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['expose']['operator'] = 'field_listing_agent_target_id_op';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['expose']['identifier'] = 'field_listing_agent_target_id';
  $handler->display->display_options['filters']['field_listing_agent_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'listing' => 'listing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Building Type (field_listing_building_type) */
  $handler->display->display_options['filters']['field_listing_building_type_value']['id'] = 'field_listing_building_type_value';
  $handler->display->display_options['filters']['field_listing_building_type_value']['table'] = 'field_data_field_listing_building_type';
  $handler->display->display_options['filters']['field_listing_building_type_value']['field'] = 'field_listing_building_type_value';
  $handler->display->display_options['filters']['field_listing_building_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_listing_building_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listing_building_type_value']['expose']['operator_id'] = 'field_listing_building_type_value_op';
  $handler->display->display_options['filters']['field_listing_building_type_value']['expose']['label'] = 'Building Type';
  $handler->display->display_options['filters']['field_listing_building_type_value']['expose']['operator'] = 'field_listing_building_type_value_op';
  $handler->display->display_options['filters']['field_listing_building_type_value']['expose']['identifier'] = 'field_listing_building_type_value';
  $handler->display->display_options['filters']['field_listing_building_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Status (field_listing_status) */
  $handler->display->display_options['filters']['field_listing_status_value']['id'] = 'field_listing_status_value';
  $handler->display->display_options['filters']['field_listing_status_value']['table'] = 'field_data_field_listing_status';
  $handler->display->display_options['filters']['field_listing_status_value']['field'] = 'field_listing_status_value';
  $handler->display->display_options['filters']['field_listing_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_listing_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_listing_status_value']['expose']['operator_id'] = 'field_listing_status_value_op';
  $handler->display->display_options['filters']['field_listing_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_listing_status_value']['expose']['operator'] = 'field_listing_status_value_op';
  $handler->display->display_options['filters']['field_listing_status_value']['expose']['identifier'] = 'field_listing_status_value';
  $handler->display->display_options['filters']['field_listing_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Listing Report */
  $handler = $view->new_display('page', 'Listing Report', 'listing_report');
  $handler->display->display_options['display_description'] = 'General information about listings';
  $handler->display->display_options['path'] = 'admin/reports/c21/listings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Listing Reports';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Listing Report Export */
  $handler = $view->new_display('views_data_export', 'Listing Report Export', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Provides an Excel export of this view';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'listing_report.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['path'] = 'listings_report.xls';
  $handler->display->display_options['displays'] = array(
    'listing_report' => 'listing_report',
    'default' => 0,
  );
  $export['c21_reports'] = $view;

  $view = new view();
  $view->name = 'c21_taxonomy_terms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__opensolr';
  $view->human_name = 'c21 Taxonomy Terms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Apache Solr: entity_id */
  $handler->display->display_options['fields']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['fields']['entity_id']['label'] = '';
  $handler->display->display_options['fields']['entity_id']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: entity_type */
  $handler->display->display_options['fields']['entity_type']['id'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['entity_type']['field'] = 'entity_type';
  $handler->display->display_options['fields']['entity_type']['label'] = '';
  $handler->display->display_options['fields']['entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entity_type']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: bundle_name */
  $handler->display->display_options['fields']['bundle_name']['id'] = 'bundle_name';
  $handler->display->display_options['fields']['bundle_name']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['fields']['bundle_name']['field'] = 'bundle_name';
  $handler->display->display_options['fields']['bundle_name']['label'] = '';
  $handler->display->display_options['fields']['bundle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['bundle_name']['element_label_colon'] = FALSE;
  /* Contextual filter: Apache Solr: im_field_terms */
  $handler->display->display_options['arguments']['im_field_terms']['id'] = 'im_field_terms';
  $handler->display->display_options['arguments']['im_field_terms']['table'] = 'apachesolr__opensolr';
  $handler->display->display_options['arguments']['im_field_terms']['field'] = 'im_field_terms';
  $handler->display->display_options['arguments']['im_field_terms']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['im_field_terms']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['im_field_terms']['title'] = '%1';
  $handler->display->display_options['arguments']['im_field_terms']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['im_field_terms']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['im_field_terms']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['im_field_terms']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['im_field_terms']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['im_field_terms']['validate']['type'] = 'taxonomy_term';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $export['c21_taxonomy_terms'] = $view;

  return $export;
}
