<?php
/**
 * Define Plugin
 */
$plugin = array(
  'title' => t('Site title'),
  'description' => t('Provides a pane that displays site title linked.'),
  'single' => TRUE,
  'content_types' => array('dc_sitename_content_type'),
  'render callback' => 'dc_sitename_content_type_render',
  'category' => t('Widgets'),
);

/**
 * Run-time rendering of the pane.
 */
function dc_sitename_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $title = variable_get('site_name', '');
  $block->content = '<div id="site-name">' . l($title, '<front>') . '</div>';
  return $block;
}
