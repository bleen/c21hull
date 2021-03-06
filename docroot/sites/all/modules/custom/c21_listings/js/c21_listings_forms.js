(function ($) {
  Drupal.c21 = Drupal.c21 || {};

  Drupal.behaviors.c21_listings = {
    attach: function(context, settings) {
      // Provide the vertical tab summaries.
      fieldset = $('.group-listing-transaction-dtls', context);
      fields = {'field-listing-closing-date':'text', 'field-listing-sale-price':'text', 'field-listing-gross-commission':'text'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-general-info', context);
      fields = {'field-listing-type':'select', 'field-listing-list-date':'date range', 'field-listing-zoning':'select', 'field-listing-list-price':'text'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-building-info', context);
      fields = {'field-listing-building-type':'select', 'field-listing-bedrooms':'text', 'field-listing-bathrooms':'text'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-measurements', context);
      fields = {'field-listing-sq-ft-above':'text', 'field-listing-sq-ft-below':'text', 'field-listing-sq-ft-finished':'text'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-location-info', context);
      fields = {'field-listing-township':'text', 'field-listing-development':'text', 'field-listing-school-district':'text'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-buyers', context);
      fields = {'field-listing-buyer1':'person', 'field-listing-buyer2':'person'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      fieldset = $('.group-listing-sellers', context);
      fields = {'field-listing-seller1':'person', 'field-listing-seller2':'person'};
      Drupal.c21.drupalSetSummary(fieldset, fields);

      // Hide the "former" agents and add a "show former agents" link.
      $.get('/ajax/agents', function(agents) {
        $('.field-agents .form-checkboxes .form-item input:not(:checked)').each(function(context) {
          if (agents[$(this).val()]['status'] === 'former') {
            $(this).parent('.form-item').hide();
          }
        });

        $('.field-agents .form-type-checkboxes > label').append('<a href="" class="show-agents">Show former agents</a>');
        $('.show-agents').click(function(event) {
          event.preventDefault();
          $('.field-agents .form-checkboxes .form-item').fadeIn('slow');
          $(this).hide();
        });
      });

      // Show/Hide the building details form if "building type" is set to (or
      // from) land.
      $('select[name="field_listing_building_type[und]"]').change(function(event, context) {
        formItems = $('.group-listing-building-info .form-wrapper').not('#edit-field-listing-building-type').not('#edit-field-listing-sewage').not('#edit-field-listing-water');
        if ($(this).val() === 'land') {
          formItems.find('select').val("");
          formItems.slideUp('slow', function() { $(this).css('display', 'none'); });
        }
        else {
          formItems.slideDown('slow');
        }
      });
      $('select[name="field_listing_building_type[und]"]').change();

      // Show/Hide transaction information depending on status.
      $('.field-name-field-listing-status select').change(function(event, context){
        if ($(this).val() === 'sold') {
          $('.group-listing-transaction').slideDown('slow');
        }
        else {
          $('.group-listing-transaction').slideUp('slow');
        }
      });
      $('.field-name-field-listing-status select').change();

      // Show/Hide the prefix/suffix for commission based on its current value.
      $(':input[name="field_listing_commission[und][0][value]"]').siblings('.field-prefix').hide();
      $(':input[name="field_listing_commission[und][0][value]"]').keyup(function (event) {
        if ($(this).val() <= 100) {
          $(this).siblings('.field-prefix').hide();
          $(this).siblings('.field-suffix').show();
        }
        else {
          $(this).siblings('.field-prefix').show();
          $(this).siblings('.field-suffix').hide();
        }
      });
      $(':input[name="field_listing_commission[und][0][value]"]').keyup();

      // If the user hit "back" to get to a node/add page, reset the values to
      // avoid duplication.
      $(window).bind("pageshow", function() {
        if (document.location.pathname == '/node/add/listing') {
          var form = $("form");
          form[0].reset();
        }
      });
    }
  };

  Drupal.c21.drupalSetSummary = function(fieldset, fields) {
    fieldset.drupalSetSummary(function(context) {
      var vals = [];

      $.each(fields, function(key, value) {
        label = $('.field-name-' + key).find('label').first().text().replace(/\*$/, "").trim();

        switch(value) {
          case 'text':
            field = $('.field-name-' + key).find('input').first().val();
            break;
          case 'select':
            field = $('.field-name-' + key).find(':selected').first().text();
            break;
          case 'date range':
            field = [];
            $('.field-name-' + key).find('input').each(function(context){
              field.push($(this).val());
            });
            field = field.join(' to ');
            break;
          case 'person':
            var field = '';
            $('.field-name-' + key + '-name input').each(function(context) {
              field += $(this).val() + ' ';
            });
            break;
          default:
            field = '';
        }

        vals.push(label === '' ? field : label + ': ' + field);
      });

      return vals.join('<br/>');
    });
  };

})(jQuery);
