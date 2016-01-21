<?php
/**
 * @file
 * content_type__resource.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function content_type__resource_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'resource_landing_page';
  $view->description = 'Lists resources with an exposed filter form to allow users to filter and search for resources';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resource Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Apply Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_type_of_resource_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_action_area_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_country_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_partner_organisation_target_id' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'content_summary_box';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'resources' => 'resources',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Action Area (field_action_area) */
  $handler->display->display_options['filters']['field_action_area_target_id']['id'] = 'field_action_area_target_id';
  $handler->display->display_options['filters']['field_action_area_target_id']['table'] = 'field_data_field_action_area';
  $handler->display->display_options['filters']['field_action_area_target_id']['field'] = 'field_action_area_target_id';
  $handler->display->display_options['filters']['field_action_area_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_action_area_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['operator_id'] = 'field_action_area_target_id_op';
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['label'] = 'Action Area';
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['operator'] = 'field_action_area_target_id_op';
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['identifier'] = 'area_target';
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_action_area_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Type of Resource (field_type_of_resource) */
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['id'] = 'field_type_of_resource_target_id';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['table'] = 'field_data_field_type_of_resource';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['field'] = 'field_type_of_resource_target_id';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['operator_id'] = 'field_type_of_resource_target_id_op';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['label'] = 'Type of Resource';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['operator'] = 'field_type_of_resource_target_id_op';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['identifier'] = 'field_type_of_resource_target_id';
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_type_of_resource_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Country (field_country) */
  $handler->display->display_options['filters']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['filters']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['filters']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['filters']['field_country_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_country_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_country_target_id']['expose']['operator_id'] = 'field_country_target_id_op';
  $handler->display->display_options['filters']['field_country_target_id']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_country_target_id']['expose']['operator'] = 'field_country_target_id_op';
  $handler->display->display_options['filters']['field_country_target_id']['expose']['identifier'] = 'country';
  $handler->display->display_options['filters']['field_country_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_country_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Field: Partner Organisation (field_partner_organisation) */
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['id'] = 'field_partner_organisation_target_id';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['table'] = 'field_data_field_partner_organisation';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['field'] = 'field_partner_organisation_target_id';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['operator_id'] = 'field_partner_organisation_target_id_op';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['label'] = 'Partner Organisation';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['operator'] = 'field_partner_organisation_target_id_op';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['identifier'] = 'partner_organisation';
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_partner_organisation_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    3 => 0,
  );

  /* Display: Resource Landing Page */
  $handler = $view->new_display('page', 'Resource Landing Page', 'page');
  $handler->display->display_options['path'] = 'resources';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Resources';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['resource_landing_page'] = array(
    t('Master'),
    t('Resources'),
    t('more'),
    t('Apply Filter'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Action Area'),
    t('Type of Resource'),
    t('Country'),
    t('Partner Organisation'),
    t('Search Terms'),
    t('Resource Landing Page'),
  );
  $export['resource_landing_page'] = $view;

  return $export;
}
