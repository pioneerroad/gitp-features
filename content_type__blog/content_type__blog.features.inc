<?php
/**
 * @file
 * content_type__blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type__blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type__blog_node_info() {
  $items = array(
    'blog' => array(
      'name' => t('Blog'),
      'base' => 'node_content',
      'description' => t('Members of the CRVS site can write blog articles and submit for review and publishing.'),
      'has_title' => '1',
      'title_label' => t('Blog Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
