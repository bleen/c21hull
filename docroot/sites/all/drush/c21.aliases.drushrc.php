<?php
/* ==========================  L O C A L  =================================== */
$aliases['local'] = array(
  'parent' => '@parent',
  'env' => 'local',
  'ssh-options' => '-o StrictHostKeyChecking=no',
  'sites-subdir' => 'default',
  'uri' => 'http://local.c21hull',
);

/* ==========================  R E M O T E ============== */
$aliases['stage'] = array(
  'env' => 'stage',
  'remote-user' => 'hull',
  'remote-host' => 'c21hull.com',
  'parent' => '@c21.local',
  'path-aliases' => array(
    '%drush-script' => '/home/hull/pear/drush',
    '%dump-dir' => '/home/hull/tmp'
  ),
  'root' => '/home/hull/sites/c21hull.com/docroot',
  'uri' => 'http://d7.c21hull.com',
);
