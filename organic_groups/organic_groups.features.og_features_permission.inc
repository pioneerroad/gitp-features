<?php
/**
 * @file
 * organic_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function organic_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:group_space:add user'
  $permissions['node:group_space:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:administer group'
  $permissions['node:group_space:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:approve and deny subscription'
  $permissions['node:group_space:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:create event content'
  $permissions['node:group_space:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:create resources content'
  $permissions['node:group_space:create resources content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:delete any event content'
  $permissions['node:group_space:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:delete any resources content'
  $permissions['node:group_space:delete any resources content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:delete own event content'
  $permissions['node:group_space:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:delete own resources content'
  $permissions['node:group_space:delete own resources content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:manage members'
  $permissions['node:group_space:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:manage permissions'
  $permissions['node:group_space:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:manage roles'
  $permissions['node:group_space:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:subscribe'
  $permissions['node:group_space:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:group_space:subscribe without approval'
  $permissions['node:group_space:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:unsubscribe'
  $permissions['node:group_space:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:group_space:update any event content'
  $permissions['node:group_space:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:update any resources content'
  $permissions['node:group_space:update any resources content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:update group'
  $permissions['node:group_space:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:group_space:update own event content'
  $permissions['node:group_space:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:group_space:update own resources content'
  $permissions['node:group_space:update own resources content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
