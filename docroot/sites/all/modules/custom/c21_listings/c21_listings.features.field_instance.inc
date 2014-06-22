<?php
/**
 * @file
 * c21_listings.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function c21_listings_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-agent-field_agent_bio'
  $field_instances['node-agent-field_agent_bio'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 25,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'words',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agent_bio',
    'label' => 'Bio',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_email'
  $field_instances['node-agent-field_agent_email'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'email',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_agent_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'emailwidget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_last_name'
  $field_instances['node-agent-field_agent_last_name'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is used for sorting purposes only. Do not include initials or suffixes. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agent_last_name',
    'label' => 'Last Name',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_phone_number'
  $field_instances['node-agent-field_agent_phone_number'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'us_phone_number',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'us_phone_number',
        'weight' => 2,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'us_phone_number',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_agent_phone_number',
    'label' => 'Phone Number',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'masked_input',
      'settings' => array(
        'mask' => '(999) 999-9999? x99999',
        'placeholder' => '_',
        'size' => 60,
      ),
      'type' => 'masked_input',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_photo'
  $field_instances['node-agent-field_agent_photo'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => 'c21square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => 'c21square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => 'content',
          'image_style' => 'c21square',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => 'content',
          'image_style' => 'c21square',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_agent_photo',
    'label' => 'Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => 'agent/photos',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_primary_office'
  $field_instances['node-agent-field_agent_primary_office'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'dingmans_ferry',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_agent_primary_office',
    'label' => 'Primary Office',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-agent-field_agent_status'
  $field_instances['node-agent-field_agent_status'] = array(
    'bundle' => 'agent',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'current',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_agent_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_acreage'
  $field_instances['node-listing-field_listing_acreage'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 98,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 50,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 50,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 85,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_acreage',
    'label' => 'Acreage',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => ' acre| acres',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_agent'
  $field_instances['node-listing-field_listing_agent'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'links' => 0,
          'view_mode' => 'micro_teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 50,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 90,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 20,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 94,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_agent',
    'label' => 'Agent',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_basement'
  $field_instances['node-listing-field_listing_basement'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: crawl, finished, unfinished',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 32,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 89,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 190,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 190,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_basement',
    'label' => 'Basement',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_bathrooms'
  $field_instances['node-listing-field_listing_bathrooms'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 21,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'micro_teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 1,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_bathrooms',
    'label' => 'Bathrooms',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_bedrooms'
  $field_instances['node-listing-field_listing_bedrooms'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'micro_teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'search_result' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_bedrooms',
    'label' => 'Bedrooms',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => 99,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_block'
  $field_instances['node-listing-field_listing_block'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 98,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 115,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 105,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 294,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 104,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 116,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_block',
    'label' => 'Block',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 108,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_building_type'
  $field_instances['node-listing-field_listing_building_type'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'residence',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 107,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_building_type',
    'label' => 'Building Type',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer1_address'
  $field_instances['node-listing-field_listing_buyer1_address'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|listing|field_listing_buyer1_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer1_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 159,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer1_company'
  $field_instances['node-listing-field_listing_buyer1_company'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer1_company',
    'label' => 'Company',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer1_email'
  $field_instances['node-listing-field_listing_buyer1_email'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer1_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Personal' => 'Personal',
              'Business' => 'Business',
              'Other' => 'Other',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 161,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer1_name'
  $field_instances['node-listing-field_listing_buyer1_name'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer1_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'First Name',
            'size' => 15,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'Last Name',
            'size' => 15,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer1_phone'
  $field_instances['node-listing-field_listing_buyer1_phone'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer1_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 0,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Business' => 'Business',
              'Cell' => 'Cell',
              'Fax' => 'Fax',
              'Home' => 'Home',
              'Local' => 'Local',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 160,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer2_address'
  $field_instances['node-listing-field_listing_buyer2_address'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|listing|field_listing_buyer2_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer2_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 160,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer2_company'
  $field_instances['node-listing-field_listing_buyer2_company'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer2_company',
    'label' => 'Company',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 159,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer2_email'
  $field_instances['node-listing-field_listing_buyer2_email'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer2_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Personal' => 'Personal',
              'Business' => 'Business',
              'Other' => 'Other',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 162,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer2_name'
  $field_instances['node-listing-field_listing_buyer2_name'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer2_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'First Name',
            'size' => 15,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'Last Name',
            'size' => 15,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_buyer2_phone'
  $field_instances['node-listing-field_listing_buyer2_phone'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '(',
            'suffix' => ')',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 355,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_buyer2_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 0,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Business' => 'Business',
              'Cell' => 'Cell',
              'Fax' => 'Fax',
              'Home' => 'Home',
              'Local' => 'Local',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 161,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_closing_date'
  $field_instances['node-listing-field_listing_closing_date'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 109,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_closing_date',
    'label' => 'Closing Date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-1:+1',
      ),
      'type' => 'date_popup',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_commission'
  $field_instances['node-listing-field_listing_commission'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Values less than 100 will be considered a percentage, otherwise a dollar amount',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 114,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 115,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_commission',
    'label' => 'Commission',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '%',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_description'
  $field_instances['node-listing-field_listing_description'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'print' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_description',
    'label' => 'Description',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_development'
  $field_instances['node-listing-field_listing_development'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 103,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 111,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 292,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 100,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 113,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_development',
    'label' => 'Development',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 111,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_directions'
  $field_instances['node-listing-field_listing_directions'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 95,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 105,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 118,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 102,
      ),
      'print_internal' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 298,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 119,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_directions',
    'label' => 'Directions',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 105,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_dues'
  $field_instances['node-listing-field_listing_dues'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 110,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 70,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 70,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 99,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 112,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_dues',
    'label' => 'Dues',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '/year',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_featured_photo'
  $field_instances['node-listing-field_listing_featured_photo'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 17,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => 'c21wide',
        ),
        'type' => 'image',
        'weight' => 3,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => 'content',
          'image_style' => 'c21wide',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'print' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => 'content',
          'image_style' => 'c21wide',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_featured_photo',
    'label' => 'Featured Photo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => 'listing-photos/featured',
      'file_extensions' => 'png gif jpg jpeg',
      'focus' => 0,
      'focus_lock_ratio' => 0,
      'focus_min_size' => '',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_fireplace_info'
  $field_instances['node-listing-field_listing_fireplace_info'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 115,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 170,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 170,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_fireplace_info',
    'label' => 'Fireplace',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_floors'
  $field_instances['node-listing-field_listing_floors'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: hardwood, linoleum, tile, carpet, vinyl',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 34,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 101,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 210,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 210,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 88,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_floors',
    'label' => 'Floors',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_garage'
  $field_instances['node-listing-field_listing_garage'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: 1-car, 2-car',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 31,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 105,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 180,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 180,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 93,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_garage',
    'label' => 'Garage',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_gross_commission'
  $field_instances['node-listing-field_listing_gross_commission'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 112,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_gross_commission',
    'label' => 'Gross Commission',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_heat'
  $field_instances['node-listing-field_listing_heat'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: electric, oil, propane',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 28,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 140,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 140,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 97,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 111,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_heat',
    'label' => 'Heat',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_id_prefix'
  $field_instances['node-listing-field_listing_id_prefix'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'listing_id',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'listing_id',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'c21_listings',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'listing_id',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 96,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 110,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_id_prefix',
    'label' => 'Listing ID',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_insulation'
  $field_instances['node-listing-field_listing_insulation'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: full, partial, unknown',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 29,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 150,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 150,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 95,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_insulation',
    'label' => 'Insulation',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_latitude'
  $field_instances['node-listing-field_listing_latitude'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 119,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_latitude',
    'label' => 'Latitude',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_legacy_data'
  $field_instances['node-listing-field_listing_legacy_data'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 105,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'code',
    'field_name' => 'field_listing_legacy_data',
    'label' => 'Legacy Data',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 25,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_list_date'
  $field_instances['node-listing-field_listing_list_date'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 39,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_list_date',
    'label' => 'List Date',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_list_price'
  $field_instances['node-listing-field_listing_list_price'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 4,
      ),
      'micro_teaser' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 40,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 40,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 1,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_list_price',
    'label' => 'List Price',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_lockbox_key'
  $field_instances['node-listing-field_listing_lockbox_key'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 79,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 42,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_lockbox_key',
    'label' => 'Lockbox/Key',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_longitude'
  $field_instances['node-listing-field_listing_longitude'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 118,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_longitude',
    'label' => 'Longitude',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_lot'
  $field_instances['node-listing-field_listing_lot'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 97,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 107,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 104,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 293,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_lot',
    'label' => 'Lot',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 107,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_measurements'
  $field_instances['node-listing-field_listing_measurements'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => NULL,
        'settings' => array(),
        'type' => 'default',
        'weight' => 122,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'grid',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'grid_default',
        'weight' => 290,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'grid',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'grid_default',
        'weight' => 290,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_measurements',
    'label' => 'Measurements',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'grid_columns' => '',
      'grid_rows' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'grid',
      'settings' => array(),
      'type' => 'grid_field',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_mls'
  $field_instances['node-listing-field_listing_mls'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'micro_teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => 'unknown',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_mls',
    'label' => 'MLS #',
    'placeholder' => 'ex: 12-3456',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'masked_input',
      'settings' => array(
        'mask' => '99-99?999',
        'placeholder' => '_',
        'size' => 60,
      ),
      'type' => 'masked_input',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_notes'
  $field_instances['node-listing-field_listing_notes'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 102,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 111,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 108,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 600,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 402,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_notes',
    'label' => 'Notes',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_outside_features'
  $field_instances['node-listing-field_listing_outside_features'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 113,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 275,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 275,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_outside_features',
    'label' => 'Outside Features',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_personal_property'
  $field_instances['node-listing-field_listing_personal_property'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'smart_trim',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'more_link' => FALSE,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_options' => array(),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 280,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'smart_trim',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 300,
          'trim_options' => array(
            'text' => 0,
          ),
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 280,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_personal_property',
    'label' => 'Personal Property',
    'placeholder' => 'List any personal property included in this sale',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_photos'
  $field_instances['node-listing-field_listing_photos'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => 'To upload multiple images, hold down the ctrl key (cmd on macs) while selecting images.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 18,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => 'c21wide',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'image_link' => '',
          'image_style' => 'c21wide',
        ),
        'type' => 'image',
        'weight' => 300,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_photos',
    'label' => 'Photos',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_image' => 0,
      'file_directory' => 'listing-photos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sale_agent'
  $field_instances['node-listing-field_listing_sale_agent'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 111,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_sale_agent',
    'label' => 'Sale Agent',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sale_price'
  $field_instances['node-listing-field_listing_sale_price'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 110,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_sale_price',
    'label' => 'Sale Price',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_school_district'
  $field_instances['node-listing-field_listing_school_district'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: Deleware Valley, E. Stroudsburg, Wallenpaupack, Other',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 37,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 90,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 41,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_school_district',
    'label' => 'School District',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_section'
  $field_instances['node-listing-field_listing_section'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 99,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 109,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 106,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 295,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_section',
    'label' => 'Section',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 109,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller1_address'
  $field_instances['node-listing-field_listing_seller1_address'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|listing|field_listing_seller1_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 304,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller1_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 169,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller1_company'
  $field_instances['node-listing-field_listing_seller1_company'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_plain',
        'weight' => 303,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller1_company',
    'label' => 'Company',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller1_email'
  $field_instances['node-listing-field_listing_seller1_email'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '(',
            'suffix' => ')',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 306,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller1_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Personal' => 'Personal',
              'Business' => 'Business',
              'Other' => 'Other',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 171,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller1_name'
  $field_instances['node-listing-field_listing_seller1_name'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 302,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller1_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'First Name',
            'size' => 15,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'Last Name',
            'size' => 15,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 167,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller1_phone'
  $field_instances['node-listing-field_listing_seller1_phone'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '(',
            'suffix' => ')',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 305,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller1_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 0,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Business' => 'Business',
              'Cell' => 'Cell',
              'Fax' => 'Fax',
              'Home' => 'Home',
              'Local' => 'Local',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 170,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller2_address'
  $field_instances['node-listing-field_listing_seller2_address'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'element_key' => 'node|listing|field_listing_seller2_address|und|0',
        'thoroughfare' => '',
        'premise' => '',
        'locality' => '',
        'administrative_area' => '',
        'postal_code' => '',
        'country' => 'US',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 127,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 354,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller2_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'US' => 'US',
        ),
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 170,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller2_company'
  $field_instances['node-listing-field_listing_seller2_company'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 125,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_plain',
        'weight' => 352,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller2_company',
    'label' => 'Company',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 169,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller2_email'
  $field_instances['node-listing-field_listing_seller2_email'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 126,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '(',
            'suffix' => ')',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 356,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller2_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Personal' => 'Personal',
              'Business' => 'Business',
              'Other' => 'Other',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 172,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller2_name'
  $field_instances['node-listing-field_listing_seller2_name'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 124,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 351,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller2_name',
    'label' => 'Name',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'First Name',
            'size' => 15,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'Last Name',
            'size' => 15,
          ),
        ),
      ),
      'type' => 'textfield_&_textfield',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_seller2_phone'
  $field_instances['node-listing-field_listing_seller2_phone'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 123,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_listing_seller2_phone',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 0,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => '',
            'size' => 10,
          ),
        ),
        'inline' => 1,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'select' => array(
            'allowed_values' => array(
              'Business' => 'Business',
              'Cell' => 'Cell',
              'Fax' => 'Fax',
              'Home' => 'Home',
              'Local' => 'Local',
            ),
          ),
        ),
      ),
      'type' => 'textfield_&_select',
      'weight' => 171,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sewage'
  $field_instances['node-listing-field_listing_sewage'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: septic, septic needed, central, shared, existing permit',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 120,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 120,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_sewage',
    'label' => 'Sewage',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_siding_info'
  $field_instances['node-listing-field_listing_siding_info'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 117,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 160,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 160,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_siding_info',
    'label' => 'Siding',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sq_ft_above'
  $field_instances['node-listing-field_listing_sq_ft_above'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 250,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 225,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_sq_ft_above',
    'label' => 'Square Footage Above',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'sq. ft.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sq_ft_below'
  $field_instances['node-listing-field_listing_sq_ft_below'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 42,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 260,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 230,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_sq_ft_below',
    'label' => 'Square Footage Below',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'sq. ft.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_sq_ft_finished'
  $field_instances['node-listing-field_listing_sq_ft_finished'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 43,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
      ),
      'micro_teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 270,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 266,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => 0,
          'scale' => 0,
          'thousand_separator' => ',',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_sq_ft_finished',
    'label' => 'Square Footage Finished',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'sq. ft.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_state'
  $field_instances['node-listing-field_listing_state'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'PA',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 106,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_state',
    'label' => 'State',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_status'
  $field_instances['node-listing-field_listing_status'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'for_sale',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_street'
  $field_instances['node-listing-field_listing_street'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 100,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
      'print' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 297,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_street',
    'label' => 'Street',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_style_info'
  $field_instances['node-listing-field_listing_style_info'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 116,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_style_info',
    'label' => 'Style',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_tags'
  $field_instances['node-listing-field_listing_tags'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: lakefront, new construction, foreclosure',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 6,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'print_internal' => array(
        'label' => 'hidden',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 1,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 401,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_tags',
    'label' => 'Special Notes',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_tax_map'
  $field_instances['node-listing-field_listing_tax_map'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 96,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 106,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 103,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_plain',
        'weight' => 291,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_tax_map',
    'label' => 'Tax Map #',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 106,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_taxes'
  $field_instances['node-listing-field_listing_taxes'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 60,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ',',
        ),
        'type' => 'number_decimal',
        'weight' => 60,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_taxes',
    'label' => 'Taxes',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'max' => '',
      'min' => '',
      'prefix' => '$',
      'suffix' => '/year',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'numberfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_taxes_tbd'
  $field_instances['node-listing-field_listing_taxes_tbd'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 120,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_taxes_tbd',
    'label' => 'Taxes TBD',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_to_be_built'
  $field_instances['node-listing-field_listing_to_be_built'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 121,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_to_be_built',
    'label' => 'To be built',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_township'
  $field_instances['node-listing-field_listing_township'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 104,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 9,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
      'print' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 296,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_township',
    'label' => 'Township',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_type'
  $field_instances['node-listing-field_listing_type'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'target_id' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'link' => 0,
        ),
        'type' => 'entityreference_label',
        'weight' => 30,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_type',
    'label' => 'Listing Type',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_virtual_tour'
  $field_instances['node-listing-field_listing_virtual_tour'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: http://www.example.com/tour.htm',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'link_default',
        'weight' => 16,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
      ),
      'print_internal' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_virtual_tour',
    'label' => 'Virtual Tour',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => 'virtual-tour',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'virtual tour',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'urlwidget',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_walls'
  $field_instances['node-listing-field_listing_walls'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: sheetrock, wood, paneling',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 35,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 220,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 220,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_walls',
    'label' => 'Walls',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_water'
  $field_instances['node-listing-field_listing_water'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: central, well, well needed, shared',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 27,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 130,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 130,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_water',
    'label' => 'Water',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'delimiter' => '',
        'limit' => 10,
        'min_length' => 0,
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 125,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_windows'
  $field_instances['node-listing-field_listing_windows'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'ex: single pane, double pane',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 33,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 200,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'ds',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'taxonomy_term_link' => 0,
          'taxonomy_term_separator' => ', ',
        ),
        'type' => 'ds_taxonomy_separator',
        'weight' => 200,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_windows',
    'label' => 'Windows',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'autocomplete_deluxe',
      'settings' => array(
        'autocomplete_deluxe_path' => 'autocomplete_deluxe/taxonomy',
        'size' => 60,
      ),
      'type' => 'autocomplete_deluxe_taxonomy',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_year_built'
  $field_instances['node-listing-field_listing_year_built'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 19,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'c21_date_type_very_short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'c21_date_type_very_short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 110,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
          'format_type' => 'c21_date_type_very_short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 110,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_listing_year_built',
    'label' => 'Year Built',
    'required' => 0,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '-30 years',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '1850:+5',
      ),
      'type' => 'date_select',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'node-listing-field_listing_zoning'
  $field_instances['node-listing-field_listing_zoning'] = array(
    'bundle' => 'listing',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => array(
      0 => array(
        'value' => 'residential',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
      'micro_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 80,
      ),
      'print_internal' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'list_default',
        'weight' => 80,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_zoning',
    'label' => 'Zoning',
    'required' => 1,
    'settings' => array(
      'custom_add_another' => '',
      'custom_remove' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-listing_type-field_listing_type_fine_print'
  $field_instances['node-listing_type-field_listing_type_fine_print'] = array(
    'bundle' => 'listing_type',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_listing_type_fine_print',
    'label' => 'Fine Print',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'plain_text' => 0,
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-listing_type-field_listing_type_title'
  $field_instances['node-listing_type-field_listing_type_title'] = array(
    'bundle' => 'listing_type',
    'custom_add_another' => '',
    'custom_remove' => '',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This title will appear above the fine print on the back of printed listings.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => 'EmptyFieldText',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_listing_type_title',
    'label' => 'Title',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'custom_add_another' => '',
      'custom_remove' => '',
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Acreage');
  t('Address');
  t('Agent');
  t('Basement');
  t('Bathrooms');
  t('Bedrooms');
  t('Bio');
  t('Block');
  t('Building Type');
  t('Closing Date');
  t('Commission');
  t('Company');
  t('Description');
  t('Development');
  t('Directions');
  t('Dues');
  t('Email');
  t('Featured Photo');
  t('Fine Print');
  t('Fireplace');
  t('Floors');
  t('Garage');
  t('Gross Commission');
  t('Heat');
  t('Insulation');
  t('Last Name');
  t('Latitude');
  t('Legacy Data');
  t('List Date');
  t('List Price');
  t('Listing ID');
  t('Listing Type');
  t('Lockbox/Key');
  t('Longitude');
  t('Lot');
  t('MLS #');
  t('Measurements');
  t('Name');
  t('Notes');
  t('Outside Features');
  t('Personal Property');
  t('Phone');
  t('Phone Number');
  t('Photo');
  t('Photos');
  t('Primary Office');
  t('Sale Agent');
  t('Sale Price');
  t('School District');
  t('Section');
  t('Sewage');
  t('Siding');
  t('Special Notes');
  t('Square Footage Above');
  t('Square Footage Below');
  t('Square Footage Finished');
  t('State');
  t('Status');
  t('Street');
  t('Style');
  t('Tax Map #');
  t('Taxes');
  t('Taxes TBD');
  t('This is used for sorting purposes only. Do not include initials or suffixes. ');
  t('This title will appear above the fine print on the back of printed listings.');
  t('Title');
  t('To be built');
  t('To upload multiple images, hold down the ctrl key (cmd on macs) while selecting images.');
  t('Township');
  t('Values less than 100 will be considered a percentage, otherwise a dollar amount');
  t('Virtual Tour');
  t('Walls');
  t('Water');
  t('Windows');
  t('Year Built');
  t('Zoning');
  t('ex: 1-car, 2-car');
  t('ex: Deleware Valley, E. Stroudsburg, Wallenpaupack, Other');
  t('ex: central, well, well needed, shared');
  t('ex: crawl, finished, unfinished');
  t('ex: electric, oil, propane');
  t('ex: full, partial, unknown');
  t('ex: hardwood, linoleum, tile, carpet, vinyl');
  t('ex: http://www.example.com/tour.htm');
  t('ex: lakefront, new construction, foreclosure');
  t('ex: septic, septic needed, central, shared, existing permit');
  t('ex: sheetrock, wood, paneling');
  t('ex: single pane, double pane');

  return $field_instances;
}
