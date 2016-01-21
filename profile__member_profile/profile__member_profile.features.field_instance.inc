<?php
/**
 * @file
 * profile__member_profile.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function profile__member_profile_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-main-field_country'.
  $field_instances['profile2-main-field_country'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide your primary country of residence.',
    'display' => array(
      'author_profile' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'full_profile' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'thumbnail_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_country',
    'label' => 'Country of Residence',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'profile2-main-field_image'.
  $field_instances['profile2-main-field_image'] = array(
    'bundle' => 'main',
    'deleted' => 0,
    'description' => 'Please provide a profile photo of yourself.
The image will be automatically cropped to a square shape throughout the site, so please check the image preview below to ensure you are happy with the crop position.',
    'display' => array(
      'author_profile' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'square_photo__lg',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'full_profile' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'square_photo__lg',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'thumbnail_profile' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'square_photo__sm',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_image',
    'label' => 'Profile Photo',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 11,
      'file_directory' => 'image/profile-photos/[current-user:uid]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '250x250',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'square_photo__lg',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'profile2-main-field_member_about'.
  $field_instances['profile2-main-field_member_about'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please write a short bio (50 words) or less that describes your experience and interest in CRVS.
Since it will be displayed throughout the site, please write in the <i>\'third person\'</i>. <i>Eg.</i> Dr Lee has been actively advocating for civil registrations for over 10 years and has been instrumental in formulating over 10 national policies on CRVS.',
    'display' => array(
      'author_profile' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full_profile' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'thumbnail_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_member_about',
    'label' => 'About Me',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-main-field_member_fullname'.
  $field_instances['profile2-main-field_member_fullname'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide the full name you would like to be displayed with your profile throughout the site. You may also enter a title prefix (Eg. Ms, Mr, Dr, etc)',
    'display' => array(
      'author_profile' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full_profile' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
      'thumbnail_profile' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_member_fullname',
    'label' => 'Full Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'profile2-main-field_member_position'.
  $field_instances['profile2-main-field_member_position'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate your role or position as it relates to your involvement with CRVS',
    'display' => array(
      'author_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'full_profile' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'thumbnail_profile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_member_position',
    'label' => 'Role/Position',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'profile2-main-field_member_working_country'.
  $field_instances['profile2-main-field_member_working_country'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please provide countries in which you regularly work.',
    'display' => array(
      'author_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full_profile' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'thumbnail_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_member_working_country',
    'label' => 'Working Locations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'profile2-main-field_partner_organisation'.
  $field_instances['profile2-main-field_partner_organisation'] = array(
    'bundle' => 'main',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please indicate which organisations you work for or with.',
    'display' => array(
      'author_profile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'full_profile' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'thumbnail_profile' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_partner_organisation',
    'label' => 'Organisation(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');
  t('Country of Residence');
  t('Full Name');
  t('Organisation(s)');
  t('Please indicate which organisations you work for or with.');
  t('Please indicate your role or position as it relates to your involvement with CRVS');
  t('Please provide a profile photo of yourself.
The image will be automatically cropped to a square shape throughout the site, so please check the image preview below to ensure you are happy with the crop position.');
  t('Please provide countries in which you regularly work.');
  t('Please provide the full name you would like to be displayed with your profile throughout the site. You may also enter a title prefix (Eg. Ms, Mr, Dr, etc)');
  t('Please provide your primary country of residence.');
  t('Please write a short bio (50 words) or less that describes your experience and interest in CRVS.
Since it will be displayed throughout the site, please write in the <i>\'third person\'</i>. <i>Eg.</i> Dr Lee has been actively advocating for civil registrations for over 10 years and has been instrumental in formulating over 10 national policies on CRVS.');
  t('Profile Photo');
  t('Role/Position');
  t('Working Locations');

  return $field_instances;
}
