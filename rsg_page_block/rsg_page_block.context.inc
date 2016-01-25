<?php
/**
 * @file
 * rsg_page_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rsg_page_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page_blocks__rsg';
  $context->description = '';
  $context->tag = 'Page Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'regional-steering-group-crvs-asia-and-pacific' => 'regional-steering-group-crvs-asia-and-pacific',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_space_members-block_1' => array(
          'module' => 'views',
          'delta' => 'content_space_members-block_1',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Blocks');
  $export['page_blocks__rsg'] = $context;

  return $export;
}
