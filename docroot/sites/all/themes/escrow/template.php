
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

  if (isset($variables['main_menu'])) {
    $variables['primary_nav'] = theme('links__system_main_menu', array(
      'links' => $variables['main_menu'],
      'attributes' => array(
        'class' => array('links', 'inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      )
    ));
  }
  else {
    $variables['primary_nav'] = FALSE;
  }
}

/**
 * Implements template_preprocess_links().
 */
function escrow_preprocess_links(&$variables) {
  if (isset($variables['links']['print_html'])) {
    $variables['links']['print_html']['title'] = t('Print');
  }
  if (isset($variables['links']['print_pdf'])) {
    $variables['links']['print_pdf']['title'] = t('PDF');
  }
}

/**
 * Implements template_preprocess_node().
 */
function escrow_preprocess_node(&$variables) {
  switch ($variables['type']) {
    case 'listing':
      $listing_status = $variables['field_listing_status'][LANGUAGE_NONE][0]['value'];
      $listing_building_type = $variables['field_listing_building_type'][LANGUAGE_NONE][0]['value'];
      $view_mode = $variables['view_mode'];

      // Add JS and CSS if needed.
      $variables['classes_array'][] = 'listing';
      $variables['classes_array'][] = drupal_html_class('building type ' . $listing_building_type);
      $variables['classes_array'][] = drupal_html_class('status ' . $listing_status);
      drupal_add_js(drupal_get_path('theme','escrow') . '/js/horizontal-scroller.js', array('scope' => 'footer', 'group' => JS_THEME));
      if ($view_mode == 'print' || $view_mode == 'print_internal') {
        drupal_add_css(path_to_theme() . '/stylesheets/printer-friendly.css');
      }

      // Handle taxes field.
      if (isset($variables['content']['field_listing_taxes'][0]['#markup']) && !empty($variables['field_listing_taxes_tbd'][LANGUAGE_NONE][0]['value'])) {
        $variables['content']['field_listing_taxes'][0]['#markup'] = 'TBD';
      }

      // Handle year built field.
      if (isset($variables['content']['field_listing_year_built'][0]['#markup']) && !empty($variables['field_listing_to_be_built'][LANGUAGE_NONE][0]['value'])) {
        $variables['content']['field_listing_year_built'][0]['#markup'] = 'To be Built';
      }

      // Handle "sale pending" flag.
      if ($listing_status == 'pending') {
        $sale_pending_flag = array(
          '#markup' => '<span class="sale-pending-flag"><span class="sale-pending-text">' . t('Sale Pending') . '</span></span>',
        );
        switch ($view_mode) {
          case 'full':
          case 'teaser':
          case 'micro-teaser':
            $featured_photo = $variables['content']['field_listing_featured_photo'];
            $variables['content']['field_listing_featured_photo'] = array(
              $sale_pending_flag,
              $featured_photo,
              '#weight' => $featured_photo['#weight'],
              '#theme_wrappers' => array('container'),
              '#attributes' => array('class' => 'photo-wrap'),
            );
            break;
        }
      }

      // Handle preprocess fields.
      $office_info = _escrow_office_info($variables['node']);
      $variables['listing_office_info'] = drupal_render($office_info);

      $slogan = variable_get('site_slogan', '');
      $variables['slogan'] = !empty($slogan) ? '<aside class="slogan">' . $slogan . '</aside>' : '';

      $fine_print = _escrow_fine_print($variables['node']);
      $variables['listing_fine_print'] = drupal_render($fine_print);

      $sq_ft_total = _escrow_sq_ft_total($variables['node']);
      $variables['listing_sq_ft_total'] = drupal_render($sq_ft_total);

      $map = drupal_is_front_page() ? array() :  _escrow_map($variables['node'], 'node');
      $variables['listing_map'] = drupal_render($map);

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

      module_load_include('inc', 'contact', 'contact.pages');
      $contact_form = drupal_get_form('contact_site_form');
      $contact_form['#title_display'] = 'invisible';
      unset($contact_form['blurb']);
      $variables['contact_form'] = drupal_render($contact_form);

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

      // Add a map field.
      $map = _escrow_map($variables['drealty_listing'], 'drealty_listing');
      $variables['listing_map'] = drupal_render($map);

      // Add a title field.
      $variables['rets_listing_title'] = _c21_build_listing_title($variables['drealty_listing']);

      // Add a "read more" link
      $variables['read_more'] = _escrow_mls_read_more($variables['drealty_listing']);

      // Add a random agent.
      $variables['random_agent'] = _escrow_random_agent(TRUE);
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

function escrow_preprocess_footer_menu(&$variables) {
  $block = module_invoke('menu', 'block_view', $variables['class']);
  $variables['menu_title'] = isset($block['subject']) ? $block['subject'] : '';
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

  $wrapper = entity_metadata_wrapper('node', $node);
  $type = $wrapper->field_listing_type->value();
  if (!empty($type)) {
    $listing_type = node_load($type->nid);
    $fine_print_title = field_get_items('node', $listing_type, 'field_listing_type_title');
    $fine_print_body = field_get_items('node', $listing_type, 'field_listing_type_fine_print');

    $fine_print['#theme_wrappers'] = array('container');
    $fine_print['#attributes'] = array('class' => array('fine-print'));
    $fine_print['title'] = array(
      '#markup' => '<h1 class="title">' . $fine_print_title[0]['safe_value'] . '</h1>',
    );
    $fine_print['body'] = array(
      '#markup' => token_replace($fine_print_body[0]['value'], array('node' => $node), array('callback' => '_escrow_token_callback')),
    );

    $agent = isset($node->field_listing_agent[LANGUAGE_NONE][0]['entity']->title) ? $node->field_listing_agent[LANGUAGE_NONE][0]['entity']->title : t('Agent');
    $fine_print['agent'] = array(
      '#markup' => '<p>Century 21 Roy B. Hull</p><span>&nbsp</span><p>' . $agent . '</p>',
      '#theme_wrappers' => array('container'),
      '#attributes' => array('class' => array('signature agent')),
    );
    $fine_print['seller'] = array(
      '#markup' => '<span class="date">Date: </span><span>&nbsp</span><span>&nbsp</span>',
      '#theme_wrappers' => array('container'),
      '#attributes' => array('class' => array('signature seller')),
    );
    $fine_print['listing_id'] = array(
      '#markup' => '<aside class="listing_id">' . $wrapper->field_listing_id_prefix->value() . '-' . $node->nid . '</aside>',
    );
  }

  return $fine_print;
}

/**
 * Callback function for token_replace().
 *
 * @see token_replace().
 */
function _escrow_token_callback(&$replacements, $data, $options) {
  foreach ($replacements as $token => $replacement) {
    if ($token == '[c21_listing:sellers]') {
      $replacements[$token] = strtoupper($replacement);
    }
  }
}

/**
 * Render the total square footage of the given listing.
 *
 * @param object $node
 *
 * @return array
 */
function _escrow_sq_ft_total($node) {
  $above = isset($node->field_listing_sq_ft_above[LANGUAGE_NONE][0]['value']) ? $node->field_listing_sq_ft_above[LANGUAGE_NONE][0]['value'] : 0;
  $below = isset($node->field_listing_sq_ft_below[LANGUAGE_NONE][0]['value']) ? $node->field_listing_sq_ft_below[LANGUAGE_NONE][0]['value'] : 0;

  $above = is_numeric($above) ? $above : 0;
  $below = is_numeric($below) ? $below : 0;

  $sq_ft_total = array(
    '#markup' => '<div class="field field-name-field-listing-sq-ft-total field-type-number-integer field-label-inline clearfix"><div class="field-label">Sq. Ft. Total:&nbsp;</div><div class="field-items"><div class="field-item even">' . number_format($above + $below) . '</div></div></div>',
  );

  return $sq_ft_total;
}

/**
 * Return a render array containing a map of the given listing.
 *
 * @param object $entity
 *
 * @param string $entity_type
 *
 * @return array
 */
function _escrow_map($entity, $entity_type) {
  $map_link = _c21_listings_get_gmap_link($entity);

  list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);

  // Add a map.
  $map = array(
    '#theme_wrappers' => array('container'),
    '#attributes' => array(
      'class' => array('listing-map-wrapper'),
    ),
    'map' => array(
      '#theme_wrappers' => array('container'),
      '#attributes' => array(
        'id' => 'listing-map-' . $id,
        'class' => array('listing-map'),
        'data-listing-id' => $id,
        'data-listing-address' => !empty($map_link) ? $map_link['query']['q'] : '',
      ),
    ),
  );

  if (!empty($map_link)) {
    $map['#attached'] = array(
      'js' => array(
        '//maps.googleapis.com/maps/api/js?v=3.exp&sensor=false' => array('type' => 'external', 'scope' => 'footer', 'weight' => 1),
        drupal_get_path('module', 'c21_listings') . '/js/c21_listings_maps.js' => array('type' => 'file', 'scope' => 'footer', 'weight' => 6),
      ),
    );
  }
  else {
    $map['map']['#attributes']['class'] = array('no-map');
  }

  return $map;
}

/**
 * Create a read more link for MLS listings.
 *
 * @param object $entity
 *
 * @return string
 */
function _escrow_mls_read_more($entity) {
  $link = '<span class="more-info">' . l(t('More info'), 'drealty_listing/' . $entity->id) . '</span>';
  return $link;
}


/**
 * Choose a random agent and render it for display on a listing.
 *
 * @param bool $owner
 *  If TRUE, only choose from owners.
 *
 * @return string
 */
function _escrow_random_agent($owner = TRUE) {
  $agent = array();

  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', 'agent')
    ->propertyCondition('status', 1);
  if ($owner) {
    $query->fieldCondition('field_agent_status', 'value', 'owner');
  }
  $agents = $query->execute();

  if (!empty($agents['node'])) {
    $agent_nid = array_rand($agents['node']);
    $agent_node = node_load($agent_nid);
    $agent_rendered = node_view($agent_node, 'micro_teaser');
    $agent['#prefix'] = '<aside class="agents"><div class="agent">';
    $agent['agent'] = array('#markup' => drupal_render($agent_rendered));
    $agent['#suffix'] = '</div></aside>';
  }

  return drupal_render($agent);
}
