<?php
/**
 * Define Plugin
 */
$plugin = array(
  'title' => t('Ticket promo'),
  'description' => t('Provides a pane that displays site title linked.'),
  'single' => TRUE,
  'content_types' => array('dc_ticketpromo_content_type'),
  'render callback' => 'dc_ticketpromo_content_type_render',
  'edit form' => 'dc_ticketpromo_content_type_edit_form',
  'category' => t('Widgets'),
);

/**
 * Run-time rendering of the pane.
 */
function dc_ticketpromo_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->content = '<div class="ticket-promo">' . l(t('Buy ticket'), $conf['link']) . '</div>';
  return $block;
}

/**
 * Edit form callback for the content type.
 */
function dc_ticketpromo_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['link'] = array(
    '#type' => 'textfield',
    '#title' => t('Specify link'),
    '#size' => 50,
    '#description' => t('Enter where the promo should link.'),
    '#default_value' => !empty($conf['link']) ? $conf['link'] : '',
    '#prefix' => '<div class="clear-block no-float">',
    '#suffix' => '</div>',
  );
  return $form;
}

/**
 * Form submit callback for the content type.
 */
function dc_ticketpromo_content_type_edit_form_submit($form, &$form_state) {
  foreach (array('link') as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
