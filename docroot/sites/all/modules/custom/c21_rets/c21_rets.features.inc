<?php
/**
 * @file
 * c21_rets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_rets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function c21_rets_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_drealty_listing_type().
 */
function c21_rets_default_drealty_listing_type() {
  $items = array();
  $items['mls_residential_listing'] = entity_import('drealty_listing_type', '{
    "weight" : "0",
    "locked" : "0",
    "data" : null,
    "rdf_mapping" : [],
    "fields" : {
      "field_mls_acreage" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 4 },
        "translatable" : "0",
        "field_name" : "field_mls_acreage",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 4, "not null" : false } }
      },
      "field_mls_bathrooms" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 1 },
        "translatable" : "0",
        "field_name" : "field_mls_bathrooms",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 1, "not null" : false } }
      },
      "field_mls_bedrooms" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : [],
        "translatable" : "0",
        "field_name" : "field_mls_bedrooms",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_mls_city" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "tid" : { "table" : "taxonomy_term_data", "columns" : { "tid" : "tid" } } },
        "indexes" : { "tid" : [ "tid" ] },
        "settings" : { "allowed_values" : [ { "vocabulary" : "listing_township", "parent" : 0 } ] },
        "translatable" : "0",
        "field_name" : "field_mls_city",
        "type" : "taxonomy_term_reference",
        "module" : "taxonomy",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "tid" : { "type" : "int", "unsigned" : true, "not null" : false } }
      },
      "field_mls_development" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "tid" : { "table" : "taxonomy_term_data", "columns" : { "tid" : "tid" } } },
        "indexes" : { "tid" : [ "tid" ] },
        "settings" : { "allowed_values" : [ { "vocabulary" : "listing_development", "parent" : 0 } ] },
        "translatable" : "0",
        "field_name" : "field_mls_development",
        "type" : "taxonomy_term_reference",
        "module" : "taxonomy",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "tid" : { "type" : "int", "unsigned" : true, "not null" : false } }
      },
      "field_mls_garage" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : [],
        "translatable" : "0",
        "field_name" : "field_mls_garage",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_mls_internal_id" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_internal_id",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_list_price" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "field_name" : "field_mls_list_price",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_mls_listing_area" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_listing_area",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_listing_office" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_listing_office",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_number" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_number",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_photos" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "fid" : { "table" : "file_managed", "columns" : { "fid" : "fid" } } },
        "indexes" : { "fid" : [ "fid" ] },
        "settings" : { "default_image" : 11612, "uri_scheme" : "public" },
        "translatable" : "0",
        "field_name" : "field_mls_photos",
        "type" : "image",
        "module" : "image",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "-1",
        "deleted" : "0",
        "columns" : {
          "fid" : {
            "description" : "The {file_managed}.fid being referenced in this field.",
            "type" : "int",
            "not null" : false,
            "unsigned" : true
          },
          "alt" : {
            "description" : "Alternative image text, for the image\\u0027s \\u0027alt\\u0027 attribute.",
            "type" : "varchar",
            "length" : 512,
            "not null" : false
          },
          "title" : {
            "description" : "Image title text, for the image\\u0027s \\u0027title\\u0027 attribute.",
            "type" : "varchar",
            "length" : 1024,
            "not null" : false
          },
          "width" : {
            "description" : "The width of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          },
          "height" : {
            "description" : "The height of the image in pixels.",
            "type" : "int",
            "unsigned" : true
          }
        }
      },
      "field_mls_school_district" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "tid" : { "table" : "taxonomy_term_data", "columns" : { "tid" : "tid" } } },
        "indexes" : { "tid" : [ "tid" ] },
        "settings" : { "allowed_values" : [ { "vocabulary" : "listing_school_district", "parent" : 0 } ] },
        "translatable" : "0",
        "field_name" : "field_mls_school_district",
        "type" : "taxonomy_term_reference",
        "module" : "taxonomy",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "tid" : { "type" : "int", "unsigned" : true, "not null" : false } }
      },
      "field_mls_square_feet" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : [],
        "indexes" : [],
        "settings" : { "decimal_separator" : ".", "precision" : 10, "scale" : 2 },
        "translatable" : "0",
        "field_name" : "field_mls_square_feet",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "numeric", "precision" : 10, "scale" : 2, "not null" : false } }
      },
      "field_mls_state" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_state",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_direction" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_street_direction",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_name" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_street_name",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_number" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_street_number",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_suffix" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_street_suffix",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_tax_map" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_tax_map",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_year_built" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_year_built",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_zipcode" : {
        "entity_types" : [ "drealty_listing" ],
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "settings" : { "max_length" : 255 },
        "translatable" : "0",
        "field_name" : "field_mls_zipcode",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : 255, "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      }
    },
    "field_instances" : {
      "field_mls_acreage" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "7",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 2,
              "thousand_separator" : ","
            },
            "module" : "number"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "14",
            "settings" : []
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_57 - Acres",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Acreage",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 18
        },
        "id" : "471",
        "field_id" : "463",
        "field_name" : "field_mls_acreage",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_bathrooms" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "5",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 1,
              "thousand_separator" : ","
            },
            "module" : "number"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "5",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 1,
              "thousand_separator" : ","
            },
            "module" : "number"
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_67 - Total All Baths",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Bathrooms",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 13
        },
        "id" : "472",
        "field_id" : "464",
        "field_name" : "field_mls_bathrooms",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_bedrooms" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "4",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 0,
              "thousand_separator" : ","
            },
            "module" : "number"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "4",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 1,
              "scale" : 0,
              "thousand_separator" : ","
            },
            "module" : "number"
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_66 - Total Bed Rms",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Bedrooms",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 12
        },
        "id" : "473",
        "field_id" : "465",
        "field_name" : "field_mls_bedrooms",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_city" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "taxonomy_term_reference_link",
            "weight" : "18",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "taxonomy"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "11", "settings" : [] }
        },
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "3",
              "rets_field" : "LIST_39 - City (Post Office)"
            }
          },
          "hash_exclude" : 0
        },
        "ds_extras_field_template" : "",
        "fences_wrapper" : "div",
        "label" : "City",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "widget" : {
          "weight" : 9,
          "type" : "autocomplete_deluxe_taxonomy",
          "module" : "autocomplete_deluxe",
          "active" : 1,
          "settings" : {
            "size" : "60",
            "limit" : "10",
            "min_length" : "0",
            "delimiter" : "",
            "autocomplete_deluxe_path" : "autocomplete_deluxe\\/taxonomy"
          }
        },
        "id" : "474",
        "field_id" : "466",
        "field_name" : "field_mls_city",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_development" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "taxonomy_term_reference_link",
            "weight" : "19",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "taxonomy"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "10", "settings" : [] }
        },
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "3",
              "rets_field" : "LIST_77 - Location\\/Development"
            }
          },
          "hash_exclude" : 0
        },
        "ds_extras_field_template" : "",
        "fences_wrapper" : "div",
        "label" : "Development",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "widget" : {
          "weight" : 15,
          "type" : "autocomplete_deluxe_taxonomy",
          "module" : "autocomplete_deluxe",
          "active" : 1,
          "settings" : {
            "size" : "60",
            "limit" : "10",
            "min_length" : "0",
            "delimiter" : "",
            "autocomplete_deluxe_path" : "autocomplete_deluxe\\/taxonomy"
          }
        },
        "id" : "475",
        "field_id" : "467",
        "field_name" : "field_mls_development",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_garage" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "6",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 0,
              "thousand_separator" : ","
            },
            "module" : "number"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "13",
            "settings" : []
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_44 - #Car Bays",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Garage",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 19
        },
        "id" : "476",
        "field_id" : "468",
        "field_name" : "field_mls_garage",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_internal_id" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "15", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "24", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_1 - Internal Listing ID",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "MLS Internal ID",
        "placeholder" : "",
        "required" : 1,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 0
        },
        "id" : "477",
        "field_id" : "469",
        "field_name" : "field_mls_internal_id",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_list_price" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "hidden",
            "type" : "number_decimal",
            "weight" : "3",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 1,
              "scale" : 2,
              "thousand_separator" : ","
            },
            "module" : "number"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "hidden",
            "type" : "number_decimal",
            "weight" : "3",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "2",
              "prefix_suffix" : 1,
              "empty_fields_handler" : "",
              "empty_fields_emptyfieldtext_empty_text" : ""
            },
            "module" : "number"
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_22 - List Price",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "List Price",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "$",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 3
        },
        "id" : "478",
        "field_id" : "470",
        "field_name" : "field_mls_list_price",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_listing_area" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "6", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "16", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_29 - County\\/Municipality",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Listing Area",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 4
        },
        "id" : "479",
        "field_id" : "471",
        "field_name" : "field_mls_listing_area",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_listing_office" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "text_plain",
            "weight" : "5",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "text"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "12",
            "settings" : []
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 3,
              "conid" : 1,
              "rets_field" : "listing_office_name - ListingOfficeName",
              "rid" : 3
            }
          }
        },
        "ds_extras_field_template" : "",
        "fences_wrapper" : "div",
        "label" : "Listing Office",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 31
        },
        "id" : "480",
        "field_id" : "472",
        "field_name" : "field_mls_listing_office",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_number" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "0",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "text"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "0",
            "settings" : {
              "empty_fields_handler" : "",
              "empty_fields_emptyfieldtext_empty_text" : ""
            },
            "module" : "text"
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_105 - Listing ID",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "MLS #",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 1
        },
        "id" : "481",
        "field_id" : "473",
        "field_name" : "field_mls_number",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_photos" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "description" : "",
        "display" : {
          "default" : {
            "label" : "hidden",
            "type" : "image",
            "weight" : "2",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "no image",
              "empty_fields_handler" : "",
              "image_link" : "",
              "image_style" : "c21wide"
            },
            "module" : "image"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "hidden",
            "type" : "image",
            "weight" : "2",
            "settings" : {
              "image_style" : "c21wide",
              "image_link" : "content",
              "empty_fields_handler" : "",
              "empty_fields_emptyfieldtext_empty_text" : ""
            },
            "module" : "image"
          }
        },
        "ds_extras_field_template" : "",
        "fences_wrapper" : "div",
        "label" : "Photos",
        "required" : 0,
        "settings" : {
          "alt_field" : 0,
          "custom_add_another" : "",
          "custom_remove" : "",
          "default_image" : 0,
          "file_directory" : "mls",
          "file_extensions" : "png gif jpg jpeg",
          "max_filesize" : "",
          "max_resolution" : "",
          "min_resolution" : "",
          "title_field" : 0,
          "user_register_form" : false,
          "focus" : 0,
          "focus_min_size" : "",
          "focus_lock_ratio" : 0
        },
        "widget" : {
          "active" : 1,
          "module" : "image",
          "settings" : {
            "filefield_sources" : {
              "filefield_sources" : {
                "attach" : 0,
                "clipboard" : 0,
                "plupload" : 0,
                "reference" : 0,
                "remote" : 0,
                "upload" : "upload"
              },
              "source_attach" : { "absolute" : 0, "attach_mode" : "move", "path" : "file_attach" },
              "source_imce" : { "imce_mode" : 0 },
              "source_reference" : { "autocomplete" : 0 }
            },
            "preview_image_style" : "thumbnail",
            "progress_indicator" : "throbber"
          },
          "type" : "image_image",
          "weight" : 2
        },
        "id" : "482",
        "field_id" : "474",
        "field_name" : "field_mls_photos",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_school_district" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "taxonomy_term_reference_link",
            "weight" : "20",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "taxonomy"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "taxonomy_term_reference_link",
            "weight" : "6",
            "settings" : {
              "empty_fields_handler" : "",
              "empty_fields_emptyfieldtext_empty_text" : ""
            },
            "module" : "taxonomy"
          }
        },
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "3",
              "rets_field" : "LIST_93 - School District"
            }
          },
          "hash_exclude" : 0
        },
        "ds_extras_field_template" : "",
        "fences_wrapper" : "div",
        "label" : "School District",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "widget" : {
          "weight" : 16,
          "type" : "autocomplete_deluxe_taxonomy",
          "module" : "autocomplete_deluxe",
          "active" : 1,
          "settings" : {
            "size" : "60",
            "limit" : "10",
            "min_length" : "0",
            "delimiter" : "",
            "autocomplete_deluxe_path" : "autocomplete_deluxe\\/taxonomy"
          }
        },
        "id" : "483",
        "field_id" : "475",
        "field_name" : "field_mls_school_district",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_square_feet" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "7", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "7",
            "settings" : {
              "decimal_separator" : ".",
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : "",
              "prefix_suffix" : 0,
              "scale" : 0,
              "thousand_separator" : " "
            },
            "module" : "number"
          }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_48 - Total SqFt.",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Square Feet",
        "required" : 0,
        "settings" : {
          "custom_add_another" : "",
          "custom_remove" : "",
          "max" : "",
          "min" : "",
          "prefix" : "",
          "suffix" : "",
          "user_register_form" : false
        },
        "widget" : {
          "active" : 0,
          "module" : "html5_tools",
          "settings" : [],
          "type" : "numberfield",
          "weight" : 20
        },
        "id" : "484",
        "field_id" : "476",
        "field_name" : "field_mls_square_feet",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_state" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "13", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "22", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_40 - State\\/Province",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "State",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 10
        },
        "id" : "485",
        "field_id" : "477",
        "field_name" : "field_mls_state",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_direction" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "10", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "19", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_33 - Street Direction Pfx",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Street Direction Prefix",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 6
        },
        "id" : "486",
        "field_id" : "478",
        "field_name" : "field_mls_street_direction",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_name" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "11", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "20", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_34 - Street Name",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Street Name",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 7
        },
        "id" : "487",
        "field_id" : "479",
        "field_name" : "field_mls_street_name",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_number" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "9", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "18", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_31 - Street Number",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Street Number",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 5
        },
        "id" : "488",
        "field_id" : "480",
        "field_name" : "field_mls_street_number",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_suffix" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "12", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "21", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_37 - Street Suffix",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Street Suffix",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 8
        },
        "id" : "489",
        "field_id" : "481",
        "field_name" : "field_mls_street_suffix",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_tax_map" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "8", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "17", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_80 - Tax ID Number",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Tax Map #",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 14
        },
        "id" : "490",
        "field_id" : "482",
        "field_name" : "field_mls_tax_map",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_year_built" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "8",
            "settings" : {
              "empty_fields_emptyfieldtext_empty_text" : "",
              "empty_fields_handler" : ""
            },
            "module" : "text"
          },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "15",
            "settings" : []
          }
        },
        "drealty" : { "hash_exclude" : 0 },
        "fences_wrapper" : "div",
        "label" : "Year Built",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 17
        },
        "id" : "491",
        "field_id" : "483",
        "field_name" : "field_mls_year_built",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_zipcode" : {
        "custom_add_another" : "",
        "custom_remove" : "",
        "default_value" : null,
        "description" : "",
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "14", "settings" : [] },
          "gallery" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "list" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "search" : { "label" : "above", "settings" : [], "type" : "hidden", "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "23", "settings" : [] }
        },
        "drealty" : {
          "hash_exclude" : 0,
          "mappings" : { "1_3_A" : {
              "class_id" : 1,
              "conid" : 1,
              "rets_field" : "LIST_43 - Zip Code",
              "rid" : 3
            }
          }
        },
        "fences_wrapper" : "div",
        "label" : "Zipcode",
        "placeholder" : "",
        "required" : 0,
        "settings" : {
          "better_formats" : {
            "allowed_formats" : {
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text",
              "rich_text" : "rich_text"
            },
            "allowed_formats_toggle" : 0,
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "filtered_html" : { "weight" : 0 },
                "full_html" : { "weight" : 1 },
                "plain_text" : { "weight" : 10 },
                "rich_text" : { "weight" : 0 }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "text_processing" : 0,
          "user_register_form" : false
        },
        "widget" : {
          "active" : 1,
          "module" : "text",
          "settings" : { "size" : 60 },
          "type" : "text_textfield",
          "weight" : 11
        },
        "id" : "492",
        "field_id" : "484",
        "field_name" : "field_mls_zipcode",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      }
    }
  }');
  return $items;
}
