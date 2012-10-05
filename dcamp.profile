<?php

/**
 * Implementation of hook_ctools_plugin_directory().
 */
function dcamp_ctools_plugin_directory($module, $plugin) {
  if ($module == 'ctools' && !empty($plugin)) {
    return "plugins/$plugin";
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function dcamp_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  $form['site_information']['site_mail']['#default_value'] = 'admin@' . $_SERVER['SERVER_NAME'];
  $form['admin_account']['account']['name']['#default_value'] = 'admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'admin@'. $_SERVER['SERVER_NAME'];
}
