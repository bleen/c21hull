<?php

function theme_grid_field($variables) {
  $form = $variables['form'];

  $header = array_merge(array(''), $form['#grid_columns']);
  $rows = array();

  foreach ($form['#grid_rows'] as $grid_row) {
    $row = array($grid_row);
    foreach ($form['#grid_columns'] as $grid_column) {
      $key = drupal_html_class($grid_row) . '_' . drupal_html_class($grid_column);

      $form_item = &$form['grid_data'][$key];
      $form_item['#title_display'] = 'none';
      $row[] = drupal_render($form_item);
    }
    $rows[] = $row;
  }

  return theme('table', array('header' => $header, 'rows' => $rows));
}
