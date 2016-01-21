<?php
/**
 * @file
 * global__blocks.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function global__blocks_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'entity_reference_blocks';
  $bean_type->label = 'Node Reference Blocks';
  $bean_type->options = '';
  $bean_type->description = 'Reference one or more nodes, to create a list of teasers linked to node pages.';
  $export['entity_reference_blocks'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'field_collection_block_resources';
  $bean_type->label = 'Field Collection Block -- Resources';
  $bean_type->options = '';
  $bean_type->description = 'Create a block to display Resource Field Collections';
  $export['field_collection_block_resources'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'html_block';
  $bean_type->label = 'HTML Block';
  $bean_type->options = '';
  $bean_type->description = 'Create blocks of custom HTML content to place on pages.';
  $export['html_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'views_block';
  $bean_type->label = 'Views Block';
  $bean_type->options = '';
  $bean_type->description = 'Render Views Outputs as a BEAN-type Block';
  $export['views_block'] = $bean_type;

  return $export;
}
