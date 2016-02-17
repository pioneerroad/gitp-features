<?php
/**
 * @file
 * taxonomy_country.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function taxonomy_country_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_contacts|taxonomy_term|country|form';
  $field_group->group_name = 'group_country_contacts';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_information';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '52',
    'children' => array(
      0 => 'field_country_crvs_focal_point',
      1 => 'field_country_rsg_member',
      2 => 'field_country_website',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-country-contacts field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_contacts|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_contacts|taxonomy_term|country|full';
  $field_group->group_name = 'group_country_contacts';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '1',
    'children' => array(
      0 => 'field_country_crvs_focal_point',
      1 => 'field_country_rsg_member',
      2 => 'field_country_website',
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
        'classes' => 'group-country-contacts field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_country_contacts|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_information|taxonomy_term|country|form';
  $field_group->group_name = 'group_country_information';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Country Information',
    'weight' => '3',
    'children' => array(
      0 => 'group_country_statistics',
      1 => 'group_implementation_status',
      2 => 'group_country_contacts',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-country-information field-group-tabs',
      ),
    ),
  );
  $field_groups['group_country_information|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_statistics|taxonomy_term|country|form';
  $field_group->group_name = 'group_country_statistics';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_information';
  $field_group->data = array(
    'label' => 'Country Statistics',
    'weight' => '53',
    'children' => array(
      0 => 'field_country_pop_growth_rate',
      1 => 'field_country_crude_birth_rate',
      2 => 'field_country_crude_death_rate',
      3 => 'field_country_teenage_fertility',
      4 => 'field_country_total_fertility',
      5 => 'field_country_total_pop',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_country_statistics|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_1|taxonomy_term|country|form';
  $field_group->group_name = 'group_goal_1';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_targets';
  $field_group->data = array(
    'label' => 'Goal 1',
    'weight' => '7',
    'children' => array(
      0 => 'field_target_1a',
      1 => 'field_target_1b',
      2 => 'field_target_1c',
      3 => 'field_target_1d',
      4 => 'field_target_1e',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_goal_1|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_1|taxonomy_term|country|full';
  $field_group->group_name = 'group_goal_1';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_goals';
  $field_group->data = array(
    'label' => 'Goal 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_target_1a',
      1 => 'field_target_1b',
      2 => 'field_target_1c',
      3 => 'field_target_1d',
      4 => 'field_target_1e',
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
        'classes' => 'group-goal-1 field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_goal_1|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_2|taxonomy_term|country|form';
  $field_group->group_name = 'group_goal_2';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_targets';
  $field_group->data = array(
    'label' => 'Goal 2',
    'weight' => '8',
    'children' => array(
      0 => 'field_target_2a',
      1 => 'field_target_2b',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_goal_2|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_2|taxonomy_term|country|full';
  $field_group->group_name = 'group_goal_2';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_goals';
  $field_group->data = array(
    'label' => 'Goal 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_target_2a',
      1 => 'field_target_2b',
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
        'classes' => 'group-goal-2 field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_goal_2|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_3|taxonomy_term|country|form';
  $field_group->group_name = 'group_goal_3';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_targets';
  $field_group->data = array(
    'label' => 'Goal 3',
    'weight' => '9',
    'children' => array(
      0 => 'field_target_3a',
      1 => 'field_target_3b',
      2 => 'field_target_3c',
      3 => 'field_target_3d',
      4 => 'field_target_3e',
      5 => 'field_target_3f',
      6 => 'field_target_3g',
      7 => 'field_target_3h',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_goal_3|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goal_3|taxonomy_term|country|full';
  $field_group->group_name = 'group_goal_3';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_goals';
  $field_group->data = array(
    'label' => 'Goal 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_target_3a',
      1 => 'field_target_3b',
      2 => 'field_target_3c',
      3 => 'field_target_3d',
      4 => 'field_target_3e',
      5 => 'field_target_3f',
      6 => 'field_target_3g',
      7 => 'field_target_3h',
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
        'classes' => 'group-goal-3 field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_goal_3|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_goals|taxonomy_term|country|full';
  $field_group->group_name = 'group_goals';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Goals',
    'weight' => '4',
    'children' => array(
      0 => 'group_goal_1',
      1 => 'group_goal_2',
      2 => 'group_goal_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Goals',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-goals field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_goals|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_implementation_status|taxonomy_term|country|form';
  $field_group->group_name = 'group_implementation_status';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_country_information';
  $field_group->data = array(
    'label' => 'Implementation Status',
    'weight' => '54',
    'children' => array(
      0 => 'field_country_impl_coordination',
      1 => 'field_country_impl_assessment',
      2 => 'field_country_impl_targets',
      3 => 'field_country_impl_monitoring',
      4 => 'field_country_impl_inequality',
      5 => 'field_country_impl_strategy',
      6 => 'field_country_impl_focal',
      7 => 'field_country_impl_report',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-implementation-status field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_implementation_status|taxonomy_term|country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_implementation_status|taxonomy_term|country|full';
  $field_group->group_name = 'group_implementation_status';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Implementation Status',
    'weight' => '3',
    'children' => array(
      0 => 'field_country_impl_coordination',
      1 => 'field_country_impl_assessment',
      2 => 'field_country_impl_targets',
      3 => 'field_country_impl_monitoring',
      4 => 'field_country_impl_inequality',
      5 => 'field_country_impl_strategy',
      6 => 'field_country_impl_focal',
      7 => 'field_country_impl_report',
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
        'classes' => 'group-implementation-status field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_implementation_status|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_statistics|taxonomy_term|country|full';
  $field_group->group_name = 'group_statistics';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Country Statistics',
    'weight' => '2',
    'children' => array(
      0 => 'field_country_pop_growth_rate',
      1 => 'field_country_crude_birth_rate',
      2 => 'field_country_crude_death_rate',
      3 => 'field_country_teenage_fertility',
      4 => 'field_country_total_fertility',
      5 => 'field_country_total_pop',
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
        'classes' => 'group-statistics field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_statistics|taxonomy_term|country|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_targets|taxonomy_term|country|form';
  $field_group->group_name = 'group_targets';
  $field_group->entity_type = 'taxonomy_term';
  $field_group->bundle = 'country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'National Targets',
    'weight' => '4',
    'children' => array(
      0 => 'group_goal_1',
      1 => 'group_goal_2',
      2 => 'group_goal_3',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_targets|taxonomy_term|country|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');
  t('Country Information');
  t('Country Statistics');
  t('Goal 1');
  t('Goal 2');
  t('Goal 3');
  t('Goals');
  t('Implementation Status');
  t('National Targets');

  return $field_groups;
}
