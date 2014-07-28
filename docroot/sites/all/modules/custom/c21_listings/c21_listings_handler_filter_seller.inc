<?php

/**
 * Custom filter handler for views, that handles sellers
 */
class c21_listings_handler_filter_seller extends views_handler_filter_string {

  function op_contains($field) {
    $where = db_or();

    // Don't filter on empty strings.
    if (empty($this->value)) {
      return;
    }

    $where->condition('field_data_field_listing_seller1_name.field_listing_seller1_name_first', '%' . $this->value . '%', 'LIKE');
    $where->condition('field_data_field_listing_seller1_name.field_listing_seller1_name_second', '%' . $this->value . '%', 'LIKE');
    $where->condition('field_data_field_listing_seller1_company.field_listing_seller1_company_value', '%' . $this->value . '%', 'LIKE');
    $where->condition('field_data_field_listing_seller2_name.field_listing_seller2_name_first', '%' . $this->value . '%', 'LIKE');
    $where->condition('field_data_field_listing_seller2_name.field_listing_seller2_name_second', '%' . $this->value . '%', 'LIKE');
    $where->condition('field_data_field_listing_seller2_company.field_listing_seller2_company_value', '%' . $this->value . '%', 'LIKE');

    $this->query->add_where($this->options['group'], $where);
  }
}
