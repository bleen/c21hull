<?php

/**
 * Implements hook_preprocess_html().
 */
function escrow_preprocess_html(&$variables) {
  $environment = variable_get('hosting_environment', '');
  if (!empty($environment)) {
    $variables['classes_array'][] = 'environment-' . $environment;
  }
}

/**
 * Implements hook_preprocess_page().
 */
function escrow_preprocess_page(&$variables) {
  if (drupal_is_front_page()) {
    $content = &$variables['page']['content'];
    $content['#sorted'] = FALSE;
    $content['search-featured-wrap'] = array(
      '#weight' => -999,
      '#theme_wrappers' => array('container'),
      '#attributes' => array(
        'class' => array('search-featured-wrap'),
      ),
    );
    if (isset($content['views_-exp-c21_search_listings-page'])) {
      $content['search-featured-wrap']['views_-exp-c21_search_listings-page'] = $content['views_-exp-c21_search_listings-page'];
      unset($content['views_-exp-c21_search_listings-page']);
    }
    if (isset($content['views_c21_featured_listings-block'])) {
      $content['search-featured-wrap']['views_c21_featured_listings-block'] = $content['views_c21_featured_listings-block'];
      unset($content['views_c21_featured_listings-block']);
    }
  }
}

/**
 * Implements hook_preprocess_node().
 */
function escrow_preprocess_node(&$variables) {
  switch ($variables['type']) {
    case 'listing':
      $variables['classes_array'][] = 'listing';
      drupal_add_js(drupal_get_path('theme','escrow') . '/js/horizontal-scroller.js', array('scope' => 'footer', 'group' => JS_THEME));
      break;

    case 'agent':
      $variables['meet_our_agents'] = array(
        '#theme' => 'link',
        '#string' => t('Meet Our Agents'),
        '#path' => 'agents',
        '#options' => array(
          'attributes' => array(
            'class' => array('meet-our-agents'),
          ),
        ),
      );

      $options =  array(
        'attributes' => array(
          'class' => array('meet-our-agents'),
        ),
      );
      $variables['meet_our_agents'] = l(t('Meet Our Agents'), 'agents', $options);
      break;
  }
}

/**
 * Implements hook_preprocess_vies_view_field().
 */
function escrow_preprocess_views_view_field(&$variables) {
  $view = $variables['view'];
  $row = $variables['row'];
  $view_mode = 'teaser';

  if (strpos($view->base_table, 'apachesolr') === 0 && !empty($row->entity_id) && !empty($row->entity_type) && !empty($row->bundle)) {
    try {
      $entities = entity_load($row->entity_type, array($row->entity_id));
      if (empty($entities)) {
        throw new Exception("Search index has returned an invalid entity id. Try rebuilding the index.");
      }
      else {
        $entity = entity_view($row->entity_type, $entities, $view_mode);
      }

      $variables['output'] = drupal_render($entity);
    }
    catch (exception $e) {
      watchdog('search', $e->getMessage(), array(), WATCHDOG_ERROR);
      $variables['output'] = '';
    }
  }

}
