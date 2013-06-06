<?php

$floors = array(
  'f1' => 'Floor 1',
  'f2' => 'Floor 2',
  'b' => 'Basement',
);

$rooms = array(
  'living_room' => 'Living Room',
  'dining_room' => 'Dining Room',
  'kitchen' => 'Kitchen',
  'liv_din' => 'Living/Dining Room',
  'din_kitchen' => 'Dining/Kitchen',
  'bathroom1' => 'Bathroom 1',
  'bathroom2' => 'Bathroom 2',
  'bathroom3' => 'Bathroom 3',
  'bedroom1' => 'Bedroom 1',
  'bedroom2' => 'Bedroom 2',
  'bedroom3' => 'Bedroom 3',
  'bedroom4' => 'Bedroom 4',
  'family_room' => 'Family Room',
  'laundry' => 'Laundry',
  'other1' => 'Other 1',
  'other2' => 'Other 2',
);

foreach ($floors as $fl => $floor) {
  foreach ($rooms as $r => $room) {
    // Print all bases
    $output  = "  // Exported field_base: 'field_listing_field_listing_" . $r ."_" . $fl . "'" . "\n";
    $output .= "  \$field_bases['field_listing_" . $r ."_" . $fl . "'] = array(" . "\n";
    $output .= "    'active' => 1," . "\n";
    $output .= "    'cardinality' => 1," . "\n";
    $output .= "    'deleted' => 0," . "\n";
    $output .= "    'field_name' => 'field_listing_" . $r ."_" . $fl . "'," . "\n";
    $output .= "    'entity_types' => array()," . "\n";
    $output .= "    'foreign keys' => array(" . "\n";
    $output .= "      'format' => array(" . "\n";
    $output .= "        'columns' => array(" . "\n";
    $output .= "          'format' => 'format'," . "\n";
    $output .= "        )," . "\n";
    $output .= "        'table' => 'filter_format'," . "\n";
    $output .= "      )," . "\n";
    $output .= "    )," . "\n";
    $output .= "    'indexes' => array(" . "\n";
    $output .= "      'format' => array(" . "\n";
    $output .= "        0 => 'format'," . "\n";
    $output .= "      )," . "\n";
    $output .= "    )," . "\n";
    $output .= "    'locked' => 0," . "\n";
    $output .= "    'module' => 'text'," . "\n";
    $output .= "    'settings' => array(" . "\n";
    $output .= "      'max_length' => 255," . "\n";
    $output .= "    )," . "\n";
    $output .= "    'translatable' => 0," . "\n";
    $output .= "    'type' => 'text'," . "\n";
    $output .= "  );" . "\n";

    print $output . "\n";
  }
}

print "\n\n\n---------------------------------\n\n\n\n";


foreach ($floors as $fl => $floor) {
  foreach ($rooms as $r => $room) {
    // Print all instances
    $output  = "  // Exported field_instance: 'node-listing-field_listing_" . $r ."_" . $fl . "'" . "\n";
    $output .= "  \$field_instances['node-listing-field_listing_" . $r ."_" . $fl . "'] = array(" . "\n";
    $output .= "    'bundle' => 'listing'," . "\n";
    $output .= "    'default_value' => NULL," . "\n";
    $output .= "    'deleted' => 0," . "\n";
    $output .= "    'description' => ''," . "\n";
    $output .= "    'display' => array(" . "\n";
    $output .= "      'default' => array(" . "\n";
    $output .= "        'label' => 'above'," . "\n";
    $output .= "        'module' => 'text'," . "\n";
    $output .= "        'settings' => array()," . "\n";
    $output .= "        'type' => 'text_default'," . "\n";
    $output .= "        'weight' => 54," . "\n";
    $output .= "      )," . "\n";
    $output .= "      'teaser' => array(" . "\n";
    $output .= "        'label' => 'above'," . "\n";
    $output .= "        'settings' => array()," . "\n";
    $output .= "        'type' => 'hidden'," . "\n";
    $output .= "        'weight' => 0," . "\n";
    $output .= "      )," . "\n";
    $output .= "    )," . "\n";
    $output .= "    'entity_type' => 'node'," . "\n";
    $output .= "    'field_name' => 'field_listing_" . $r ."_" . $fl . "'," . "\n";
    $output .= "    'label' => '" . $room . " | " . $floor . "'," . "\n";
    $output .= "    'required' => 0," . "\n";
    $output .= "    'settings' => array(" . "\n";
    $output .= "      'text_processing' => 0," . "\n";
    $output .= "      'user_register_form' => FALSE," . "\n";
    $output .= "    )," . "\n";
    $output .= "    'widget' => array(" . "\n";
    $output .= "      'active' => 1," . "\n";
    $output .= "      'module' => 'text'," . "\n";
    $output .= "      'settings' => array(" . "\n";
    $output .= "        'size' => 60," . "\n";
    $output .= "      )," . "\n";
    $output .= "      'type' => 'text_textfield'," . "\n";
    $output .= "      'weight' => 57," . "\n";
    $output .= "    )," . "\n";
    $output .= "  );" . "\n";

    print $output . "\n";
  }
}

print "\n\n\n---------------------------------\n\n\n\n";

foreach ($floors as $fl => $floor) {
  foreach ($rooms as $r => $room) {
    print "features[field_base][] = field_listing_" . $r ."_" . $fl . "\n";
  }
}
foreach ($floors as $fl => $floor) {
  foreach ($rooms as $r => $room) {
    print "features[field_instance][] = node-listing-field_listing_" . $r ."_" . $fl . "\n";
  }
}
