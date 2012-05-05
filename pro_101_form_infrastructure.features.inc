<?php
/**
 * @file
 * pro_101_form_infrastructure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_form_infrastructure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pro_101_form_infrastructure_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a <em>webform</em> to create a form for prospects to fill in and submit.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
