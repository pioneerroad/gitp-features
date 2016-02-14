<?php
/**
 * @file
 * country_profile_page_navigation_block.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function country_profile_page_navigation_block_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'country_page_list';
  $view->description = 'Displays a list of country pages generated from the Country Taxonomy';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Country Page List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );

  /* Display: Country List (All) */
  $handler = $view->new_display('block', 'Country List (All)', 'block');
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';

  /* Display: Country List (East and North-East Asia) */
  $handler = $view->new_display('block', 'Country List (East and North-East Asia)', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'East and North-East Asia';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'ENEA' => 'ENEA',
  );

  /* Display: Country List (South-East Asia) */
  $handler = $view->new_display('block', 'Country List (South-East Asia)', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'South-East Asia';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'SEA' => 'SEA',
  );

  /* Display: Country List (South and South-West Asia) */
  $handler = $view->new_display('block', 'Country List (South and South-West Asia)', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'South and South-West Asia';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'SSWA' => 'SSWA',
  );

  /* Display: Country List (North and Central Asia) */
  $handler = $view->new_display('block', 'Country List (North and Central Asia)', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'North and Central Asia';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'NCA' => 'NCA',
  );

  /* Display: Country List (Pacific) */
  $handler = $view->new_display('block', 'Country List (Pacific)', 'block_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pacific';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'PAC' => 'PAC',
  );

  /* Display: Country List (Other Region) */
  $handler = $view->new_display('block', 'Country List (Other Region)', 'block_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'ESCAP Member States located outside the Asia-Pacific Region';
  $handler->display->display_options['display_description'] = 'Allows users to navigate to individual country landing pages.';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'country' => 'country',
  );
  /* Filter criterion: Taxonomy term: Sub-Region (field_country_sub_region) */
  $handler->display->display_options['filters']['field_country_sub_region_value']['id'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['table'] = 'field_data_field_country_sub_region';
  $handler->display->display_options['filters']['field_country_sub_region_value']['field'] = 'field_country_sub_region_value';
  $handler->display->display_options['filters']['field_country_sub_region_value']['value'] = array(
    'Other' => 'Other',
  );
  $translatables['country_page_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Country List (All)'),
    t('Allows users to navigate to individual country landing pages.'),
    t('Country List (East and North-East Asia)'),
    t('East and North-East Asia'),
    t('Country List (South-East Asia)'),
    t('South-East Asia'),
    t('Country List (South and South-West Asia)'),
    t('South and South-West Asia'),
    t('Country List (North and Central Asia)'),
    t('North and Central Asia'),
    t('Country List (Pacific)'),
    t('Pacific'),
    t('Country List (Other Region)'),
    t('ESCAP Member States located outside the Asia-Pacific Region'),
  );
  $export['country_page_list'] = $view;

  return $export;
}
