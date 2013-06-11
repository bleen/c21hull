<?php

/**
 * Defines the migration of user data.
 */
class C21UserMigration extends C21Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com users');

    // Setup the source object for the user data.
    $query = Database::getConnection('default', 'legacy')
         ->select('users', 'u')
         ->fields('u', array('user_id', 'firstname', 'lastname', 'username', 'email', 'password', 'access', 'created_on'));
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Setup the destination object.
    $this->destination = new MigrateDestinationUser();

    // Setup the mapping object.
    $this->map = new MigrateSQLMap($this->machineName,
        array('user_id' => array(
              'type' => 'int',
              'not null' => TRUE,
              'description' => 'User ID.'
              )
        ),
        MigrateDestinationUser::getKeySchema()
    );

    // Map the fields.
    $this->addFieldMapping('name', 'username')
         ->dedupe('users', 'name');
    $this->addFieldMapping('field_user_first_name', 'firstname');
    $this->addFieldMapping('field_user_last_name', 'lastname');
    $this->addFieldMapping('pass', 'password');
    $this->addFieldMapping('mail', 'email');
    $this->addFieldMapping('created', 'created_on')
         ->callbacks(array($this, 'callbackProcessUserCreated'));
    $this->addFieldMapping('role_names', 'access')
         ->callbacks(array($this, 'callbackProcessUserRoles'));
    $this->addFieldMapping('status', 'access')
         ->callbacks(array($this, 'callbackProcessUserStatus'));
    $this->addFieldMapping('signature_format')
         ->defaultValue('rich_text');
    $this->addFieldMapping('timezone')
         ->defaultValue('America/New_York');
    $this->addFieldMapping('init', 'email');

  }

  function prepareRow($source_row) {
    // Skip the user named "hull".
    if ($source_row->username == 'hull') {
      return FALSE;
    }
  }

  protected function callbackProcessUserCreated($value) {
    // If the creation date is empty, set it to 0.
    if ($value == '0000-00-00') {
      $value = 0;
    }
  }

  protected function callbackProcessUserRoles($value) {
    // Map the user roles based on their prior access level.
    $role = '';
    if ($value == 30) {
      $role = 'agent';
    }
    elseif ($value == 70) {
      $role = 'staff';
    }
    elseif ($value > 70) {
      $role = 'administrator';
    }

    return !empty($role) ? array('authenticated user', $role) : array();
  }

  protected function callbackProcessUserStatus($value) {
    // Make sure users with no access on the old site still have no access.
    return $value == 0 ? 0 : 1;
  }
}
