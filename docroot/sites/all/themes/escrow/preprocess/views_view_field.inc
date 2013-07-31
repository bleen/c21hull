<?php

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
