<?php

# Increase the memory limit during the execution of drush commands.
ini_set('memory_limit', '256M');

// Drush default settings.
$options['include'] = array(__DIR__ . '/commands');
$options['alias-path'] = array(__DIR__);
$options['structure-tables']['common'] = array(
  'cache',
  'cache_admin_menu',
  'cache_apachesolr',
  'cache_block',
  'cache_bootstrap',
  'cache_field',
  'cache_filter',
  'cache_form',
  'cache_image',
  'cache_libraries',
  'cache_magic',
  'cache_menu',
  'cache_page',
  'cache_path',
  'cache_token',
  'cache_update',
  'cache_views',
  'cache_views_data',
  'history',
  'sessions',
  'watchdog',
  'migrate_field_mapping',
  'migrate_group',
  'migrate_log',
  'migrate_map_c21agent',
  'migrate_map_c21buyer',
  'migrate_map_c21buyerbusinessphone',
  'migrate_map_c21buyercellphone',
  'migrate_map_c21buyeremail',
  'migrate_map_c21buyerfaxphone',
  'migrate_map_c21buyerhomephone',
  'migrate_map_c21buyerlocalphone',
  'migrate_map_c21listing',
  'migrate_map_c21seller',
  'migrate_map_c21sellerbusinessphone',
  'migrate_map_c21sellercellphone',
  'migrate_map_c21selleremail',
  'migrate_map_c21sellerfaxphone',
  'migrate_map_c21sellerhomephone',
  'migrate_map_c21sellerlocalphone',
  'migrate_map_c21termslistingadditionalbuilding',
  'migrate_map_c21termslistingbasement',
  'migrate_map_c21termslistingdevelopment',
  'migrate_map_c21termslistingfloors',
  'migrate_map_c21termslistinggarage',
  'migrate_map_c21termslistingheat',
  'migrate_map_c21termslistinginsulation',
  'migrate_map_c21termslistingschooldistrict',
  'migrate_map_c21termslistingsewage',
  'migrate_map_c21termslistingtownship',
  'migrate_map_c21termslistingwalls',
  'migrate_map_c21termslistingwater',
  'migrate_map_c21termslistingwindows',
  'migrate_map_c21user',
  'migrate_message_c21agent',
  'migrate_message_c21buyer',
  'migrate_message_c21buyerbusinessphone',
  'migrate_message_c21buyercellphone',
  'migrate_message_c21buyeremail',
  'migrate_message_c21buyerfaxphone',
  'migrate_message_c21buyerhomephone',
  'migrate_message_c21buyerlocalphone',
  'migrate_message_c21listing',
  'migrate_message_c21seller',
  'migrate_message_c21sellerbusinessphone',
  'migrate_message_c21sellercellphone',
  'migrate_message_c21selleremail',
  'migrate_message_c21sellerfaxphone',
  'migrate_message_c21sellerhomephone',
  'migrate_message_c21sellerlocalphone',
  'migrate_message_c21termslistingadditionalbuilding',
  'migrate_message_c21termslistingbasement',
  'migrate_message_c21termslistingdevelopment',
  'migrate_message_c21termslistingfloors',
  'migrate_message_c21termslistinggarage',
  'migrate_message_c21termslistingheat',
  'migrate_message_c21termslistinginsulation',
  'migrate_message_c21termslistingschooldistrict',
  'migrate_message_c21termslistingsewage',
  'migrate_message_c21termslistingtownship',
  'migrate_message_c21termslistingwalls',
  'migrate_message_c21termslistingwater',
  'migrate_message_c21termslistingwindows',
  'migrate_message_c21user',
  'migrate_status',
);
// Define some defaults parameters for drush commands.

// Set a predetermined username and password when using site-install.
$command_specific['site-install'] = array(
  'site-name' => 'Century21 Roy B. Hull',
  'site-mail' => 'admin@c21hull.com',
  'account-name' => 'hull',
  'account-pass' => 'pa55word',
  'account-mail' => 'admin@c21hull.com',
);
$command_specific['c21-site-install'] = $command_specific['site-install'];

// Define settings needed by the env command.
$enable_modules = array(
  'c21' => 1,
  'c21_listings' => 1,
  'c21_search' => 1,
  'syslog' => 1,
);
$disable_modules = array(
  'color' => 0,
  'comment' => 0,
  'dblog' => 0,
  'toolbar' => 0,
  'shortcut' => 0,
  'dashboard' => 0,
);
$options['environments'] = array(
  'dev' => array(
    // The list of modules to enabled (1) or disable (0).
    'modules' => array(
      'views_ui' => 1,
      'context_ui' => 1,
      'devel' => 1,
      'devel_generate' => 1,
      'ds_ui' => 1,
      'reroute_email' => 1,
      'field_ui' => 1,
      'ds_devel' => 1,
      'metatag_ui' => 1,
      'search_krumo' => 1,
      'stage_file_proxy' => 1,
    ),
    // The list of variables to configure.
    'settings' => array(
      'preprocess_css' => 0,
      'preprocess_js' => 0,
    ),
  ),
  'migration' => array(
    // The list of modules to enabled (1) or disable (0).
    'modules' => array(
      'migrate_ui' => 1,
      'c21_migration' => 1,
    ),
  ),
  'prod' => array(
    // The list of modules to enabled (1) or disable (0).
    'modules' => array(
      'views_ui' => 0,
      'context_ui' => 0,
      'devel' => 0,
      'devel_generate' => 0,
      'ds_ui' => 0,
      'ds_devel' => 0,
      'reroute_email' => 0,
      'field_ui' => 0,
      'migrate_ui' => 0,
      'metatag_ui' => 0,
      'search_krumo' => 0,
      'simpletest' => 0,
      'c21_migration' => 0,
      'backup_migrate' => 1,
      'stage_file_proxy' => 0,
    ),
    // The list of variables to configure.
    'settings' => array(
      'preprocess_css' => 1,
      'preprocess_js' => 1,
    ),
  ),
);

foreach ($options['environments'] as $env => $settings) {
  $options['environments'][$env]['modules'] = array_merge($options['environments'][$env]['modules'], $enable_modules, $disable_modules);
}
