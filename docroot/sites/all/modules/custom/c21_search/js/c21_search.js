(function ($) {

Drupal.c21Search = Drupal.c21Search || {};

// Attach drupal behaviors.
Drupal.behaviors.c21SearchForm = {
  attach: function (context) {
    // Add text indicators to range sliders and hide the min/max form fields.
    var sliders = $('#views-exposed-form-c21-search-listings-page .bef-slider');
    sliders.each(function(context) {
      var widget = $(this).siblings('.views-widget');
      widget.find('label').hide();
      widget.find('input[id$="min"]')
        .after('<span class="slider-num slider-num-min"></span>')
        .hide();
      widget.find('input[id$="max"]')
        .after('<span class="slider-num slider-num-max"></span>')
        .hide();

      $(this).bind("slide", function(event, ui) {
        widget.find('.slider-num-min').html(Drupal.c21Search.commaSeparateNumber(ui.values[0]));
        widget.find('.slider-num-max').html(Drupal.c21Search.commaSeparateNumber(ui.values[1]));
      });
      widget.find('.slider-num-min').html(Drupal.c21Search.commaSeparateNumber($(this).slider("values", 0)));
      widget.find('.slider-num-max').html(Drupal.c21Search.commaSeparateNumber($(this).slider("values", 1)));
    });

    // Include jquery.hammer.min.js and call the toggle form.
    yepnope({
      test: Modernizr.touch,
      yep: {
        'hammer': '/sites/all/themes/escrow/js/jquery.hammer.min.js',
        'touch-punch': '/sites/all/themes/escrow/js/jquery.ui.touch-punch.min.js'
      },
      callback: {
        'touch-punch': function (url, result, key) {
          Drupal.c21Search.toggleFormTouch();
        }
      }
    });

    // Add click support for toggling the form for those
    Drupal.c21Search.toggleFormClick();

  }
};

// Handle the opening and closing of the form based on a drag gesture.
Drupal.c21Search.toggleFormTouch = function () {
  hammertime = $('#block-views-exp-c21-search-listings-page').hammer({drag_block_vertical: true});
  hammertime.on("dragup", function(event) {
    hammertime.removeClass('closed').addClass('open');
  });
  hammertime.on("dragdown", function(event) {
    hammertime.removeClass('open').addClass('closed');
  });
};

// Handle the opening and closing of the form based on a drag gesture.
Drupal.c21Search.toggleFormClick = function () {
  if (!Modernizr.touch) {
    console.log($('#block-views-exp-c21-search-listings-page .toggle'));
    $('#block-views-exp-c21-search-listings-page .toggle').toggle(
      function() { $('#block-views-exp-c21-search-listings-page').removeClass('open').addClass('closed'); },
      function() { $('#block-views-exp-c21-search-listings-page').removeClass('closed').addClass('open'); }
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
