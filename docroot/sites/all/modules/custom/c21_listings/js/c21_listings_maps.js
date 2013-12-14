(function ($) {
  Drupal.c21ListingsMaps = Drupal.c21ListingsMaps || {};

  Drupal.behaviors.c21ListingsMaps = {
    attach: function(context) {
      Drupal.c21ListingsMaps.initialize(context);
    }
  };

  Drupal.c21ListingsMaps.initialize = function(context) {
    $('.listing-map').each(function(){
      var geocoder = new google.maps.Geocoder();
      var entityId = $(this).attr('listing-map-id');
      var address = $(this).attr('data-listing-address');

      geocoder.geocode( { 'address': address}, function(results, status) {
        if (status == google.maps.GeocoderStatus.OK) {
          mapOptions = {
            zoom: 12,
            center: results[0].geometry.location,
            mapTypeId: google.maps.MapTypeId.ROADMAP,
            panControl: false,
            zoomControl: true,
            scaleControl: false
          }
          var map = new google.maps.Map(document.getElementById('listing-map-' + entityId), mapOptions);
          var marker = new google.maps.Marker({
            map: map,
            position: results[0].geometry.location
          });
        }
        else {
          $(this).addClass('no-map');
        }
      });
    });
  };

})(jQuery);
