<?php
/**
 * @file
 * content_type__blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type__blog_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|blog|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'group_relationships',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-metadata field-group-tabs',
      ),
    ),
  );
  $field_groups['group_metadata|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|node|blog|form';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '7',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_action_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-relationships field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_relationships|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|node|blog|full';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_action_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Related Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-relationships field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_relationships|node|blog|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Metadata');
  t('Related Content');
  t('Relationships');

  return $field_groups;
}
