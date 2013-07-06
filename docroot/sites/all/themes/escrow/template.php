<?php

/**
 * Implements hook_preprocess().
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The theme hook being preprocessed.
 */
function escrow_preprocess($variables, $hook) {
  $files = &drupal_static(__FUNCTION__, array());

  if (!isset($files[$hook])) {
    $file = drupal_get_path('theme', 'escrow') . '/preprocess/' . $hook . '.inc';
    $files[$hook] = file_exists($file) ? $file : '';
  }

  if (!empty($files[$hook])) {
    include $files[$hook];
  }
}

/**
 * Implements hook_process().
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The theme hook being processed.
 */
function escrow_process($variables, $hook) {
  $files = &drupal_static(__FUNCTION__, array());

  if (!isset($files[$hook])) {
    $file = drupal_get_path('theme', 'escrow') . '/process/' . $hook . '.inc';
    $files[$hook] = file_exists($file) ? $file : '';
  }

  if (!empty($files[$hook])) {
    include $files[$hook];
  }
}

/**
 * Implements hook_preprocess_views_view_field().
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function escrow_preprocess_views_view_field(&$variables) {
  include drupal_get_path('theme', 'escrow') . '/preprocess/views_view_field.inc';
}
