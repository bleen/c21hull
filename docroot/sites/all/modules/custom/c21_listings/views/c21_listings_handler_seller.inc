<?php
/**
 * @file
 * Definition of c21_listings_handler_seller.
 */

/**
 * Description of what my handler does.
 */
class c21_listings_handler_seller extends views_handler_field {
  /**
   * Add some required fields needed on render().
   */
  function construct() {
    parent::construct();

    $this->additional_fields['seller1_firstname'] = array(
      'table' => 'field_data_field_listing_seller1_name',
      'field' => 'field_listing_seller1_name_first',
    );
    $this->additional_fields['seller1_lastname'] = array(
      'table' => 'field_data_field_listing_seller1_name',
      'field' => 'field_listing_seller1_name_second',
    );
    $this->additional_fields['seller1_company'] = array(
      'table' => 'field_data_field_listing_seller1_company',
      'field' => 'field_listing_seller1_company_value',
    );

    $this->additional_fields['seller2_firstname'] = array(
      'table' => 'field_data_field_listing_seller2_name',
      'field' => 'field_listing_seller2_name_first',
    );
    $this->additional_fields['seller2_lastname'] = array(
      'table' => 'field_data_field_listing_seller2_name',
      'field' => 'field_listing_seller2_name_second',
    );
    $this->additional_fields['seller2_company'] = array(
      'table' => 'field_data_field_listing_seller2_company',
      'field' => 'field_listing_seller2_company_value',
    );

  }

  /**
   * Loads additional fields.
   */
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * Renders the field handler.
   */
  function render($values) {
    $sellers = array();

    for ($i = 1; $i <= 2; $i++) {
      $seller_name = '';
      $seller_company = '';

      if (!empty($values->{'field_data_field_listing_seller' . $i . '_name_field_listing_seller' . $i . '_'}) && !empty($values->{'field_data_field_listing_seller' . $i . '_name_field_listing_seller' . $i . '__1'})) {
        $seller_name .= $values->{'field_data_field_listing_seller' . $i . '_name_field_listing_seller' . $i . '_'};
        $seller_name .= ' ' . $values->{'field_data_field_listing_seller' . $i . '_name_field_listing_seller' . $i . '__1'};
      }
      if (!empty($values->{'field_data_field_listing_seller' . $i . '_company_field_listing_selle'})) {
        $seller_company .= $values->{'field_data_field_listing_seller' . $i . '_company_field_listing_selle'};
      }

      if (!empty($seller_name) && !empty($seller_company)) {
        $sellers[] = $seller_name . ' (' . $seller_company . ')';
      }
      elseif (!empty($seller_name) || !empty($seller_company)) {
        $sellers[] = $seller_name . $seller_company;
      }
    }

    return implode(' & ', $sellers);
  }
}
