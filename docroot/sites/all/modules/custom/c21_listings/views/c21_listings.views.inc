<?php

/**
 * @file
 * Views definitions for c21_listings module.
 */

/**
 * Implements hook_views_data().
 */
function c21_listings_views_data() {
  $data = array();
  $data['node']['seller'] = array(
    'title' => t('Comprehensive Seller'),
    'help' => t('The seller based on seller 1, seller 2 and/or company.'),
    'field' => array(
      'handler' => 'c21_listings_handler_seller',
    ),
    'filter' => array(
      'handler' => 'c21_listings_handler_filter_seller'
    ),
    'sort' => array(
      'handler' => 'views_handler_sort'
    ),
  );
  return $data;
}
