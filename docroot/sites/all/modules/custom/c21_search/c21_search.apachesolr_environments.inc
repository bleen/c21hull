<?php
/**
 * @file
 * c21_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function c21_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'hosted_solr_support';
  $environment->name = 'Hosted SOLR support (opensolr.com)';
  $environment->url = 'http://us.opensolr.com/solr/c21hull';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1372465265',
        'last_entity_id' => '8307',
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1372809790,
    'apachesolr_last_optimize' => 1372465282,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'listing',
    ),
  );
  $export['hosted_solr_support'] = $environment;

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'local_solr';
  $environment->name = 'Local SOLR';
  $environment->url = 'http://localhost:8080/solr/c21hull';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_access_always_add_grants' => 0,
    'apachesolr_index_last' => array(
      'drealty_listing' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'drealty_listing_type' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'drealty_connection_entity' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'field_collection_item' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'node' => array(
        'last_changed' => '1373031476',
        'last_entity_id' => '8632',
      ),
      'redirect' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'file' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_term' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'taxonomy_vocabulary' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
      'user' => array(
        'last_changed' => 0,
        'last_entity_id' => 0,
      ),
    ),
    'apachesolr_index_updated' => 1373075311,
    'apachesolr_last_optimize' => 1373052291,
    'apachesolr_read_only' => '0',
    'apachesolr_search_changed_boost' => '0:0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '4:200.0',
    'apachesolr_search_facet_pages' => '',
    'apachesolr_search_promote_boost' => '3.0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'agent' => '0',
      'page' => '0',
      'listing' => '0',
      'listing_type' => '0',
    ),
    'field_bias' => array(
      'access__all' => '0',
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '1.0',
      'dm_field_listing_list_date' => '0',
      'dm_field_listing_list_date_end' => '0',
      'dm_field_listing_year_built' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'ftm_field_listing_acreage' => '0',
      'ftm_field_listing_bathrooms' => '0',
      'ftm_field_listing_commission' => '0',
      'ftm_field_listing_dues' => '0',
      'ftm_field_listing_list_price' => '0',
      'ftm_field_listing_taxes' => '0',
      'fts_field_listing_acreage' => '0',
      'fts_field_listing_bathrooms' => '0',
      'fts_field_listing_commission' => '0',
      'fts_field_listing_dues' => '0',
      'fts_field_listing_list_price' => '0',
      'fts_field_listing_taxes' => '0',
      'hash' => '0',
      'id' => '0',
      'im_field_listing_additional_bldg' => '0',
      'im_field_listing_basement' => '0',
      'im_field_listing_development' => '0',
      'im_field_listing_electric_compan' => '0',
      'im_field_listing_floors' => '0',
      'im_field_listing_furniture' => '0',
      'im_field_listing_garage' => '0',
      'im_field_listing_heat' => '0',
      'im_field_listing_insulation' => '0',
      'im_field_listing_road_surface' => '0',
      'im_field_listing_school_district' => '0',
      'im_field_listing_sewage' => '0',
      'im_field_listing_township' => '0',
      'im_field_listing_walls' => '0',
      'im_field_listing_water' => '0',
      'im_field_listing_windows' => '0',
      'im_vid_10' => '0',
      'im_vid_11' => '0',
      'im_vid_12' => '0',
      'im_vid_13' => '0',
      'im_vid_14' => '0',
      'im_vid_15' => '0',
      'im_vid_16' => '0',
      'im_vid_17' => '0',
      'im_vid_2' => '0',
      'im_vid_3' => '0',
      'im_vid_4' => '0',
      'im_vid_5' => '0',
      'im_vid_6' => '0',
      'im_vid_7' => '0',
      'im_vid_8' => '0',
      'im_vid_9' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'itm_field_listing_bedrooms' => '0',
      'itm_field_listing_sq_ft_above' => '0',
      'itm_field_listing_sq_ft_below' => '0',
      'itm_field_listing_sq_ft_finished' => '0',
      'its_field_listing_bedrooms' => '0',
      'its_field_listing_sq_ft_above' => '0',
      'its_field_listing_sq_ft_below' => '0',
      'its_field_listing_sq_ft_finished' => '0',
      'label' => '5.0',
      'path' => '0',
      'path_alias' => '0',
      'site' => '0',
      'sm_field_listing_agent' => '0',
      'sm_field_listing_status' => '0',
      'sm_field_listing_type' => '0',
      'sm_field_listing_zoning' => '0',
      'sm_vid_Listing_Additional_Building' => '0',
      'sm_vid_Listing_Basement' => '0',
      'sm_vid_Listing_Development' => '0',
      'sm_vid_Listing_Electric_Company' => '0',
      'sm_vid_Listing_Floors' => '0',
      'sm_vid_Listing_Furniture' => '0',
      'sm_vid_Listing_Garage' => '0',
      'sm_vid_Listing_Heat' => '0',
      'sm_vid_Listing_Insulation' => '0',
      'sm_vid_Listing_Road_Surface' => '0',
      'sm_vid_Listing_School_District' => '0',
      'sm_vid_Listing_Sewage' => '0',
      'sm_vid_Listing_Township' => '0',
      'sm_vid_Listing_Walls' => '0',
      'sm_vid_Listing_Water' => '0',
      'sm_vid_Listing_Windows' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'tid' => '0',
      'timestamp' => '0',
      'tm_vid_10_names' => '0',
      'tm_vid_11_names' => '0',
      'tm_vid_12_names' => '2.0',
      'tm_vid_13_names' => '0',
      'tm_vid_14_names' => '8.0',
      'tm_vid_15_names' => '0',
      'tm_vid_16_names' => '0',
      'tm_vid_17_names' => '0',
      'tm_vid_2_names' => '0',
      'tm_vid_3_names' => '0',
      'tm_vid_4_names' => '0',
      'tm_vid_5_names' => '0',
      'tm_vid_6_names' => '0',
      'tm_vid_7_names' => '0',
      'tm_vid_8_names' => '0',
      'tm_vid_9_names' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '0',
      'tos_name_formatted' => '0',
      'ts_comments' => '0',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'drealty_listing' => array(
      0 => 'mls_residential',
    ),
    'node' => array(
      0 => 'listing',
    ),
  );
  $export['local_solr'] = $environment;

  return $export;
}
