(function ($) {
  Drupal.behaviors.c21_listings = {
    attach: function(context, settings) {
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
        formItems = $('.group-listing-building-info .form-wrapper').not('.field-name-field-listing-building-type');
        if ($(this).val() === 'land') {
          formItems.slideUp('slow');
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
    }
  };
})(jQuery);











