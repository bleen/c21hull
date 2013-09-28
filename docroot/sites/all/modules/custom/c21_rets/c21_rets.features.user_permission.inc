<?php
/**
 * @file
 * c21_rets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function c21_rets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access drealty admin'.
  $permissions['access drealty admin'] = array(
    'name' => 'access drealty admin',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'administer drealty connections'.
  $permissions['administer drealty connections'] = array(
    'name' => 'administer drealty connections',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'administer drealty_listing types'.
  $permissions['administer drealty_listing types'] = array(
    'name' => 'administer drealty_listing types',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'administer drealty_listings'.
  $permissions['administer drealty_listings'] = array(
    'name' => 'administer drealty_listings',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'bypass drealty access'.
  $permissions['bypass drealty access'] = array(
    'name' => 'bypass drealty access',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'create drealty listing'.
  $permissions['create drealty listing'] = array(
    'name' => 'create drealty listing',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'delete any drealty listing'.
  $permissions['delete any drealty listing'] = array(
    'name' => 'delete any drealty listing',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'staff' => 'staff',
    ),
    'module' => 'drealty',
  );

  // Exported permission: 'delete own drealty listing'.
  $permissions['delete own drealty listing'] = array(
    'name' => 'delete own drealty listing',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'edit any drealty listing'.
  $permissions['edit any drealty listing'] = array(
    'name' => 'edit any drealty listing',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'edit own drealty listing'.
  $permissions['edit own drealty listing'] = array(
    'name' => 'edit own drealty listing',
    'roles' => array(),
    'module' => 'drealty',
  );

  // Exported permission: 'show format selection for drealty_listing'.
  $permissions['show format selection for drealty_listing'] = array(
    'name' => 'show format selection for drealty_listing',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'view drealty listing'.
  $permissions['view drealty listing'] = array(
    'name' => 'view drealty listing',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'drealty',
  );

  return $permissions;
}
