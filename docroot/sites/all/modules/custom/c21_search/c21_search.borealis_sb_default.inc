<?php
/**
 * @file
 * c21_search.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function c21_search_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'views_-exp-c21_search_listings-page';
  $semantic_wrapper->module = 'views';
  $semantic_wrapper->delta = '-exp-c21_search_listings-page';
  $semantic_wrapper->semantics = 'div';
  $export['views_-exp-c21_search_listings-page'] = $semantic_wrapper;

  return $export;
}
