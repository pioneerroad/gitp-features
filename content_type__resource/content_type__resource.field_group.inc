<?php
/**
 * @file
 * content_type__resource.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type__resource_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about|node|resources|full';
  $field_group->group_name = 'group_about';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'About this resource',
    'weight' => '3',
    'children' => array(
      0 => 'field_type_of_resource',
      1 => 'field_resource_pub_info',
      2 => 'field_resource_year',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'About this resource',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-about field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_about|node|resources|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_control|node|resources|form';
  $field_group->group_name = 'group_content_control';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Group Settings',
    'weight' => '17',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Group Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-group-settings field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_content_control|node|resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|resources|full';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'group_about',
      2 => 'group_relationships',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|node|resources|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|resources|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'group_relationships',
      1 => 'group_content_control',
      2 => 'group_resource_information',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-metadata field-group-tabs',
      ),
    ),
  );
  $field_groups['group_metadata|node|resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|node|resources|form';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '16',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_action_area',
      3 => 'field_partner_organisation',
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
  $field_groups['group_relationships|node|resources|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|node|resources|full';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_country',
      2 => 'field_action_area',
      3 => 'field_partner_organisation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Relationships',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-relationships field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_relationships|node|resources|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource_information|node|resources|form';
  $field_group->group_name = 'group_resource_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resources';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_metadata';
  $field_group->data = array(
    'label' => 'Resource Information',
    'weight' => '15',
    'children' => array(
      0 => 'field_type_of_resource',
      1 => 'field_resource_pub_info',
      2 => 'field_resource_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resource-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_resource_information|node|resources|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About this resource');
  t('Content');
  t('Group Settings');
  t('Metadata');
  t('Relationships');
  t('Resource Information');

  return $field_groups;
}
