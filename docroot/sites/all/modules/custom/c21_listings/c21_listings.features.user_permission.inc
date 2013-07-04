<?php
/**
 * @file
 * c21_listings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function c21_listings_user_default_permissions() {
  $permissions = array();

  // Exported permission: create agent content.
  $permissions['create agent content'] = array(
    'name' => 'create agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: create listing content.
  $permissions['create listing content'] = array(
    'name' => 'create listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: create listing_type content.
  $permissions['create listing_type content'] = array(
    'name' => 'create listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any agent content.
  $permissions['delete any agent content'] = array(
    'name' => 'delete any agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any listing content.
  $permissions['delete any listing content'] = array(
    'name' => 'delete any listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any listing_type content.
  $permissions['delete any listing_type content'] = array(
    'name' => 'delete any listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own agent content.
  $permissions['delete own agent content'] = array(
    'name' => 'delete own agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own listing content.
  $permissions['delete own listing content'] = array(
    'name' => 'delete own listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own listing_type content.
  $permissions['delete own listing_type content'] = array(
    'name' => 'delete own listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 10.
  $permissions['delete terms in 10'] = array(
    'name' => 'delete terms in 10',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 13.
  $permissions['delete terms in 13'] = array(
    'name' => 'delete terms in 13',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 14.
  $permissions['delete terms in 14'] = array(
    'name' => 'delete terms in 14',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 15.
  $permissions['delete terms in 15'] = array(
    'name' => 'delete terms in 15',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 16.
  $permissions['delete terms in 16'] = array(
    'name' => 'delete terms in 16',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 17.
  $permissions['delete terms in 17'] = array(
    'name' => 'delete terms in 17',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 6.
  $permissions['delete terms in 6'] = array(
    'name' => 'delete terms in 6',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 7.
  $permissions['delete terms in 7'] = array(
    'name' => 'delete terms in 7',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 8.
  $permissions['delete terms in 8'] = array(
    'name' => 'delete terms in 8',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 9.
  $permissions['delete terms in 9'] = array(
    'name' => 'delete terms in 9',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any agent content.
  $permissions['edit any agent content'] = array(
    'name' => 'edit any agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any listing content.
  $permissions['edit any listing content'] = array(
    'name' => 'edit any listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any listing_type content.
  $permissions['edit any listing_type content'] = array(
    'name' => 'edit any listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own agent content.
  $permissions['edit own agent content'] = array(
    'name' => 'edit own agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own listing content.
  $permissions['edit own listing content'] = array(
    'name' => 'edit own listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own listing_type content.
  $permissions['edit own listing_type content'] = array(
    'name' => 'edit own listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 10.
  $permissions['edit terms in 10'] = array(
    'name' => 'edit terms in 10',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 13.
  $permissions['edit terms in 13'] = array(
    'name' => 'edit terms in 13',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 14.
  $permissions['edit terms in 14'] = array(
    'name' => 'edit terms in 14',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 15.
  $permissions['edit terms in 15'] = array(
    'name' => 'edit terms in 15',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 16.
  $permissions['edit terms in 16'] = array(
    'name' => 'edit terms in 16',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 17.
  $permissions['edit terms in 17'] = array(
    'name' => 'edit terms in 17',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 6.
  $permissions['edit terms in 6'] = array(
    'name' => 'edit terms in 6',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 7.
  $permissions['edit terms in 7'] = array(
    'name' => 'edit terms in 7',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 8.
  $permissions['edit terms in 8'] = array(
    'name' => 'edit terms in 8',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 9.
  $permissions['edit terms in 9'] = array(
    'name' => 'edit terms in 9',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: enter agent revision log entry.
  $permissions['enter agent revision log entry'] = array(
    'name' => 'enter agent revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: enter listing revision log entry.
  $permissions['enter listing revision log entry'] = array(
    'name' => 'enter listing revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: enter listing_type revision log entry.
  $permissions['enter listing_type revision log entry'] = array(
    'name' => 'enter listing_type revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent authored by option.
  $permissions['override agent authored by option'] = array(
    'name' => 'override agent authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent authored on option.
  $permissions['override agent authored on option'] = array(
    'name' => 'override agent authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent promote to front page option.
  $permissions['override agent promote to front page option'] = array(
    'name' => 'override agent promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent published option.
  $permissions['override agent published option'] = array(
    'name' => 'override agent published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent revision option.
  $permissions['override agent revision option'] = array(
    'name' => 'override agent revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override agent sticky option.
  $permissions['override agent sticky option'] = array(
    'name' => 'override agent sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing authored by option.
  $permissions['override listing authored by option'] = array(
    'name' => 'override listing authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing authored on option.
  $permissions['override listing authored on option'] = array(
    'name' => 'override listing authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing promote to front page option.
  $permissions['override listing promote to front page option'] = array(
    'name' => 'override listing promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing published option.
  $permissions['override listing published option'] = array(
    'name' => 'override listing published option',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing revision option.
  $permissions['override listing revision option'] = array(
    'name' => 'override listing revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing sticky option.
  $permissions['override listing sticky option'] = array(
    'name' => 'override listing sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type authored by option.
  $permissions['override listing_type authored by option'] = array(
    'name' => 'override listing_type authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type authored on option.
  $permissions['override listing_type authored on option'] = array(
    'name' => 'override listing_type authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type promote to front page option.
  $permissions['override listing_type promote to front page option'] = array(
    'name' => 'override listing_type promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type published option.
  $permissions['override listing_type published option'] = array(
    'name' => 'override listing_type published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type revision option.
  $permissions['override listing_type revision option'] = array(
    'name' => 'override listing_type revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override listing_type sticky option.
  $permissions['override listing_type sticky option'] = array(
    'name' => 'override listing_type sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override page authored by option.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
