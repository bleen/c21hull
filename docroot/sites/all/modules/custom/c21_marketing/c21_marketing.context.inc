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
  $context->description = 'A context for landing pages used for marketing';
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
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-10',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'main_prefix',
          'weight' => '-10',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'main_prefix',
          'weight' => '-9',
        ),
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
        'footer_sitemap-footer_sitemap' => array(
          'module' => 'footer_sitemap',
          'delta' => 'footer_sitemap',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'c21-c21_footer' => array(
          'module' => 'c21',
          'delta' => 'c21_footer',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for landing pages used for marketing');
  $export['landing-pages'] = $context;

  return $export;
}
