<?php
/**
 * @file
 * profile__member_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profile__member_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|profile2|main|default';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '3',
    'children' => array(
      0 => 'field_country',
      1 => 'field_member_working_country',
      2 => 'field_partner_organisation',
      3 => 'field_member_position',
      4 => 'field_member_rscg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-relationships field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_relationships|profile2|main|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_relationships|profile2|main|full_profile';
  $field_group->group_name = 'group_relationships';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'main';
  $field_group->mode = 'full_profile';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relationships',
    'weight' => '4',
    'children' => array(
      0 => 'field_country',
      1 => 'field_member_working_country',
      2 => 'field_partner_organisation',
      3 => 'field_member_position',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-relationships field-group-div',
        'id' => '',
      ),
    ),
  );
  $export['group_relationships|profile2|main|full_profile'] = $field_group;

  return $export;
}
