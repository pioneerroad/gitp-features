<?php
/**
 * @file
 * taxonomy_institutional_partner.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function taxonomy_institutional_partner_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_classification|taxonomy_term|partner|form';
  $field_group->group_name = 'group_classification';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '9',
    'children' => array(
      0 => 'field_country',
      1 => 'field_org_type',
      2 => 'field_official_partner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-classification field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_classification|taxonomy_term|partner|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|taxonomy_term|partner|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'partner';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '4',
    'children' => array(
      0 => 'group_classification',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-tabs',
      ),
    ),
  );
  $field_groups['group_details|taxonomy_term|partner|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Classification');
  t('Details');

  return $field_groups;
}
