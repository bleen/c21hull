(function ($) {
  Drupal.behaviors.c21_listings = {
    attach: function(context, settings) {
      // Hide the "former" agents and add a "show former agents" link.
      $.get('/ajax/agents', function(agents) {
        $('.field-name-field-listing-agent .form-checkboxes .form-item input:not(:checked)').each(function(context) {
          if (agents[$(this).val()]['status'] === 'former') {
            $(this).parent('.form-item').hide();
          }
        });

        $('.field-name-field-listing-agent .form-type-checkboxes > label').append('<a href="" class="show-agents">Show former agents</a>');
        $('.show-agents').click(function(event) {
          event.preventDefault();
          $('.field-name-field-listing-agent .form-checkboxes .form-item').fadeIn('slow');
          $(this).hide();
        });
      });


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











