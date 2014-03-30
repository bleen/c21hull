<?php
/**
 * @file
 * Theme functions for listings.
 */

function theme_c21_listings_render_rooms_group($variables) {
  $form = $variables['form'];

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

function theme_c21_workbench_links($variables) {
  $links = $variables['links'];
  $attributes = $variables['attributes'];
  $output = '';

  if (count($links) > 0) {
    $output = '';
    $output .= '<ul' . drupal_attributes($attributes) . '>';

    foreach ($links as $key => $link) {
      $class = array($key);
      $output .= '<li' . drupal_attributes(array('class' => $class)) . '>';
      $output .= l($link['title'], $link['href'], $link);
      if (!empty($link['export_href'])) {
        $img = array(
          '#theme' => 'image',
          '#path' => $link['export_icon_src'],
          '#alt' => $link['export_file_type'],
        );
        $export_link = array('html' => TRUE) + $link;
        $output .= ' | ' . l(drupal_render($img), $link['export_href'], $export_link);
      }
      $output .= "</li>\n";
    }

    $output .= '</ul>';
  }

  return $output;
}
