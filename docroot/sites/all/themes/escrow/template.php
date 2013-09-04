<?php

/**
 * Implements template_preprocess_html().
 */
function escrow_preprocess_html(&$variables) {
  $environment = variable_get('hosting_environment', '');
  if (!empty($environment)) {
    $variables['classes_array'][] = 'environment-' . $environment;
  }
}

/**
 * Implements template_preprocess_page().
 */
function escrow_preprocess_page(&$variables) {
  // Add breakpoints.js.
  drupal_add_js(drupal_get_path('theme','escrow') . '/js/breakpoints.js', array('scope' => 'footer', 'group' => JS_THEME));
  drupal_add_js(drupal_get_path('theme','escrow') . '/js/escrow.js', array('scope' => 'footer', 'group' => JS_THEME));

  if (drupal_is_front_page()) {
    // Add a wrapper around search and featured blocks.
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
 * Implements template_preprocess_node().
 */
function escrow_preprocess_node(&$variables) {
  switch ($variables['type']) {
    case 'listing':
      // Add JS and CSS if needed.
      $variables['classes_array'][] = 'listing';
      drupal_add_js(drupal_get_path('theme','escrow') . '/js/horizontal-scroller.js', array('scope' => 'footer', 'group' => JS_THEME));
      if ($variables['view_mode'] == 'print' || $variables['view_mode'] == 'print_internal') {
        drupal_add_css(path_to_theme() . '/stylesheets/printer-friendly.css');
      }

      // Handle preprocess fields.
      $grid = _escrow_measurements_grid($variables['node']);
      $variables['listing_measurements_grid'] = drupal_render($grid);

      $office_info = _escrow_office_info($variables['node']);
      $variables['listing_office_info'] = drupal_render($office_info);

      $fine_print = _escrow_fine_print($variables['node']);
      $variables['listing_fine_print'] = drupal_render($fine_print);

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
 * Implements template_preprocess_entity().
 */
function escrow_preprocess_entity(&$variables) {
  switch ($variables['entity_type']) {
    case 'drealty_listing':
      $variables['classes_array'][] = 'listing';
      drupal_add_js(drupal_get_path('theme','escrow') . '/js/horizontal-scroller.js', array('scope' => 'footer', 'group' => JS_THEME));
      break;
  }
}

/**
 * Implements template_preprocess_vies_view_field().
 */
function escrow_preprocess_views_view_field(&$variables) {
  $view = $variables['view'];
  $row = $variables['row'];
  $field = $variables['field'];
  $view_mode = 'teaser';

  if (strpos($view->base_table, 'apachesolr') === 0 && $field->field_alias == 'entity_id' && !empty($row->entity_id) && !empty($row->entity_type)) {
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

/**
 * Returns a render array of the measurements grid for a given listing.
 *
 * @param object $node
 *   A node object.
 *
 * @return array
 */
function _escrow_measurements_grid($node) {
  $grid = array();

  if ($node->type == 'listing') {
    $floors = c21_listings_get_floors();
    $rooms = c21_listings_get_rooms();

    $header = array_merge(array(''), array_values($floors));
    $rows = array();
    foreach ($rooms as $room_id => $room_label) {
      $row = array(
        'data' => array(array('data' => $room_label, 'header' => TRUE)),
        'no_striping' => TRUE,
      );
      foreach ($floors as $floor_id => $floor_label) {
        $field = $node->{'field_listing_' . $room_id . '_' . $floor_id};
        $measurement = !empty($field) ? $field[LANGUAGE_NONE][0]['safe_value'] : '';
        $row['data'][] = $measurement;
      }
      $rows[] = $row;
    }

    $grid = array(
      'title' => array(
        '#markup' => '<h3>' . t('Measurements') . '</h3>',
      ),
      'grid' => array(
        '#theme' => 'table',
        '#header' => $header,
        '#rows' => $rows,
        '#attributes' => array('class' => array('measurements-grid')),
      ),
    );
  }

  return $grid;
}

/**
 * Returns a render array for office locations.
 *
 * @return array
 */
function _escrow_office_info() {
  $offices = array(
    'dingmans' => array(
      '#theme' => 'c21_office_address',
      '#office_name' => 'dingmans',
      '#office_info' => c21_get_office_info('dingmans'),
    ),
    'milford' => array(
      '#theme' => 'c21_office_address',
      '#office_name' => 'milford',
      '#office_info' => c21_get_office_info('milford'),
    ),
    '#theme_wrappers' => array('container'),
    '#attributes' => array(
      'class' => 'offices',
    ),
  );

  return $offices;
}

/**
 * Render the "listing type" node to use as the listing's fine print.
 *
 * @param object $node
 *
 * @return array
 */
function _escrow_fine_print($node) {
  $fine_print = array();

  if (!empty($node->field_listing_type)) {
    $listing_type = node_load($node->field_listing_type[LANGUAGE_NONE][0]);
    $fine_print_title = field_get_items('node', $listing_type, 'field_listing_type_title');
    $fine_print_body = field_get_items('node', $listing_type, 'field_listing_type_fine_print');

    $fine_print['#theme_wrappers'] = array('container');
    $fine_print['#attributes'] = array('class' => array('fine-print'));
    $fine_print['title'] = array(
      '#markup' => '<h1 class="title">' . $fine_print_title[0]['safe_value'] . '</h1>',
    );
    $fine_print['body'] = array(
      '#markup' => $fine_print_body[0]['value'],
    );

    $fine_print['agent'] = array(
      '#markup' => '<p>Century 21 Roy B. Hull</p><span>&nbsp</span><p>Agent</p>',
      '#theme_wrappers' => array('container'),
      '#attributes' => array('class' => array('signature agent')),
    );
    $fine_print['seller'] = array(
      '#markup' => '<span class="date">Date: </span><span>&nbsp</span><span>&nbsp</span>',
      '#theme_wrappers' => array('container'),
      '#attributes' => array('class' => array('signature seller')),
    );
  }

  return $fine_print;
}
