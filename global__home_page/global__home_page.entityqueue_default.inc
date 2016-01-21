<?php
/**
 * @file
 * global__home_page.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function global__home_page_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'home_page_carousel';
  $queue->label = 'Home Page Carousel';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'page' => 'page',
      'blog' => 'blog',
      'event' => 'event',
      'news' => 'news',
      'resources' => 'resources',
    ),
    'min_size' => '0',
    'max_size' => '5',
    'act_as_queue' => 0,
  );
  $export['home_page_carousel'] = $queue;

  return $export;
}
