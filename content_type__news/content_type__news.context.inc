<?php
/**
 * @file
 * content_type__news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function content_type__news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_events';
  $context->description = '';
  $context->tag = 'Page Blocks';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-events' => 'news-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news_events-recent_news' => array(
          'module' => 'views',
          'delta' => 'news_events-recent_news',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'views-news_events-upcoming_events' => array(
          'module' => 'views',
          'delta' => 'news_events-upcoming_events',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'views-news_events-block_1' => array(
          'module' => 'views',
          'delta' => 'news_events-block_1',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page Blocks');
  $export['news_events'] = $context;

  return $export;
}
