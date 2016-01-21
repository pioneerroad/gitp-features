<?php
/**
 * @file
 * global__blocks.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function global__blocks_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'bean-entity_reference_blocks-field_global_description'.
  $field_instances['bean-entity_reference_blocks-field_global_description'] = array(
    'bundle' => 'entity_reference_blocks',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe the purpose of this list.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full_content_without_image_' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_global_description',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'bean-entity_reference_blocks-field_global_node_reference'.
  $field_instances['bean-entity_reference_blocks-field_global_node_reference'] = array(
    'bundle' => 'entity_reference_blocks',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more nodes you wish to display on a list. You may drag the entities up and down the list to specify the display order.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'full_content_without_image_' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'full_content_without_image',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_global_node_reference',
    'label' => 'Node Reference',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'bean-field_collection_block_resources-field_resources'.
  $field_instances['bean-field_collection_block_resources-field_resources'] = array(
    'bundle' => 'field_collection_block_resources',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => 1,
          'edit' => 'Edit',
          'view_mode' => 'teaser',
        ),
        'type' => 'field_collection_view',
        'weight' => 0,
      ),
      'full_content_without_image_' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_resources',
    'label' => 'Resource Files and Links',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bean-html_block-field_html_content'.
  $field_instances['bean-html_block-field_html_content'] = array(
    'bundle' => 'html_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please type or paste your HTML content in this box to publish.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full_content_without_image_' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_html_content',
    'label' => 'HTML Content',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Describe the purpose of this list.');
  t('Description');
  t('Enter one or more nodes you wish to display on a list. You may drag the entities up and down the list to specify the display order.');
  t('HTML Content');
  t('Node Reference');
  t('Please type or paste your HTML content in this box to publish.');
  t('Resource Files and Links');

  return $field_instances;
}
