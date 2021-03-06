<?php
/**
 * @file
 * cle_cis_ux.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cle_cis_ux_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cle_cis_ux';
  $context->description = 'CLE user experience when integrated with CIS';
  $context->tag = 'CLE';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cis_service_connection-section_context_changer' => array(
          'module' => 'cis_service_connection',
          'delta' => 'section_context_changer',
          'region' => 'cis_appbar_modal',
          'weight' => '-10',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'cis_appbar_modal',
          'weight' => '-9',
        ),
        'menu-menu-cis-toolkit' => array(
          'module' => 'menu',
          'delta' => 'menu-cis-toolkit',
          'region' => 'cis_appbar_modal',
          'weight' => '-8',
        ),
        'menu-menu-cle-navigation' => array(
          'module' => 'menu',
          'delta' => 'menu-cle-navigation',
          'region' => 'left_menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('CLE');
  t('CLE user experience when integrated with CIS');
  $export['cle_cis_ux'] = $context;

  return $export;
}
