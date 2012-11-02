/**
 *  Thanks to http://webdesignerwall.com/tutorials/html5-grayscale-image-hover
 */
// We define a function that takes one parameter named $.
(function ($) {
  // On window load. This waits until images have loaded which is essential
  $(window).load(function() {
    var imageel = '.dc-image img';
    // clone image
    $(imageel).each(function() {
      var el = $(this);
      el.css({
        "position":"absolute"
      }).wrap("<div class='img-wrapper' style='display: inline-block'>").clone().addClass('img-grayscale-original').css({
        "position":"absolute",
        "z-index":"998"
      }).insertBefore(el).queue(function(){
        var el = $(this);
        el.parent().css({
          "width":this.width,
          "height":this.height
        });
        el.dequeue();
      });
      if(!$.browser.msie)
        this.src = grayscale(this.src);
    });
  });

  // Grayscale w canvas method
  function grayscale(src) {
    var canvas = document.createElement('canvas');
    var ctx = canvas.getContext('2d');
    var imgObj = new Image();
    imgObj.src = src;
    canvas.width = imgObj.width;
    canvas.height = imgObj.height;
    ctx.drawImage(imgObj, 0, 0);
    var imgPixels = ctx.getImageData(0, 0, canvas.width, canvas.height);
    for(var y = 0; y < imgPixels.height; y++) {
      for(var x = 0; x < imgPixels.width; x++) {
        var i = (y * 4) * imgPixels.width + x * 4;
        var avg = (imgPixels.data[i] + imgPixels.data[i + 1] + imgPixels.data[i + 2]) / 3;
        imgPixels.data[i] = avg;
        imgPixels.data[i + 1] = avg;
        imgPixels.data[i + 2] = avg;
      }
    }
    ctx.putImageData(imgPixels, 0, 0, 0, 0, imgPixels.width, imgPixels.height);
    return canvas.toDataURL();
  }
}
(jQuery));
