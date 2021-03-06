<?php
/**
 * @file
 * dc_layout.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dc_layout_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_everywhere_site_template_enabled';
  $strongarm->value = TRUE;
  $export['panels_everywhere_site_template_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_dcamp_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bigscreen_layout' => 'three_col_grail',
    'bigscreen_sidebar_unit' => '%',
    'bigscreen_sidebar_first' => '25',
    'bigscreen_sidebar_second' => '25',
    'bigscreen_page_unit' => '%',
    'bigscreen_page_width' => '100',
    'bigscreen_set_max_width' => 1,
    'bigscreen_max_width_unit' => 'px',
    'bigscreen_max_width' => '1140',
    'bigscreen_media_query' => 'only screen and (min-width:1025px)',
    'tablet_landscape_layout' => 'three_col_grail',
    'tablet_landscape_sidebar_unit' => '%',
    'tablet_landscape_sidebar_first' => '20',
    'tablet_landscape_sidebar_second' => '20',
    'tablet_landscape_page_unit' => '%',
    'tablet_landscape_page_width' => '100',
    'tablet_landscape_media_query' => 'only screen and (min-width:769px) and (max-width:1024px)',
    'tablet_portrait_layout' => 'one_col_vert',
    'tablet_portrait_sidebar_unit' => '%',
    'tablet_portrait_sidebar_first' => '50',
    'tablet_portrait_sidebar_second' => '50',
    'tablet_portrait_page_unit' => '%',
    'tablet_portrait_page_width' => '100',
    'tablet_portrait_media_query' => 'only screen and (min-width:481px) and (max-width:768px)',
    'smartphone_landscape_layout' => 'one_col_vert',
    'smartphone_landscape_sidebar_unit' => '%',
    'smartphone_landscape_sidebar_first' => '50',
    'smartphone_landscape_sidebar_second' => '50',
    'smartphone_landscape_media_query' => 'only screen and (min-width:321px) and (max-width:480px)',
    'smartphone_landscape_page_width' => '100',
    'smartphone_landscape_page_unit' => '%',
    'smartphone_portrait_media_query' => 'only screen and (max-width:320px)',
    'smartphone_portrait_page_width' => '',
    'smartphone_portrait_page_unit' => '',
    'smartphone_portrait_sidebar_first' => '',
    'smartphone_portrait_sidebar_second' => '',
    'smartphone_portrait_sidebar_unit' => '',
    'smartphone_portrait_layout' => '',
    'bigscreen_four_4x25' => NULL,
    'bigscreen_two_33_66' => NULL,
    'bigscreen_two_66_33' => NULL,
    'bigscreen_two_50' => NULL,
    'bigscreen_two_brick' => NULL,
    'bigscreen_three_50_25_25' => NULL,
    'bigscreen_three_3x33' => NULL,
    'bigscreen_three_25_25_50' => NULL,
    'bigscreen_three_25_50_25' => NULL,
    'bigscreen_five_5x20' => NULL,
    'bigscreen_six_6x16' => NULL,
    'bigscreen_three_inset_right' => NULL,
    'bigscreen_three_inset_left' => NULL,
    'tablet_landscape_four_4x25' => NULL,
    'tablet_landscape_two_33_66' => NULL,
    'tablet_landscape_two_66_33' => NULL,
    'tablet_landscape_two_50' => NULL,
    'tablet_landscape_two_brick' => NULL,
    'tablet_landscape_three_50_25_25' => NULL,
    'tablet_landscape_three_3x33' => NULL,
    'tablet_landscape_three_25_25_50' => NULL,
    'tablet_landscape_three_25_50_25' => NULL,
    'tablet_landscape_five_5x20' => NULL,
    'tablet_landscape_six_6x16' => NULL,
    'tablet_landscape_three_inset_right' => NULL,
    'tablet_landscape_three_inset_left' => NULL,
    'tablet_portrait_four_4x25' => NULL,
    'tablet_portrait_two_33_66' => NULL,
    'tablet_portrait_two_66_33' => NULL,
    'tablet_portrait_two_50' => NULL,
    'tablet_portrait_two_brick' => NULL,
    'tablet_portrait_three_50_25_25' => NULL,
    'tablet_portrait_three_3x33' => NULL,
    'tablet_portrait_three_25_25_50' => NULL,
    'tablet_portrait_three_25_50_25' => NULL,
    'tablet_portrait_five_5x20' => NULL,
    'tablet_portrait_six_6x16' => NULL,
    'tablet_portrait_three_inset_right' => NULL,
    'tablet_portrait_three_inset_left' => NULL,
    'smartphone_landscape_four_4x25' => NULL,
    'smartphone_landscape_two_33_66' => NULL,
    'smartphone_landscape_two_66_33' => NULL,
    'smartphone_landscape_two_50' => NULL,
    'smartphone_landscape_two_brick' => NULL,
    'smartphone_landscape_three_50_25_25' => NULL,
    'smartphone_landscape_three_3x33' => NULL,
    'smartphone_landscape_three_25_25_50' => NULL,
    'smartphone_landscape_three_25_50_25' => NULL,
    'smartphone_landscape_five_5x20' => NULL,
    'smartphone_landscape_six_6x16' => NULL,
    'smartphone_landscape_three_inset_right' => NULL,
    'smartphone_landscape_three_inset_left' => NULL,
    'enable_custom_media_queries' => 0,
    'global_default_layout_toggle' => 1,
    'global_default_layout' => 'smartphone-portrait',
    'global_files_path' => 'theme_directory',
    'custom_files_path' => '',
    'disable_responsive_styles' => 0,
    'load_html5js' => 0,
    'load_onmediaqueryjs' => 0,
    'load_ltie8css' => 0,
    'load_respondjs' => 0,
    'load_scalefixjs' => 0,
    'adaptivetheme_meta_viewport' => 'width=device-width, initial-scale=1, maximum-scale=1',
    'adaptivetheme_meta_mobileoptimized' => '',
    'adaptivetheme_meta_handheldfriendly' => '',
    'adaptivetheme_meta_apple_mobile_web_app_capable' => '',
    'chrome_edge' => 0,
    'clear_type' => 0,
    'expose_regions' => 0,
    'show_window_size' => 0,
    'atcore_version_test' => 0,
    'load_all_panels' => 0,
    'load_all_panels_no_sidebars' => 0,
    'enable_extensions' => 1,
    'enable_font_settings' => 0,
    'enable_heading_settings' => 0,
    'enable_image_settings' => 0,
    'enable_apple_touch_icons' => 0,
    'enable_exclude_css' => 0,
    'enable_custom_css' => 0,
    'enable_context_regions' => 0,
    'enable_float_region_blocks' => 0,
    'enable_markup_overides' => 0,
    'at-settings__active_tab' => 'edit-meta',
    'at__active_tab' => '',
    'at_core' => '7.x-3.x',
  );
  $export['theme_dcamp_settings'] = $strongarm;

  return $export;
}
