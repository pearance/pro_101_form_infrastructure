<?php
/**
 * @file
 * pro_101_contact_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_contact_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer contactinfo.
  $permissions['administer contactinfo'] = array(
    'name' => 'administer contactinfo',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'contactinfo',
  );

  return $permissions;
}
