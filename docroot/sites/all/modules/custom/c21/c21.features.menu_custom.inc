<?php
/**
 * @file
 * c21.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function c21_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer-features.
  $menus['menu-footer-features'] = array(
    'menu_name' => 'menu-footer-features',
    'title' => 'Footer Features',
    'description' => '',
  );
  // Exported menu: menu-footer-places.
  $menus['menu-footer-places'] = array(
    'menu_name' => 'menu-footer-places',
    'title' => 'Footer Places',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer Features');
  t('Footer Places');


  return $menus;
}