<?php
/**
 * @file
 * Theme functions for the listings form.
 */

function theme_c21_listings_room_measurements_form($variables) {
  $form = $variables['form'];
  // dpm($form, 'form');

  $floors = array(
    'fl1' => t('Floor 1'),
    'fl2' => t('Floor 2'),
    'b' => t('Basement'),
  );

  $header = array_merge(array(''), $floors);
  $rows = array();
  foreach (element_children($form) as $child) {
    $element = $form[$child];

    list($room, $floor) = explode(' | ', $element[LANGUAGE_NONE][0]['value']['#title']);
    if (!isset($rows[$room])) {
      $rows[$room] = array($room);
    }

    unset($element[LANGUAGE_NONE][0]['value']['#title']);
    $rows[$room][] = drupal_render($element);
  }

  return theme('table', array('header' => $header, 'rows' => $rows));
}
