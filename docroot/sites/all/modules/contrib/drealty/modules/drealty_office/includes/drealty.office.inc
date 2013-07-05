<?php

class DrealtyOffice extends Entity {

  public $id;
  public $type;
  public $conid;
  public $hash;
  public $rets_imported;
  public $status;
  public $rets_key;
  public $rets_id;
  public $class;
  public $active;

  public function __construct(array $values = array()) {
    parent::__construct($values, 'drealty_office');
  }

  /**
   * returns the full url() for this listing
   *
   *  @return string
   */
  public function url() {
    $uri = $this->uri();
    return url($uri['path'], $uri);
  }

  /**
   * Returns the drupal path to this listing
   *
   * @return string
   */
  public function path() {
    $uri = $this->uri();
    return $uri['path'];
  }

  public function defaultUri() {
    return array('path' => 'drealty_listing/' . $this->id);
  }

}

class DrealtyOfficeController extends EntityAPIController {
  
  public function __construct($entityType) {
    parent::__construct($entityType);
  }
  
  public function buildContent($entity, $view_mode = 'full', $langcode = NULL, $content = array()) {
    return parent::buildContent($entity, $view_mode, $langcode, $content);
  }
  
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
  }
}