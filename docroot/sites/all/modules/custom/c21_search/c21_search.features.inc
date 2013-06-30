<?php
/**
 * @file
 * c21_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_search_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_search_views_api() {
  return array("api" => "3.0");
}
