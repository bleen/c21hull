<?php
/**
 * @file
 * c21.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function c21_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'every-page';
  $context->description = 'A context for layout and settings across all pages.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~admin' => '~admin',
        '~admin/*' => '~admin/*',
        '~node/add' => '~node/add',
        '~node/add/*' => '~node/add/*',
        '~node/*/edit' => '~node/*/edit',
        '~drealty_listing/add' => '~drealty_listing/add',
        '~drealty_listing/add/*' => '~drealty_listing/add/*',
        '~drealty_listing/*/edit' => '~drealty_listing/*/edit',
        '~taxonomy/term/*/edit' => '~taxonomy/term/*/edit',
        '~taxonomy/vocabulary/*/edit' => '~taxonomy/vocabulary/*/edit',
        '~batch' => '~batch',
        '~batch/*' => '~batch/*',
        '~<front>' => '~<front>',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-c21_search_listings-page' => array(
          'module' => 'views',
          'delta' => '-exp-c21_search_listings-page',
          'region' => 'header',
          'weight' => '-10',
        ),
        'blockify-blockify-logo' => array(
          'module' => 'blockify',
          'delta' => 'blockify-logo',
          'region' => 'header',
          'weight' => '-9',
        ),
        'blockify-blockify-tabs' => array(
          'module' => 'blockify',
          'delta' => 'blockify-tabs',
          'region' => 'main_prefix',
          'weight' => '-9',
        ),
        'blockify-blockify-messages' => array(
          'module' => 'blockify',
          'delta' => 'blockify-messages',
          'region' => 'main_prefix',
          'weight' => '-8',
        ),
        'blockify-blockify-page-title' => array(
          'module' => 'blockify',
          'delta' => 'blockify-page-title',
          'region' => 'content',
          'weight' => '-9',
        ),
        'footer_sitemap-footer_sitemap' => array(
          'module' => 'footer_sitemap',
          'delta' => 'footer_sitemap',
          'region' => 'footer',
          'weight' => '-26',
        ),
        'c21-c21_footer' => array(
          'module' => 'c21',
          'delta' => 'c21_footer',
          'region' => 'footer',
          'weight' => '-25',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('A context for layout and settings across all pages.');
  $export['every-page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'A context for layout and settings on the homepage.';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
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
        'views--exp-c21_search_listings-page' => array(
          'module' => 'views',
          'delta' => '-exp-c21_search_listings-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-c21_featured_listings-block' => array(
          'module' => 'views',
          'delta' => 'c21_featured_listings-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-964ecad519128c5b59d0f4917f6399da' => array(
          'module' => 'views',
          'delta' => '964ecad519128c5b59d0f4917f6399da',
          'region' => 'content',
          'weight' => '-8',
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
  t('A context for layout and settings on the homepage.');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'term-pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'taxonomy/term/*' => 'taxonomy/term/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'formblock-contact_site' => array(
          'module' => 'formblock',
          'delta' => 'contact_site',
          'region' => 'main_suffix',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['term-pages'] = $context;

  return $export;
}
