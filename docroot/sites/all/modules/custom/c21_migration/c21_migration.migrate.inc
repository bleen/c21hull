<?php

/**
 * Implements hook_migrate_api().
 */
function c21_migration_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'c21User' => array(
        'class_name' => 'C21UserMigration',
      ),
      'c21Agent' => array(
        'class_name' => 'C21AgentMigration',
      ),
    ),
  );
  return $api;
}

/**
 * Defines the base class for the c21hull data migration.
 */
abstract class C21Migration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Alexander Ross', 'alex@bleen.net', t('Technical Lead')),
      new MigrateTeamMember('Robin Gruen', 'rgruen@c21hull.com', t('Product Owner')),
    );
  }
}
