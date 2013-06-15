<?php

/**
 * Defines the migration of `Agents`.
 */
class C21AgentMigration extends C21Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('c21hull.com agents');

    // Setup the source object for the user data.
    $query = Database::getConnection('default', 'legacy')
         ->select('agents', 'a')
         ->fields('a', array('id', 'full_name', 'last_name', 'bio', 'status'));
    $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Setup the destination object.
    $this->destination = new MigrateDestinationNode('agent');

    // Setup the mapping object.
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Agent ID.',
          'alias' => 'a',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Map fields.
    $this->addFieldMapping('title', 'full_name');
    $this->addFieldMapping('field_agent_last_name', 'last_name');
    $this->addFieldMapping('body', 'bio');
    $this->addFieldMapping('field_agent_status', 'status')
         ->callbacks(array($this, 'callbackProcessAgentStatus'));

    // All agents will be created by user 1.
    $this->addFieldMapping('uid')
         ->defaultValue(1);
  }

  function callbackProcessAgentStatus($value) {
    return $value ? 'current' : 'former';
  }
}
