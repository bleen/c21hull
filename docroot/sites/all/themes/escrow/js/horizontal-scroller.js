(function ($) {

  Drupal.horizontalScroller = Drupal.horizontalScroller || {};

  Drupal.behaviors.horizontalScroller = {
    attach: function(context) {
      Drupal.horizontalScroller.resize(context);
    }
  };

  Drupal.horizontalScroller.resize = function(context) {
    $('.horizontal-scroller .figures').each(function(context) {
      var width = 0;
      $(this).children('figure').each(function(){ width += $(this).width() + parseInt($(this).css('margin-right'), 10); });
      $(this).width(width);
    });
  };

})(jQuery);
