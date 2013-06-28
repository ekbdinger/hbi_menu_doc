<?php
/**
 * @file
 * hbi_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function hbi_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: create hbi_documents content.
  $permissions['create hbi_documents content'] = array(
    'name' => 'create hbi_documents content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any hbi_documents content.
  $permissions['delete any hbi_documents content'] = array(
    'name' => 'delete any hbi_documents content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own hbi_documents content.
  $permissions['delete own hbi_documents content'] = array(
    'name' => 'delete own hbi_documents content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hbi_documents content.
  $permissions['edit any hbi_documents content'] = array(
    'name' => 'edit any hbi_documents content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own hbi_documents content.
  $permissions['edit own hbi_documents content'] = array(
    'name' => 'edit own hbi_documents content',
    'roles' => array(
      'HBI Worker' => 'HBI Worker',
    ),
    'module' => 'node',
  );

  return $permissions;
}
