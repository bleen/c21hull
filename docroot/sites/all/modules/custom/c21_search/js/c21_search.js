(function ($) {

Drupal.behaviors.c21SearchForm = {
  attach: function (context) {
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
        widget.find('.slider-num-min').html(ui.values[0]);
        widget.find('.slider-num-max').html(ui.values[1]);
      });
      widget.find('.slider-num-min').html($(this).slider("values", 0));
      widget.find('.slider-num-max').html($(this).slider("values", 1));
    });
  }
};

})(jQuery);
