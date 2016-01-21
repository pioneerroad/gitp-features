<?php
/**
 * @file
 * profile__member_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function profile__member_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_content';
  $context->description = 'Place blocks to display recent content by user profile being viewed.';
  $context->tag = 'User Content';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-user_content-block' => array(
          'module' => 'views',
          'delta' => 'user_content-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place blocks to display recent content by user profile being viewed.');
  t('User Content');
  $export['user_content'] = $context;

  return $export;
}
