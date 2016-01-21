<?php
/**
 * @file
 * organic_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function organic_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_space_members';
  $context->description = 'Display all members of a group';
  $context->tag = 'content space';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'group_space' => 'group_space',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-content_space_members-block' => array(
          'module' => 'views',
          'delta' => 'content_space_members-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Display all members of a group');
  t('content space');
  $export['content_space_members'] = $context;

  return $export;
}
