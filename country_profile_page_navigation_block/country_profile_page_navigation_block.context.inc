<?php
/**
 * @file
 * country_profile_page_navigation_block.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function country_profile_page_navigation_block_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'country_page_navigation_block';
  $context->description = '';
  $context->tag = 'Page Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'country-profiles' => 'country-profiles',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-country_page_list-block_2' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_2',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-country_page_list-block_3' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_3',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-country_page_list-block_4' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_4',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'views-country_page_list-block_5' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_5',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'views-country_page_list-block_6' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_6',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
        'views-country_page_list-block_7' => array(
          'module' => 'views',
          'delta' => 'country_page_list-block_7',
          'region' => 'content_bottom',
          'weight' => '-5',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'country-profile-landing-page',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Blocks');
  $export['country_page_navigation_block'] = $context;

  return $export;
}
