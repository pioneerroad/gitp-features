<?php
/**
 * @file
 * content_type__resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type__resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function content_type__resource_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function content_type__resource_node_info() {
  $items = array(
    'resources' => array(
      'name' => t('Resources'),
      'base' => 'node_content',
      'description' => t('Resources are used to share knowledge products and coordination documents. You can provide links to external resources and/or upload resources to the CRVS website.'),
      'has_title' => '1',
      'title_label' => t('Resource Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
