(function ($) {
  Drupal.behaviors.features = {
    attach: function(context, settings) {
      // Hide the "former" agents and add a "show former agents" link.
      $.get('/ajax/agents', function(agents) {
        $('select[name^="field_listing_agent"] option:not(:selected)').each(function(context) {
          if (agents[$(this).val()]['status'] === 'former') {
            $(this).remove();
          }
        });

        $('select[name^="field_listing_agent"]').after('<a href="" class="show-agents">Show former agents</a>');
        $('.show-agents').click(function(event) {
          event.preventDefault();

          for (var aid in agents) {
            if (agents[aid]['status'] === 'former') {
              $('select[name^="field_listing_agent"]').append(
                $("<option></option>").attr("value", aid).text(agents[aid]['full_name'])
              );
              $('select[name^="field_listing_agent"]').height("150");
              $('.show-agents').remove();
            }
          }
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











