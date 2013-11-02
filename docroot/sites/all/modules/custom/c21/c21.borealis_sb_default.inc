<?php
/**
 * @file
 * c21.borealis_sb_default.inc
 */

/**
 * Implements hook_default_semantic_wrapper().
 */
function c21_default_semantic_wrapper() {
  $export = array();

  $semantic_wrapper = new stdClass();
  $semantic_wrapper->disabled = FALSE; /* Edit this to true to make a default semantic_wrapper disabled initially */
  $semantic_wrapper->api_version = 1;
  $semantic_wrapper->uid = 'formblock_contact_site';
  $semantic_wrapper->module = 'formblock';
  $semantic_wrapper->delta = 'contact_site';
  $semantic_wrapper->semantics = 'div';
  $export['formblock_contact_site'] = $semantic_wrapper;

  return $export;
}
