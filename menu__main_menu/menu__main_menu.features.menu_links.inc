<?php
/**
 * @file
 * menu__main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function menu__main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_country-profiles:node/5.
  $menu_links['main-menu_country-profiles:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Country Profiles',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_country-profiles:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_crvs-decade:node/4.
  $menu_links['main-menu_crvs-decade:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'CRVS Decade',
    'options' => array(
      'identifier' => 'main-menu_crvs-decade:node/4',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_government-commitment:node/10.
  $menu_links['main-menu_government-commitment:node/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Government Commitment',
    'options' => array(
      'identifier' => 'main-menu_government-commitment:node/10',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_crvs-decade:node/4',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_regional-steering-group:node/6.
  $menu_links['main-menu_regional-steering-group:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Regional Steering Group',
    'options' => array(
      'identifier' => 'main-menu_regional-steering-group:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('CRVS Decade');
  t('Country Profiles');
  t('Government Commitment');
  t('Home');
  t('Regional Steering Group');

  return $menu_links;
}
