<?php
/**
 * Define Plugin
 */
$plugin = array(
  'title' => t('DC Site logo'),
  'description' => t('Provides markup for logo.'),
  'single' => TRUE,
  'content_types' => array('dc_logo_content_type'),
  'render callback' => 'dc_logo_content_type_render',
  'category' => t('Widgets'),
);

/**
 * Run-time rendering of the pane.
 */
function dc_logo_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $path = drupal_get_path('theme', 'dcamp');
  $block->content = '<a href="/"><img id="logo" src="' . $path .  '/logo.png"></a><a href="/"><img id ="logo2" src="' . $path .  '/logo2.png"></a><a href="/"><img id ="logo3" src="' . $path .  '/logo3.png"></a>';
  return $block;
}
