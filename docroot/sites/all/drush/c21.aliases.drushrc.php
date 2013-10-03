<?php
/* ==========================  L O C A L  =================================== */
$aliases['local'] = array(
  'parent' => '@parent',
  'env' => 'local',
  'ssh-options' => '-o StrictHostKeyChecking=no',
  'sites-subdir' => 'default',
  'uri' => 'http://local.c21hull',
);

/* ==============================  R E M O T E ============================== */
$aliases['stage'] = array(
  'parent' => '@c21.local',
  'env' => 'stage',
  'remote-user' => 'hull',
  'remote-host' => 'c21hull.com',
  'path-aliases' => array(
    '%drush-script' => '/home/hull/pear/drush',
    '%dump-dir' => '/home/hull/dumps'
  ),
  'root' => '/home/hull/sites/stage.c21hull.com/docroot',
  'uri' => 'http://stage.c21hull.com',
);

$aliases['prod'] = array(
  'parent' => '@c21.stage',
  'env' => 'prod',
  'root' => '/home/hull/sites/c21hull.com/docroot',
  'uri' => 'http://d7.c21hull.com',
);
