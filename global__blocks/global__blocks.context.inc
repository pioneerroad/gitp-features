<?php
/**
 * @file
 * global__blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function global__blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_blocks';
  $context->description = 'Blocks that should be displayed on every page';
  $context->tag = 'Global Blocks';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'main_menu',
          'weight' => '-10',
        ),
        'bean-escap-address-details' => array(
          'module' => 'bean',
          'delta' => 'escap-address-details',
          'region' => 'footer_col1',
          'weight' => '-10',
        ),
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'footer_col2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks that should be displayed on every page');
  t('Global Blocks');
  $export['global_blocks'] = $context;

  return $export;
}
