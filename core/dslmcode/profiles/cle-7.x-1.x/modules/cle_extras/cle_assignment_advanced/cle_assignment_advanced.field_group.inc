<?php
/**
 * @file
 * cle_assignment_advanced.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cle_assignment_advanced_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adv_submission_settings|node|cle_assignment|form';
  $field_group->group_name = 'group_adv_submission_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cle_assignment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced submission settings',
    'weight' => '10',
    'children' => array(
      0 => 'field_cle_require_submission',
      1 => 'field_cle_assign_depend',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-adv-submission-settings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_adv_submission_settings|node|cle_assignment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_adv_submission_settings|node|cle_assignment|nodeform';
  $field_group->group_name = 'group_adv_submission_settings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cle_assignment';
  $field_group->mode = 'nodeform';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced submission settings',
    'weight' => '7',
    'children' => array(
      0 => 'field_visibility',
      1 => 'og_group_ref',
      2 => 'field_cle_assign_depend',
      3 => 'field_cle_require_submission',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-adv-submission-settings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_adv_submission_settings|node|cle_assignment|nodeform'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|cle_assignment|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cle_assignment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '2',
    'children' => array(
      0 => 'group_logistics',
      1 => 'group_due_date',
      2 => 'group_requirements',
      3 => 'group_permissions',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-htabs',
      ),
    ),
  );
  $export['group_details|node|cle_assignment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_permissions|node|cle_assignment|form';
  $field_group->group_name = 'group_permissions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cle_assignment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Permissions',
    'weight' => '18',
    'children' => array(
      0 => 'field_visibility',
      1 => 'field_cle_require_submission',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-permissions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_permissions|node|cle_assignment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_requirements|node|cle_assignment|form';
  $field_group->group_name = 'group_requirements';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cle_assignment';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Requirements',
    'weight' => '17',
    'children' => array(
      0 => 'field_media_requirements',
      1 => 'field_cle_assign_depend',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-requirements field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_requirements|node|cle_assignment|form'] = $field_group;

  return $export;
}
