<?php
/**
 * @file
 * c21_rets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c21_rets_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
      "field_mls_photos" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "uri_scheme" : "public", "default_image" : 0 },
        "foreign keys" : { "fid" : { "table" : "file_managed", "columns" : { "fid" : "fid" } } },
        "indexes" : { "fid" : [ "fid" ] },
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
      "field_mls_internal_id" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_internal_id",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_number" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_number",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_list_price" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "2", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_list_price",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "2",
            "not null" : false
          }
        }
      },
      "field_mls_listing_area" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_listing_area",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_number" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_street_number",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_direction" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_street_direction",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_name" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_street_name",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_street_suffix" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_street_suffix",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_city" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_city",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_state" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_state",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_zipcode" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_zipcode",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_bedrooms" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_bedrooms",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_mls_bathrooms" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "1", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_bathrooms",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "1",
            "not null" : false
          }
        }
      },
      "field_mls_development" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_development",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_tax_map" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_tax_map",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_school_district" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_school_district",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      },
      "field_mls_acreage" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "4", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_acreage",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "4",
            "not null" : false
          }
        }
      },
      "field_mls_garage" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : [],
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_garage",
        "type" : "number_integer",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : { "type" : "int", "not null" : false } }
      },
      "field_mls_square_feet" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "precision" : "10", "scale" : "2", "decimal_separator" : "." },
        "foreign keys" : [],
        "indexes" : [],
        "field_name" : "field_mls_square_feet",
        "type" : "number_decimal",
        "module" : "number",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : { "value" : {
            "type" : "numeric",
            "precision" : "10",
            "scale" : "2",
            "not null" : false
          }
        }
      },
      "field_mls_year_built" : {
        "translatable" : "0",
        "entity_types" : [ "drealty_listing" ],
        "settings" : { "max_length" : "255" },
        "foreign keys" : { "format" : { "table" : "filter_format", "columns" : { "format" : "format" } } },
        "indexes" : { "format" : [ "format" ] },
        "field_name" : "field_mls_year_built",
        "type" : "text",
        "module" : "text",
        "active" : "1",
        "locked" : "0",
        "cardinality" : "1",
        "deleted" : "0",
        "columns" : {
          "value" : { "type" : "varchar", "length" : "255", "not null" : false },
          "format" : { "type" : "varchar", "length" : 255, "not null" : false }
        }
      }
    },
    "field_instances" : {
      "field_mls_photos" : {
        "label" : "Photos",
        "widget" : {
          "weight" : "2",
          "type" : "image_image",
          "module" : "image",
          "active" : 1,
          "settings" : {
            "progress_indicator" : "throbber",
            "preview_image_style" : "thumbnail",
            "filefield_sources" : {
              "filefield_sources" : {
                "upload" : "upload",
                "plupload" : 0,
                "remote" : 0,
                "clipboard" : 0,
                "reference" : 0,
                "attach" : 0
              },
              "source_attach" : { "path" : "file_attach", "absolute" : "0", "attach_mode" : "move" },
              "source_imce" : { "imce_mode" : 0 },
              "source_reference" : { "autocomplete" : "0" }
            }
          }
        },
        "settings" : {
          "file_directory" : "mls",
          "file_extensions" : "png gif jpg jpeg",
          "max_filesize" : "",
          "max_resolution" : "",
          "min_resolution" : "",
          "alt_field" : 0,
          "title_field" : 0,
          "default_image" : 0,
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "hidden",
            "type" : "image",
            "weight" : "1",
            "settings" : { "image_style" : "c21wide", "image_link" : "" },
            "module" : "image"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "hidden",
            "type" : "image",
            "weight" : "1",
            "settings" : { "image_style" : "c21wide", "image_link" : "content" },
            "module" : "image"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "fences_wrapper" : "div",
        "id" : "154",
        "field_id" : "149",
        "field_name" : "field_mls_photos",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_internal_id" : {
        "label" : "MLS Internal ID",
        "widget" : {
          "weight" : "0",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "17", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "20", "settings" : [] }
        },
        "required" : 1,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_1 - Internal Listing ID"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "155",
        "field_id" : "150",
        "field_name" : "field_mls_internal_id",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_number" : {
        "label" : "MLS #",
        "widget" : {
          "weight" : "1",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "0",
            "settings" : [],
            "module" : "text"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "0",
            "settings" : [],
            "module" : "text"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_105 - Listing ID"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "156",
        "field_id" : "151",
        "field_name" : "field_mls_number",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_list_price" : {
        "label" : "List Price",
        "widget" : {
          "weight" : "3",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "$",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "hidden",
            "type" : "number_decimal",
            "weight" : "2",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "2",
              "prefix_suffix" : 1
            },
            "module" : "number"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "hidden",
            "type" : "number_decimal",
            "weight" : "2",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "2",
              "prefix_suffix" : 1
            },
            "module" : "number"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_22 - List Price"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "157",
        "field_id" : "152",
        "field_name" : "field_mls_list_price",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_listing_area" : {
        "label" : "Listing Area",
        "widget" : {
          "weight" : "4",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "8", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "12", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_29 - County\\/Municipality"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "158",
        "field_id" : "153",
        "field_name" : "field_mls_listing_area",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_number" : {
        "label" : "Street Number",
        "widget" : {
          "weight" : "5",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "11", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "14", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_31 - Street Number"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "159",
        "field_id" : "154",
        "field_name" : "field_mls_street_number",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_direction" : {
        "label" : "Street Direction Prefix",
        "widget" : {
          "weight" : "6",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "12", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "15", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_33 - Street Direction Pfx"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "160",
        "field_id" : "155",
        "field_name" : "field_mls_street_direction",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_name" : {
        "label" : "Street Name",
        "widget" : {
          "weight" : "7",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "13", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "16", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_34 - Street Name"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "161",
        "field_id" : "156",
        "field_name" : "field_mls_street_name",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_street_suffix" : {
        "label" : "Street Suffix",
        "widget" : {
          "weight" : "8",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "14", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "17", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_37 - Street Suffix"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "162",
        "field_id" : "157",
        "field_name" : "field_mls_street_suffix",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_city" : {
        "label" : "City",
        "widget" : {
          "weight" : "9",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "weight" : "5",
            "settings" : [],
            "module" : "text"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "7", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_39 - City (Post Office)"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "163",
        "field_id" : "158",
        "field_name" : "field_mls_city",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_state" : {
        "label" : "State",
        "widget" : {
          "weight" : "10",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "15", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "18", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_40 - State\\/Province"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "164",
        "field_id" : "159",
        "field_name" : "field_mls_state",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_zipcode" : {
        "label" : "Zipcode",
        "widget" : {
          "weight" : "11",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "16", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "19", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_43 - Zip Code"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "165",
        "field_id" : "160",
        "field_name" : "field_mls_zipcode",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_bedrooms" : {
        "label" : "Bedrooms",
        "widget" : {
          "weight" : "12",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "4",
            "settings" : {
              "thousand_separator" : ",",
              "prefix_suffix" : 1,
              "decimal_separator" : ".",
              "scale" : 0
            },
            "module" : "number"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "3",
            "settings" : {
              "thousand_separator" : ",",
              "prefix_suffix" : 1,
              "decimal_separator" : ".",
              "scale" : 0
            },
            "module" : "number"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_66 - Total Bed Rms"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "166",
        "field_id" : "161",
        "field_name" : "field_mls_bedrooms",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_bathrooms" : {
        "label" : "Bathrooms",
        "widget" : {
          "weight" : "13",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "5",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "1",
              "prefix_suffix" : 1
            },
            "module" : "number"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "4",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "1",
              "prefix_suffix" : 1
            },
            "module" : "number"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_67 - Total All Baths"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "167",
        "field_id" : "162",
        "field_name" : "field_mls_bathrooms",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_development" : {
        "label" : "Development",
        "widget" : {
          "weight" : "14",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "weight" : "6",
            "settings" : [],
            "module" : "text"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "8", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_77 - Location\\/Development"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "168",
        "field_id" : "163",
        "field_name" : "field_mls_development",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_tax_map" : {
        "label" : "Tax Map #",
        "widget" : {
          "weight" : "15",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "10", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "above", "type" : "hidden", "weight" : "13", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_80 - Tax ID Number"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "169",
        "field_id" : "164",
        "field_name" : "field_mls_tax_map",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_school_district" : {
        "label" : "School District",
        "widget" : {
          "weight" : "16",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "above",
            "type" : "text_default",
            "weight" : "7",
            "settings" : [],
            "module" : "text"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "above",
            "type" : "text_default",
            "weight" : "6",
            "settings" : [],
            "module" : "text"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_93 - School District"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "170",
        "field_id" : "165",
        "field_name" : "field_mls_school_district",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_acreage" : {
        "label" : "Acreage",
        "widget" : {
          "weight" : "18",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "7",
            "settings" : {
              "thousand_separator" : ",",
              "decimal_separator" : ".",
              "scale" : "2",
              "prefix_suffix" : 1
            },
            "module" : "number"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "10",
            "settings" : []
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_57 - Acres"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "171",
        "field_id" : "166",
        "field_name" : "field_mls_acreage",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_garage" : {
        "label" : "Garage",
        "widget" : {
          "weight" : "19",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "number_integer",
            "weight" : "6",
            "settings" : {
              "thousand_separator" : ",",
              "prefix_suffix" : 1,
              "decimal_separator" : ".",
              "scale" : 0
            },
            "module" : "number"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : { "label" : "inline", "type" : "hidden", "weight" : "9", "settings" : [] }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_44 - #Car Bays"
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "172",
        "field_id" : "167",
        "field_name" : "field_mls_garage",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_square_feet" : {
        "label" : "Square Feet",
        "widget" : {
          "weight" : "20",
          "type" : "numberfield",
          "module" : "html5_tools",
          "active" : 0,
          "settings" : []
        },
        "settings" : {
          "min" : "",
          "max" : "",
          "prefix" : "",
          "suffix" : "",
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : { "label" : "above", "type" : "hidden", "weight" : "9", "settings" : [] },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "number_decimal",
            "weight" : "5",
            "settings" : {
              "thousand_separator" : " ",
              "decimal_separator" : ".",
              "scale" : 2,
              "prefix_suffix" : true
            },
            "module" : "number"
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : {
          "mappings" : { "1_3_A" : {
              "conid" : "1",
              "rid" : "3",
              "class_id" : "1",
              "rets_field" : "LIST_48 - Total SqFt."
            }
          },
          "hash_exclude" : 0
        },
        "fences_wrapper" : "div",
        "default_value" : null,
        "id" : "173",
        "field_id" : "168",
        "field_name" : "field_mls_square_feet",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      },
      "field_mls_year_built" : {
        "label" : "Year Built",
        "widget" : {
          "weight" : "17",
          "type" : "text_textfield",
          "module" : "text",
          "active" : 1,
          "settings" : { "size" : "60" }
        },
        "settings" : {
          "text_processing" : "0",
          "better_formats" : {
            "allowed_formats_toggle" : 0,
            "allowed_formats" : {
              "rich_text" : "rich_text",
              "filtered_html" : "filtered_html",
              "full_html" : "full_html",
              "plain_text" : "plain_text"
            },
            "default_order_toggle" : 0,
            "default_order_wrapper" : { "formats" : {
                "rich_text" : { "weight" : "0" },
                "filtered_html" : { "weight" : "0" },
                "full_html" : { "weight" : "1" },
                "plain_text" : { "weight" : "10" }
              }
            }
          },
          "custom_add_another" : "",
          "custom_remove" : "",
          "user_register_form" : false
        },
        "display" : {
          "default" : {
            "label" : "inline",
            "type" : "text_default",
            "weight" : "8",
            "settings" : [],
            "module" : "text"
          },
          "search" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "list" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "gallery" : { "type" : "hidden", "label" : "above", "settings" : [], "weight" : 0 },
          "teaser" : {
            "label" : "inline",
            "type" : "hidden",
            "weight" : "11",
            "settings" : []
          }
        },
        "required" : 0,
        "description" : "",
        "custom_add_another" : "",
        "custom_remove" : "",
        "drealty" : { "hash_exclude" : 0 },
        "fences_wrapper" : "div",
        "placeholder" : "",
        "default_value" : null,
        "id" : "174",
        "field_id" : "169",
        "field_name" : "field_mls_year_built",
        "entity_type" : "drealty_listing",
        "deleted" : "0"
      }
    }
  }');
  return $items;
}
