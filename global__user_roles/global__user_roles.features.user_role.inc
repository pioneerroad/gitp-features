<?php
/**
 * @file
 * global__user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function global__user_roles_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 5,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 3,
  );

  // Exported role: Regional Steering Group Member.
  $roles['Regional Steering Group Member'] = array(
    'name' => 'Regional Steering Group Member',
    'weight' => 2,
  );

  // Exported role: Site Manager.
  $roles['Site Manager'] = array(
    'name' => 'Site Manager',
    'weight' => 4,
  );

  return $roles;
}
