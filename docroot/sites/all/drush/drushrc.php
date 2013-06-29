<?php

# Increase the memory limit during the execution of drush commands.
ini_set('memory_limit', '256M');

// Drush default settings.
$options['include'] = array(__DIR__ . '/commands');
$options['alias-path'] = array(__DIR__);

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
  'c21_migration' => 1,
  'c21_search' => 1,
  'syslog' => 1,
);
$disable_modules = array(
  'color' => 0,
  'comment' => 0,
  'dblog' => 0,
  'toolbar' => 0,
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
      'search_krumo' => 1,
      'testing' => 1,
    ),
    // The list of variables to configure.
    'settings' => array(
      'preprocess_css' => 0,
      'preprocess_js' => 0,
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
      'search_krumo' => 0,
      'testing' => 0,
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
