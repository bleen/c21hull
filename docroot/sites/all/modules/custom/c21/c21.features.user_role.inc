<?php
/**
 * @file
 * c21.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function c21_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: agent.
  $roles['agent'] = array(
    'name' => 'agent',
    'weight' => 5,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  // Exported role: staff.
  $roles['staff'] = array(
    'name' => 'staff',
    'weight' => 4,
  );

  return $roles;
}
