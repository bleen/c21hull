<?php
/**
 * @file
 * c21_rets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function c21_rets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'c21_mls_listings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'c21 MLS Listings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'c21 MLS Listings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'Id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Representative Image */
  $handler->display->display_options['fields']['representative_image']['id'] = 'representative_image';
  $handler->display->display_options['fields']['representative_image']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['representative_image']['field'] = 'representative_image';
  $handler->display->display_options['fields']['representative_image']['label'] = '';
  $handler->display->display_options['fields']['representative_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representative_image']['image_style'] = 'thumbnail';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_mls_number']['id'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['table'] = 'field_data_field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['field'] = 'field_mls_number';
  $handler->display->display_options['fields']['field_mls_number']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_mls_number']['alter']['path'] = 'drealty_listing/[id]';
  $handler->display->display_options['fields']['field_mls_number']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mls_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mls_number']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mls_number']['element_default_classes'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Title';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = 'drealty_listing/[id]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_mls_city']['id'] = 'field_mls_city';
  $handler->display->display_options['fields']['field_mls_city']['table'] = 'field_data_field_mls_city';
  $handler->display->display_options['fields']['field_mls_city']['field'] = 'field_mls_city';
  $handler->display->display_options['fields']['field_mls_city']['element_type'] = '0';
  $handler->display->display_options['fields']['field_mls_city']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mls_city']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_mls_city']['element_default_classes'] = FALSE;
  /* Field: Drealty Listing: Drealty Active Status */
  $handler->display->display_options['fields']['active']['id'] = 'active';
  $handler->display->display_options['fields']['active']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['active']['field'] = 'active';
  $handler->display->display_options['fields']['active']['label'] = 'Active';
  $handler->display->display_options['fields']['active']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['active']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['active']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['active']['empty'] = 'No';
  $handler->display->display_options['fields']['active']['empty_zero'] = TRUE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['label'] = 'Operations';
  $handler->display->display_options['fields']['id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['id_1']['alter']['text'] = '<ul class="links inline operations"><li class="drealty-edit first"><a href="/drealty_listing/[id]/edit">Edit</a></li>
<li class="drealty-delete"><a href="/drealty_listing/[id]/delete">Delete</a></li>
<li class="drealty-rets_refresh last"><a href="/drealty_listing/[id]/rets_refresh">Update RETS Data</a></li>
</ul>';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'mls_residential_listing';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_mls_number_value']['id'] = 'field_mls_number_value';
  $handler->display->display_options['filters']['field_mls_number_value']['table'] = 'field_data_field_mls_number';
  $handler->display->display_options['filters']['field_mls_number_value']['field'] = 'field_mls_number_value';
  $handler->display->display_options['filters']['field_mls_number_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['operator_id'] = 'field_mls_number_value_op';
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['label'] = 'MLS #';
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['description'] = 'ex: 12-3456';
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['operator'] = 'field_mls_number_value_op';
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['identifier'] = 'field_mls_number_value';
  $handler->display->display_options['filters']['field_mls_number_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/drealty_listings';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'MLS Listings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['c21_mls_listings'] = $view;

  return $export;
}
