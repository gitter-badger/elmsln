<?php
/**
 * Implements hook_form_FORM_ID_alter().
 */
function foundation_access_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['zurb_foundation']['foundation_access'] = array(
    '#type' => 'fieldset',
    '#title' => t('Foundation Access'),
  );
  // system label
  $distro = variable_get('install_profile', 'standard');
  $reg = _cis_connector_build_registry($distro);
  $system = theme_get_setting('foundation_access_system_label');
  $form['zurb_foundation']['foundation_access']['foundation_access_system_label'] = array(
    '#type' => 'textfield',
    '#title' => t('Service label'),
    '#description' => t('The name displayed at the top left to indicate to users what system they are using. Defaults to the one provided by the registry.'),
    '#default_value' => (empty($system) ? $reg['default_title'] : $system),
  );
  // allow for jquery colorpicker selection widget
  if (module_exists('jquery_colorpicker')) {
    $fieldtype = 'jquery_colorpicker';
  }
  else {
    $fieldtype = 'textfield';
  }
  $form['zurb_foundation']['foundation_access']['foundation_access_primary_color'] = array(
    '#type' => $fieldtype,
    '#size' => 6,
    '#maxlength' => 6,
    '#title' => t('Primary Color'),
    '#description' => t('Primary color to apply throughout the system'),
    '#default_value' => theme_get_setting('foundation_access_primary_color'),
  );
}
