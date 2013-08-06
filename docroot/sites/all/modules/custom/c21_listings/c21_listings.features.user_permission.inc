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

  // Exported permission: 'create agent content'.
  $permissions['create agent content'] = array(
    'name' => 'create agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create listing content'.
  $permissions['create listing content'] = array(
    'name' => 'create listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create listing_type content'.
  $permissions['create listing_type content'] = array(
    'name' => 'create listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any agent content'.
  $permissions['delete any agent content'] = array(
    'name' => 'delete any agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any listing content'.
  $permissions['delete any listing content'] = array(
    'name' => 'delete any listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any listing_type content'.
  $permissions['delete any listing_type content'] = array(
    'name' => 'delete any listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own agent content'.
  $permissions['delete own agent content'] = array(
    'name' => 'delete own agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own listing content'.
  $permissions['delete own listing content'] = array(
    'name' => 'delete own listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own listing_type content'.
  $permissions['delete own listing_type content'] = array(
    'name' => 'delete own listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in listing_additional_building'.
  $permissions['delete terms in listing_additional_building'] = array(
    'name' => 'delete terms in listing_additional_building',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_basement'.
  $permissions['delete terms in listing_basement'] = array(
    'name' => 'delete terms in listing_basement',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_development'.
  $permissions['delete terms in listing_development'] = array(
    'name' => 'delete terms in listing_development',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_floors'.
  $permissions['delete terms in listing_floors'] = array(
    'name' => 'delete terms in listing_floors',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_garage'.
  $permissions['delete terms in listing_garage'] = array(
    'name' => 'delete terms in listing_garage',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_heat'.
  $permissions['delete terms in listing_heat'] = array(
    'name' => 'delete terms in listing_heat',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_insulation'.
  $permissions['delete terms in listing_insulation'] = array(
    'name' => 'delete terms in listing_insulation',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_school_district'.
  $permissions['delete terms in listing_school_district'] = array(
    'name' => 'delete terms in listing_school_district',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_sewage'.
  $permissions['delete terms in listing_sewage'] = array(
    'name' => 'delete terms in listing_sewage',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_township'.
  $permissions['delete terms in listing_township'] = array(
    'name' => 'delete terms in listing_township',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_walls'.
  $permissions['delete terms in listing_walls'] = array(
    'name' => 'delete terms in listing_walls',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_water'.
  $permissions['delete terms in listing_water'] = array(
    'name' => 'delete terms in listing_water',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in listing_windows'.
  $permissions['delete terms in listing_windows'] = array(
    'name' => 'delete terms in listing_windows',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any agent content'.
  $permissions['edit any agent content'] = array(
    'name' => 'edit any agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any listing content'.
  $permissions['edit any listing content'] = array(
    'name' => 'edit any listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any listing_type content'.
  $permissions['edit any listing_type content'] = array(
    'name' => 'edit any listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own agent content'.
  $permissions['edit own agent content'] = array(
    'name' => 'edit own agent content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own listing content'.
  $permissions['edit own listing content'] = array(
    'name' => 'edit own listing content',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own listing_type content'.
  $permissions['edit own listing_type content'] = array(
    'name' => 'edit own listing_type content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in listing_additional_building'.
  $permissions['edit terms in listing_additional_building'] = array(
    'name' => 'edit terms in listing_additional_building',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_basement'.
  $permissions['edit terms in listing_basement'] = array(
    'name' => 'edit terms in listing_basement',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_development'.
  $permissions['edit terms in listing_development'] = array(
    'name' => 'edit terms in listing_development',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_floors'.
  $permissions['edit terms in listing_floors'] = array(
    'name' => 'edit terms in listing_floors',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_garage'.
  $permissions['edit terms in listing_garage'] = array(
    'name' => 'edit terms in listing_garage',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_heat'.
  $permissions['edit terms in listing_heat'] = array(
    'name' => 'edit terms in listing_heat',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_insulation'.
  $permissions['edit terms in listing_insulation'] = array(
    'name' => 'edit terms in listing_insulation',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_school_district'.
  $permissions['edit terms in listing_school_district'] = array(
    'name' => 'edit terms in listing_school_district',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_sewage'.
  $permissions['edit terms in listing_sewage'] = array(
    'name' => 'edit terms in listing_sewage',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_township'.
  $permissions['edit terms in listing_township'] = array(
    'name' => 'edit terms in listing_township',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_walls'.
  $permissions['edit terms in listing_walls'] = array(
    'name' => 'edit terms in listing_walls',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_water'.
  $permissions['edit terms in listing_water'] = array(
    'name' => 'edit terms in listing_water',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in listing_windows'.
  $permissions['edit terms in listing_windows'] = array(
    'name' => 'edit terms in listing_windows',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'enter agent revision log entry'.
  $permissions['enter agent revision log entry'] = array(
    'name' => 'enter agent revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter listing revision log entry'.
  $permissions['enter listing revision log entry'] = array(
    'name' => 'enter listing revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'enter listing_type revision log entry'.
  $permissions['enter listing_type revision log entry'] = array(
    'name' => 'enter listing_type revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent authored by option'.
  $permissions['override agent authored by option'] = array(
    'name' => 'override agent authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent authored on option'.
  $permissions['override agent authored on option'] = array(
    'name' => 'override agent authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent promote to front page option'.
  $permissions['override agent promote to front page option'] = array(
    'name' => 'override agent promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent published option'.
  $permissions['override agent published option'] = array(
    'name' => 'override agent published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent revision option'.
  $permissions['override agent revision option'] = array(
    'name' => 'override agent revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override agent sticky option'.
  $permissions['override agent sticky option'] = array(
    'name' => 'override agent sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing authored by option'.
  $permissions['override listing authored by option'] = array(
    'name' => 'override listing authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing authored on option'.
  $permissions['override listing authored on option'] = array(
    'name' => 'override listing authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing promote to front page option'.
  $permissions['override listing promote to front page option'] = array(
    'name' => 'override listing promote to front page option',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing published option'.
  $permissions['override listing published option'] = array(
    'name' => 'override listing published option',
    'roles' => array(
      'administrator' => 'administrator',
      'staff' => 'staff',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing revision option'.
  $permissions['override listing revision option'] = array(
    'name' => 'override listing revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing sticky option'.
  $permissions['override listing sticky option'] = array(
    'name' => 'override listing sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type authored by option'.
  $permissions['override listing_type authored by option'] = array(
    'name' => 'override listing_type authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type authored on option'.
  $permissions['override listing_type authored on option'] = array(
    'name' => 'override listing_type authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type promote to front page option'.
  $permissions['override listing_type promote to front page option'] = array(
    'name' => 'override listing_type promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type published option'.
  $permissions['override listing_type published option'] = array(
    'name' => 'override listing_type published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type revision option'.
  $permissions['override listing_type revision option'] = array(
    'name' => 'override listing_type revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override listing_type sticky option'.
  $permissions['override listing_type sticky option'] = array(
    'name' => 'override listing_type sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override page authored by option'.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
