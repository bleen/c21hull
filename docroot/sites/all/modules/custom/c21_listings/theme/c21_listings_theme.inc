<?php
/**
 * @file
 * Theme functions for listings.
 */

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
