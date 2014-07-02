<?php
/**
 * @file
 * c21.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function c21_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_meet-our-agents:agents
  $menu_links['main-menu_meet-our-agents:agents'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'agents',
    'router_path' => 'agents',
    'link_title' => 'Meet Our Agents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_meet-our-agents:agents',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('Meet Our Agents');


  return $menu_links;
}
