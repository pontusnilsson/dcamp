<?php
/**
 * @file
 * dc_media.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function dc_media_image_default_styles() {
  $styles = array();

  // Exported image style: dc_teaser.
  $styles['dc_teaser'] = array(
    'name' => 'dc_teaser',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '340',
          'height' => '226',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}
