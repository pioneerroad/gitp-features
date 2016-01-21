<?php
/**
 * @file
 * content_types_landing_page.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_landing_page_node_info() {
  $items = array(
    'landing_page' => array(
      'name' => t('Landing Page'),
      'base' => 'node_content',
      'description' => t('Defines a landing page, for a major section of the CRVS website.'),
      'has_title' => '1',
      'title_label' => t('Section Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
