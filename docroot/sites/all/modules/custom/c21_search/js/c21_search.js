(function ($) {

Drupal.c21Search = Drupal.c21Search || {};

// Attach drupal behaviors.
Drupal.behaviors.c21SearchForm = {
  attach: function (context) {
    // Add text indicators to range sliders and hide the min/max form fields.
    var sliders = $('#views-exposed-form-c21-search-listings-page').find('.bef-slider');
    sliders.each(function(context) {
      var widget = $(this).siblings('.views-widget');
      widget.find('label').hide();
      widget.find('input[id$="min"]').each(function() {
        val = $(this).val();
        $(this).after('<span class="slider-num slider-num-min">' + val + '</span>').hide();
      });
      widget.find('input[id$="max"]').each(function() {
        val = $(this).val();
        $(this).after('<span class="slider-num slider-num-max">' + val + '</span>').hide();
      });

      $(this).bind("slide", function(event, ui) {
        min = Drupal.c21Search.commaSeparateNumber(ui.values[0]);
        max = Drupal.c21Search.commaSeparateNumber(ui.values[1]);

        // If the max value is currently the maximum possible value then change
        // it to be "Any".
        if (ui.values[1] >= $(this).slider("option", "max")) {
          max = Drupal.t('Any');
        }

        widget.find('.slider-num-min').html(min);
        widget.find('.slider-num-max').html(max);
      });
    });

    // Include jquery.hammer.min.js and call the toggle form.
    yepnope({
      test: Modernizr.touch,
      yep: {
        'hammer': '/sites/all/themes/escrow/js/jquery.hammer.min.js'
      },
      callback: {
        'hammer': function (url, result, key) {
          Drupal.c21Search.toggleFormTouch();
        }
      }
    });

    // Add click support for toggling the form for those devices not supporting
    // touch.
    Drupal.c21Search.toggleFormClick();
    $('.search-form').removeClass('open').addClass('closed');

  }
};

// Handle the opening and closing of the form based on a drag gesture.
Drupal.c21Search.toggleFormTouch = function () {
  hammertime = $('.search-form .toggle').hammer({drag_block_vertical: true});
  hammertime.on("dragup", function(event) {
    $('.search-form').removeClass('closed').addClass('open');
  });
  hammertime.on("dragdown", function(event) {
    $('.search-form').removeClass('open').addClass('closed');
  });
};

// Handle the opening and closing of the form based on a drag gesture.
Drupal.c21Search.toggleFormClick = function () {
  if (!Modernizr.touch) {
    $('.search-form .toggle').toggle(
      function() { $('.search-form').removeClass('closed').addClass('open'); },
      function() { $('.search-form').removeClass('open').addClass('closed'); }
    );
  }
};

// Helper function to add commas to numbers.
Drupal.c21Search.commaSeparateNumber = function (val) {
  while (/(\d+)(\d{3})/.test(val.toString())){
    val = val.toString().replace(/(\d+)(\d{3})/, '$1'+','+'$2');
  }
  return val;
};

})(jQuery);
