(function ($) {
  Drupal.c21ListingsMaps = Drupal.c21ListingsMaps || {};

  Drupal.behaviors.c21ListingsMaps = {
    attach: function(context) {
      Drupal.c21ListingsMaps.initialize(context);
    }
  };

  Drupal.c21ListingsMaps.initialize = function(context) {
    var geocoder = new google.maps.Geocoder();
    geocoder.geocode( { 'address': listing_address}, function(results, status) {
      if (status == google.maps.GeocoderStatus.OK) {
        mapOptions = {
          zoom: 8,
          center: results[0].geometry.location,
          mapTypeId: google.maps.MapTypeId.ROADMAP,
          zoomControl: true
        }
        var map = new google.maps.Map(document.getElementById('listing-map'), mapOptions);
        var marker = new google.maps.Marker({
          map: map,
          position: results[0].geometry.location
        });
      }
      else {
        $('#listing-map').addClass('no-map');
      }
    });
  };

})(jQuery);
