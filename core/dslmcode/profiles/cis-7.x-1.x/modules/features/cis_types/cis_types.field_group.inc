<?php
/**
 * @file
 * cis_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cis_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_access|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_access';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Access Duration',
    'weight' => '1',
    'children' => array(
      0 => 'field_access_dates',
      1 => 'field_access_string',
      2 => 'field_course_start',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Access Duration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_access|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administrative|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_administrative';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '2',
    'children' => array(
      0 => 'field_course_archive',
      1 => 'field_cis_ops',
      2 => 'group_setup',
      3 => 'group_teachers',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-administrative field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_administrative|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_administrative|node|course|form';
  $field_group->group_name = 'group_administrative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Administrative',
    'weight' => '0',
    'children' => array(
      0 => 'field_instructional_designer',
      1 => 'field_method_of_access',
      2 => 'field_display_in_course_list',
      3 => 'field_lead_instructor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-administrative field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_administrative|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_archives|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_archives';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Archives',
    'weight' => '2',
    'children' => array(
      0 => 'field_course_archive',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-archives field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_archives|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_course_files|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_course_files';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_syllabus';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '14',
    'children' => array(
      0 => 'field_syllabus',
      1 => 'field_welcome_letter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-course-files field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_course_files|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|course|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'field_academic_home',
      1 => 'field_course_title',
      2 => 'field_program_classification',
      3 => 'field_university_bulletin',
      4 => 'field_special_classifications',
      5 => 'field_machine_name',
      6 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_details|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|field_collection_item|field_sections|full';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Files',
    'weight' => '5',
    'children' => array(
      0 => 'field_welcome_letter',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-files field-group-accordion',
      ),
    ),
  );
  $export['group_files|field_collection_item|field_sections|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_instructors|node|course|form';
  $field_group->group_name = 'group_instructors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resources';
  $field_group->data = array(
    'label' => 'Instructors',
    'weight' => '13',
    'children' => array(
      0 => 'field_inst_delivery_guide',
      1 => 'field_inst_design_doc',
      2 => 'field_inst_instructions',
      3 => 'field_inst_other_documents',
      4 => 'field_inst_setup_guide',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Instructors',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-instructors field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_instructors|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_offerings|node|course|form';
  $field_group->group_name = 'group_offerings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Offerings',
    'weight' => '4',
    'children' => array(
      0 => 'field_offerings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Offerings',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-offerings field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_offerings|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personel|node|academic_unit|form';
  $field_group->group_name = 'group_personel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_unit';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Personel',
    'weight' => '3',
    'children' => array(
      0 => 'field_coordinators',
      1 => 'field_unit_head',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-personel field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_personel|node|academic_unit|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resources|node|course|form';
  $field_group->group_name = 'group_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '3',
    'children' => array(
      0 => 'group_tas',
      1 => 'group_instructors',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-resources field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_resources|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_samples|node|course|form';
  $field_group->group_name = 'group_samples';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Promotional',
    'weight' => '2',
    'children' => array(
      0 => 'field_sample_lesson',
      1 => 'field_sample_syllabus',
      2 => 'field_course_author',
      3 => 'field_credits',
      4 => 'field_first_offered',
      5 => 'field_related_courses',
      6 => 'group_screenshots',
      7 => 'group_text_areas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Promotional',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-samples field-group-fieldset',
        'description' => 'Fields related to the promotion of the course and marketing on this website.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_samples|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_screenshots|node|course|form';
  $field_group->group_name = 'group_screenshots';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_samples';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '32',
    'children' => array(
      0 => 'field_screenshot',
      1 => 'field_banner',
      2 => 'field_author_video',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-screenshots field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_screenshots|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sections',
    'weight' => '1',
    'children' => array(
      0 => 'field_sections',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-sections field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_sections|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_semester|field_collection_item|field_offerings|form';
  $field_group->group_name = 'group_semester';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_offerings';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Semester',
    'weight' => '0',
    'children' => array(
      0 => 'field_semester',
      1 => 'field_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-semester field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_semester|field_collection_item|field_offerings|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_setup|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_setup';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administrative';
  $field_group->data = array(
    'label' => 'Setup',
    'weight' => '2',
    'children' => array(
      0 => 'field_section_number',
      1 => 'field_campus',
      2 => 'field_schedule_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Setup',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_setup|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_social|node|person|form';
  $field_group->group_name = 'group_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'person';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social',
    'weight' => '11',
    'children' => array(
      0 => 'field_twitter_account',
      1 => 'field_email',
      2 => 'field_website',
      3 => 'field_phone_number',
      4 => 'field_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Social',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-social field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_social|node|person|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_syllabus|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_syllabus';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Semester Logistics',
    'weight' => '0',
    'children' => array(
      0 => 'field_resources',
      1 => 'field_services',
      2 => 'group_text_areas',
      3 => 'group_course_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Semester Logistics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_syllabus|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tas|node|course|form';
  $field_group->group_name = 'group_tas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_resources';
  $field_group->data = array(
    'label' => 'Teaching Assistants',
    'weight' => '19',
    'children' => array(
      0 => 'field_ta_documents',
      1 => 'field_ta_instructions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teaching Assistants',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-tas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_tas|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teachers|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_teachers';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_administrative';
  $field_group->data = array(
    'label' => 'Teachers',
    'weight' => '3',
    'children' => array(
      0 => 'field_instructor_of_record',
      1 => 'field_teaching_assistants',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Teachers',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_teachers|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_areas|field_collection_item|field_sections|form';
  $field_group->group_name = 'group_text_areas';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_syllabus';
  $field_group->data = array(
    'label' => 'Text areas',
    'weight' => '15',
    'children' => array(
      0 => 'field_contact_info',
      1 => 'field_welcome_page',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-text-areas field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_text_areas|field_collection_item|field_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_areas|node|course|form';
  $field_group->group_name = 'group_text_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'course';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_samples';
  $field_group->data = array(
    'label' => 'Text areas',
    'weight' => '31',
    'children' => array(
      0 => 'body',
      1 => 'field_long_description',
      2 => 'field_topics_covered_text',
      3 => 'field_course_readings',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Text areas',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => ' group-text-areas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_text_areas|node|course|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wholething|field_collection_item|field_sections|full';
  $field_group->group_name = 'group_wholething';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_sections';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Whole thing',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-wholething field-group-fieldset',
      ),
    ),
  );
  $export['group_wholething|field_collection_item|field_sections|full'] = $field_group;

  return $export;
}
