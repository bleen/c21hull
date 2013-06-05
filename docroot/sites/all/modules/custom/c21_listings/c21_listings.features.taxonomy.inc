<?php
/**
 * @file
 * c21_listings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function c21_listings_taxonomy_default_vocabularies() {
  return array(
    'listing_additional_building' => array(
      'name' => 'Listing Additional Building',
      'machine_name' => 'listing_additional_building',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'listing_basement' => array(
      'name' => 'Listing Basement',
      'machine_name' => 'listing_basement',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
    'listing_electric_company' => array(
      'name' => 'Listing Electric Company',
      'machine_name' => 'listing_electric_company',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 3,
    ),
    'listing_floors' => array(
      'name' => 'Listing Floors',
      'machine_name' => 'listing_floors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
    ),
    'listing_furniture' => array(
      'name' => 'Listing Furniture',
      'machine_name' => 'listing_furniture',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
    ),
    'listing_garage' => array(
      'name' => 'Listing Garage',
      'machine_name' => 'listing_garage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
    ),
    'listing_heat' => array(
      'name' => 'Listing Heat',
      'machine_name' => 'listing_heat',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
    'listing_insulation' => array(
      'name' => 'Listing Insulation',
      'machine_name' => 'listing_insulation',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
    'listing_road_surface' => array(
      'name' => 'Listing Road Surface',
      'machine_name' => 'listing_road_surface',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
    'listing_school_district' => array(
      'name' => 'Listing School District',
      'machine_name' => 'listing_school_district',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
    'listing_sewage' => array(
      'name' => 'Listing Sewage',
      'machine_name' => 'listing_sewage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
    'listing_walls' => array(
      'name' => 'Listing Walls',
      'machine_name' => 'listing_walls',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
    ),
    'listing_water' => array(
      'name' => 'Listing Water',
      'machine_name' => 'listing_water',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'listing_windows' => array(
      'name' => 'Listing Windows',
      'machine_name' => 'listing_windows',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 4,
    ),
  );
}
