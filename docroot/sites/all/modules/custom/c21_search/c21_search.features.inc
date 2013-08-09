<?php
/**
 * @file
 * c21_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "borealis_sb" && $api == "borealis_sb_default") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
