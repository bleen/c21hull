<?php

class apachesolr_views_handler_filter_numeric extends views_handler_filter_numeric {

  function op_between($field) {
    if ($this->operator == 'between') {
      $this->query->add_where($this->options['group'], $this->real_field, array($this->value['min'], $this->value['max']), 'BETWEEN');
    }
    else {
      $this->query->add_where($this->options['group'], db_or()->condition($this->real_field, $this->value['min'], '<=')->condition($field, $this->value['max'], '>='));
    }
  }

  function op_simple($field) {
    $this->query->add_where($this->options['group'], $this->real_field, $this->value['value'], $this->operator);
  }

}
