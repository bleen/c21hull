<?php

/**
 * @file
 *
 * Used for c21 Based commands.
 */

/**
 * Implementation of hook_drush_command().
 */
function c21_drush_command() {

  $items['c21-site-install'] = array(
    'description' => 'Install c21Hull.com.',
    'arguments' => array(
    ),
    'options' => array(
      'db-url' => array(
        'description' => 'A Drupal 6 style database URL. Only required for initial install - not re-install.',
        'example-value' => 'mysql://root:pass@127.0.0.1/db',
      ),
      'db-prefix' => 'An optional table prefix to use for initial install.  Can be a key-value array of tables/prefixes in a drushrc file (not the command line).',
      'db-su' => array(
        'description' => 'Account to use when creating a new database. Must have Grant permission (mysql only). Optional.',
        'example-value' => 'root',
      ),
      'db-su-pw' => array(
        'description' => 'Password for the "db-su" account. Optional.',
        'example-value' => 'pass',
      ),
      'account-name' => 'uid1 name.',
      'account-pass' => 'uid1 pass.',
      'account-mail' => 'uid1 email.',
      'locale' => array(
        'description' => 'A short language code. Sets the default site language. Language files must already be present. You may use download command to get them.',
        'example-value' => 'en-GB',
      ),
      'clean-url' => 'Defaults to 1',
      'site-name' => 'Defaults to Site-Install',
      'site-mail' => 'From: for system mailings.',
      'sites-subdir' => array(
        'description' => "Name of directory under 'sites' which should be created. Only needed when the subdirectory does not already exist. Defaults to 'default'",
        'value' => 'required',
        'example-value' => 'directory_name',
      ),
    ),
    'examples' => array(
      "drush c21-site-install" => 'Install c21hull.com.',
      "drush c21si" => 'Install c21hull.com.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_ROOT,
    'aliases' => array('c21si'),
  );

  return $items;
}

/**
 * Implements drush_hook_COMMAND().
 *
 * Publisher Site Install.
 */
function drush_c21_site_install() {
  $form_options = array();

  $args = func_get_args();
  if ($args) {
    foreach ($args as $arg) {
      list($key, $value) = explode('=', $arg);
      $form_options[$key] = $value;
    }
  }

  drush_include_engine('drupal', 'site_install', drush_drupal_major_version());
  drush_core_site_install_version('standard', $form_options);

  node_type_delete('article');
}

/**
 * Implements drush_hook_pre_COMMAND().
 */
function drush_c21_pre_c21_site_install($profile = NULL) {
  return drush_core_pre_site_install($profile);
}
