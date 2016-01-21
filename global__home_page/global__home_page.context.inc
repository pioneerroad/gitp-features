<?php
/**
 * @file
 * global__home_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function global__home_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_blocks_home_page';
  $context->description = 'Display content blocks on the home page';
  $context->tag = 'Homepage';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homepage_carousel-block' => array(
          'module' => 'views',
          'delta' => 'homepage_carousel-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-fcd45e957a1903ae7649505dc7a108d4' => array(
          'module' => 'views',
          'delta' => 'fcd45e957a1903ae7649505dc7a108d4',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'bean-goals-summary-block' => array(
          'module' => 'bean',
          'delta' => 'goals-summary-block',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display content blocks on the home page');
  t('Homepage');
  $export['content_blocks_home_page'] = $context;

  return $export;
}
