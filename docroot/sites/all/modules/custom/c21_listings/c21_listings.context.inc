<?php
/**
 * @file
 * c21_listings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function c21_listings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'agent-page';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'agents' => 'agents',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-c21_agents-owners' => array(
          'module' => 'views',
          'delta' => 'c21_agents-owners',
          'region' => 'main_prefix',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['agent-page'] = $context;

  return $export;
}
