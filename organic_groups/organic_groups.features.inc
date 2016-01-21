<?php
/**
 * @file
 * organic_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function organic_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function organic_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function organic_groups_node_info() {
  $items = array(
    'group_space' => array(
      'name' => t('Group Space'),
      'base' => 'node_content',
      'description' => t('Create closed (members-only) group space (eg. for the Regional Steering Committee Group Space).'),
      'has_title' => '1',
      'title_label' => t('Group Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
