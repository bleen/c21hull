<?php
/**
 * @file
 * c21.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function c21_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'drealty_listing' => 'drealty_listing',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
