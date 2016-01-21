<?php
/**
 * @file
 * content_type__basic_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type__basic_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo|node|page|form';
  $field_group->group_name = 'group_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo',
    'weight' => '2',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-photo field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_photo|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo|node|page|full';
  $field_group->group_name = 'group_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Photo',
    'weight' => '0',
    'children' => array(
      0 => 'field_image',
      1 => 'field_image_caption',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Photo',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-photo field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_photo|node|page|full'] = $field_group;

  return $export;
}
