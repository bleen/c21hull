(function ($) {

  Drupal.behaviors.escrowBreakpoints = {
    attach: function(context) {
      $(window).setBreakpoints({
        distinct: true,
        breakpoints: [
          500,
          650,
          800
        ]
      });
    }
  };

})(jQuery);
