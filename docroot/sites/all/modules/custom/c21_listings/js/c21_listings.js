// (function ($) {

//   Drupal.c21Listings = Drupal.c21Listings || {};

//   Drupal.behaviors.c21Listings = {
//     attach: function(context) {
//       Drupal.c21Listings.featuredPhotoSwap(context);
//     }
//   };

//   Drupal.c21Listings.featuredPhotoSwap = function(context) {
//     $('.listing-photos figure').css('cursor', 'pointer').click(function(context) {
//       featured = $('.featured-photo').html();
//       $('.featured-photo').html($(this).html()).fadeIn('fast');
//       $(this).html(featured);
//     });
//   };

// })(jQuery);
