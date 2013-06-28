<?php
/**
 * @file
 * hbi_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hbi_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hbi_menu_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hbi_menu_node_info() {
  $items = array(
    'hbi_documents' => array(
      'name' => t('HBI Documents'),
      'base' => 'node_content',
      'description' => t('Documents and Pages that will display on the HBI tab'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
