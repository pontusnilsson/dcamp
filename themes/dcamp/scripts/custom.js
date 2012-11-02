/**
 *  Thanks to http://webdesignerwall.com/tutorials/html5-grayscale-image-hover
 */
// We define a function that takes one parameter named $.
(function ($) {
  // On window load. This waits until images have loaded which is essential
  // $(document).ready(function() {
  $(window).load(function() {
    var imageel = '.dc-image img:not(div.grey img)';
    // Fade in images so there isn't a color "pop" document load and then on window load
    $(imageel).animate({
      opacity:1
    },200);
  });

}
(jQuery));
