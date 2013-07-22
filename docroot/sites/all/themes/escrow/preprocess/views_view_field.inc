<?php

if ($variables['view']->name == "c21_search_listings" && $variables['field']->field == "entity_id") {
  // For the saerch listing view, convert the entity_id field into a
  // fully rendered entity.
  switch($variables['row']->entity_type){
    case 'node':
      try {
        $node = node_load($variables['row']->entity_id);
        if (empty($node)) {
          throw new Exception("Search index has returned an invalid entity id. Try rebuilding the index.");
        }

        $node_build = node_view($node, 'teaser');
        $variables['output'] = drupal_render($node_build);
      }
      catch (exception $e) {
        watchdog('search', $e->getMessage(), array(), WATCHDOG_ERROR);
      }
      break;

    case 'drealty_listing':
      $listing = drealty_listing_load($variables['row']->entity_id);
      $listing_build = drealty_listing_view($listing, 'search');
      $variables['output'] = drupal_render($listing_build);
      break;
  }
}
