<?php
/**
 * @file
 * dc_text.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function dc_text_filter_default_formats() {
  $formats = array();

  // Exported format: HTML editor.
  $formats['dc_editor'] = array(
    'format' => 'dc_editor',
    'name' => 'HTML editor',
    'cache' => '0',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <table> <thead> <tbody> <td> <tr>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_lexicon' => array(
        'weight' => '50',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['dc_fullhtml'] = array(
    'format' => 'dc_fullhtml',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
