<?php
/**
 * @file
 * organic_groups.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function organic_groups_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_space_members';
  $view->description = 'Group members';
  $view->tag = 'og, Content Space';
  $view->base_table = 'users';
  $view->human_name = 'Content Space Members';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Members';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['label'] = 'Member Profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Relationship: OG membership: OG Roles from membership */
  $handler->display->display_options['relationships']['og_users_roles']['id'] = 'og_users_roles';
  $handler->display->display_options['relationships']['og_users_roles']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_users_roles']['field'] = 'og_users_roles';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_country_target_id']['id'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['table'] = 'field_data_field_country';
  $handler->display->display_options['relationships']['field_country_target_id']['field'] = 'field_country_target_id';
  $handler->display->display_options['relationships']['field_country_target_id']['relationship'] = 'profile';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = '[field_country]<br/>';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Full Name */
  $handler->display->display_options['fields']['field_member_fullname']['id'] = 'field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['table'] = 'field_data_field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['field'] = 'field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_member_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_member_fullname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_fullname']['alter']['text'] = '<b>[field_member_fullname]</b></br><br/>';
  $handler->display->display_options['fields']['field_member_fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_member_fullname']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['field_member_fullname']['element_label_colon'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_country_target_id';
  /* Contextual filter: OG membership: Group ID */
  $handler->display->display_options['arguments']['gid']['id'] = 'gid';
  $handler->display->display_options['arguments']['gid']['table'] = 'og_membership';
  $handler->display->display_options['arguments']['gid']['field'] = 'gid';
  $handler->display->display_options['arguments']['gid']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['arguments']['gid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['gid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['gid']['title'] = '%1 Members';
  $handler->display->display_options['arguments']['gid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['gid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['gid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['gid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['gid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['gid']['validate']['type'] = 'og';
  $handler->display->display_options['arguments']['gid']['validate']['fail'] = 'ignore';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  /* Filter criterion: OG membership: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'og_membership';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['filters']['state']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: OG user roles: Role Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'og_role';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'og_users_roles';
  $handler->display->display_options['filters']['name']['value'] = array(
    'participating member' => 'participating member',
  );

  /* Display: RSG Block (Group Page) */
  $handler = $view->new_display('block', 'RSG Block (Group Page)', 'block');
  $handler->display->display_options['block_caching'] = '8';

  /* Display: RSG Member Block (Public) */
  $handler = $view->new_display('block', 'RSG Member Block (Public)', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Profile: Full Name */
  $handler->display->display_options['fields']['field_member_fullname']['id'] = 'field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['table'] = 'field_data_field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['field'] = 'field_member_fullname';
  $handler->display->display_options['fields']['field_member_fullname']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_member_fullname']['label'] = '';
  $handler->display->display_options['fields']['field_member_fullname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_member_fullname']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_member_fullname']['alter']['text'] = '<b>[field_member_fullname]</b>';
  $handler->display->display_options['fields']['field_member_fullname']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_member_fullname']['alter']['path'] = 'users/[name]';
  $handler->display->display_options['fields']['field_member_fullname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_member_fullname']['type'] = 'text_plain';
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_country']['label'] = '';
  $handler->display->display_options['fields']['field_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_country']['alter']['text'] = ', [field_country]';
  $handler->display->display_options['fields']['field_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_country']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_country']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_member_fullname][field_country]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_caching'] = '8';
  $translatables['content_space_members'] = array(
    t('Defaults'),
    t('Members'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('OG membership from user'),
    t('Member Profile'),
    t('OG Roles from OG membership'),
    t('Taxonomy term entity referenced from field_country'),
    t('[field_country]<br/>'),
    t('<b>[field_member_fullname]</b></br><br/>'),
    t('All'),
    t('%1 Members'),
    t('RSG Block (Group Page)'),
    t('RSG Member Block (Public)'),
    t('<b>[field_member_fullname]</b>'),
    t(', [field_country]'),
    t('[field_member_fullname][field_country]'),
  );
  $export['content_space_members'] = $view;

  return $export;
}
