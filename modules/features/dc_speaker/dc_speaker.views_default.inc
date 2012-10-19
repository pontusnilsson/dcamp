<?php
/**
 * @file
 * dc_speaker.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dc_speaker_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'dc_speaker';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'dc_speaker';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Speakers';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_first']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_first']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_profile_first']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_first']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_first']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_first']['field_api_classes'] = 0;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_job_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_job_title']['field_api_classes'] = 0;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_last']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_last']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_profile_last']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_last']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_last']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_last']['field_api_classes'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name_1']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name_1']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name_1']['format_username'] = 1;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_profile_org']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_profile_org']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_profile_org']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_profile_org']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_profile_org']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_profile_org']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_dc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dc_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dc_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dc_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_dc_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_dc_image']['field_api_classes'] = 0;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['rid']['reduce_duplicates'] = 0;

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
  $export['dc_speaker'] = $view;

  return $export;
}
