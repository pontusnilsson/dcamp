<?php
/**
 * @file
 * dc_sponsor.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dc_sponsor_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'dc_sponsor';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dc_sponsor';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-three-three-three';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'sponsor-teaser teaser-item';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_dc_image']['id'] = 'field_dc_image';
  $handler->display->display_options['fields']['field_dc_image']['table'] = 'field_data_field_dc_image';
  $handler->display->display_options['fields']['field_dc_image']['field'] = 'field_dc_image';
  $handler->display->display_options['fields']['field_dc_image']['label'] = '';
  $handler->display->display_options['fields']['field_dc_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dc_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dc_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_dc_image']['element_class'] = 'sponsor-image';
  $handler->display->display_options['fields']['field_dc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dc_image']['settings'] = array(
    'image_style' => 'dc_logo_teaser',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_dc_image']['field_api_classes'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dc_sponsor' => 'dc_sponsor',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $export['dc_sponsor'] = $view;

  return $export;
}
