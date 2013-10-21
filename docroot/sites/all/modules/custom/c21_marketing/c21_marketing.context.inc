<?php
/**
 * @file
 * c21_marketing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function c21_marketing_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing-pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'formblock-contact_site' => array(
          'module' => 'formblock',
          'delta' => 'contact_site',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-c21_agents-owners' => array(
          'module' => 'views',
          'delta' => 'c21_agents-owners',
          'region' => 'main_suffix',
          'weight' => '-10',
        ),
        'views-c21_agents-agents' => array(
          'module' => 'views',
          'delta' => 'c21_agents-agents',
          'region' => 'main_suffix',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['landing-pages'] = $context;

  return $export;
}
