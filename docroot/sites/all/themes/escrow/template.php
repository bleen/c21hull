<?php

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
function escrow_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  // escrow_preprocess_html($variables, $hook);
  // escrow_preprocess_page($variables, $hook);

  // This preprocessor will also be used if the db is inactive. To ensure your
  // theme is used, add the following line to your settings.php file:
  // $conf['maintenance_theme'] = 'escrow';
  // Also, check $variables['db_is_active'] before doing any db queries.
}

/**
 * Implements hook_modernizr_load_alter().
 *
 * @return
 *   An array to be output as yepnope testObjects.
 */
function escrow_modernizr_load_alter(&$load) {

  // // We will check for touch events, and if we do load the hammer.js script.
  // $load[] = array(
  //   // 'test' => 'Modernizr.touch',
  //   'test' => 'Modernizr.localstorage',
  //   'yep'  => array('/'. drupal_get_path('theme','escrow') . '/js/jquery.hammer.min.js'),
  // );


  return $load;
}

/**
 * Implements hook_preprocess_html()
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function escrow_preprocess_html(&$variables) {

}

/**
 * Implements hook_preprocess_views_view_field().
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
function escrow_preprocess_views_view_field(&$variables) {
  if ($variables['view']->name == "c21_search_listings" && $variables['field']->field == "entity_id") {

    // For the saerch listing view, convert the entity_id field into a
    // fully rendered entity.
    switch($variables['row']->entity_type){
      case 'node':
        $node = node_load($variables['row']->entity_id);
        $node_build = node_view($node, 'search_result');
        $variables['output'] = drupal_render($node_build);
        break;

      case 'drealty_listing':
        $listing = drealty_listing_load($variables['row']->entity_id);
        $listing_build = drealty_listing_view($listing, 'search');
        $variables['output'] = drupal_render($listing_build);
        break;
    }
  }
}



/**
 * Override or insert variables into the page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_page(&$variables) {

}

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_region(&$variables, $hook) {

}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_block(&$variables, $hook) {

}
// */

/**
 * Override or insert variables into the entity template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("entity" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_entity(&$variables, $hook) {

}
// */

/**
 * Override or insert variables into the node template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_node(&$variables, $hook) {
  $node = $variables['node'];
}
// */

/**
 * Override or insert variables into the field template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("field" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_field(&$variables, $hook) {

}
// */

/**
 * Override or insert variables into the comment template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_comment(&$variables, $hook) {
  $comment = $variables['comment'];
}
// */

/**
 * Override or insert variables into the views template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 */
/* -- Delete this line if you want to use this function
function escrow_preprocess_views_view(&$variables) {
  $view = $variables['view'];
}
// */


/**
 * Override or insert css on the site.
 *
 * @param $css
 *   An array of all CSS items being requested on the page.
 */
/* -- Delete this line if you want to use this function
function escrow_css_alter(&$css) {

}
// */

/**
 * Override or insert javascript on the site.
 *
 * @param $js
 *   An array of all JavaScript being presented on the page.
 */
/* -- Delete this line if you want to use this function
function escrow_js_alter(&$js) {

}
// */
