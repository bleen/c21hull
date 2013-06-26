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
