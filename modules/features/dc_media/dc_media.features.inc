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
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '340',
          'height' => '226',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
