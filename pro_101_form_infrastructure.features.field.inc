<?php
/**
 * @file
 * pro_101_form_infrastructure.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function pro_101_form_infrastructure_field_default_fields() {
  $fields = array();

  // Exported field: 'node-webform-body'.
  $fields['node-webform-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'webform',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'colorbox' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'diff_custom' => 0,
            'diff_custom_settings' => array(),
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Form Message',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-webform-field_map_address'.
  $fields['node-webform-field_map_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_map_address',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'webform',
      'default_value' => array(
        0 => array(
          'value' => '35 Journal Square, Suite 426, Jersey City, NJ 07306',
        ),
      ),
      'deleted' => '0',
      'description' => 'Enter address to be mapped in a single line (Ex. 123 Main Street, Suite 123, City, State 12345).',
      'display' => array(
        'colorbox' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'simple_gmap',
          'settings' => array(
            'iframe_height' => '300',
            'iframe_width' => '400',
            'include_link' => 1,
            'include_map' => 1,
            'include_text' => 0,
            'information_bubble' => 0,
            'langcode' => 'en',
            'link_text' => 'View larger map',
            'map_type' => 'm',
            'zoom_level' => '16',
          ),
          'type' => 'simple_gmap',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'simple_gmap',
          'settings' => array(
            'iframe_height' => '300',
            'iframe_width' => '400',
            'include_link' => 1,
            'include_map' => 1,
            'include_text' => 0,
            'information_bubble' => 0,
            'langcode' => 'en',
            'link_text' => 'View larger map',
            'map_type' => 'm',
            'zoom_level' => '16',
          ),
          'type' => 'simple_gmap',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_map_address',
      'label' => 'Map Address',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-webform-field_title_graphic'.
  $fields['node-webform-field_title_graphic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title_graphic',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => '48',
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'webform',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'colorbox' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'medium',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'medium',
          ),
          'type' => 'image',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_title_graphic',
      'label' => 'Form Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => 'images',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'feed' => 'feed',
            'http' => 'http',
            'https' => 'https',
            'private' => 'private',
            'public' => 'public',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'default' => 0,
            0 => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 'media_internet',
            'remote_file' => 'remote_file',
            'upload' => 'upload',
          ),
          'manualcrop_crop_info' => TRUE,
          'manualcrop_default_crop_area' => TRUE,
          'manualcrop_enable' => FALSE,
          'manualcrop_inline_crop' => FALSE,
          'manualcrop_instant_crop' => FALSE,
          'manualcrop_instant_preview' => TRUE,
          'manualcrop_require_cropping' => array(),
          'manualcrop_styles_list' => array(),
          'manualcrop_styles_mode' => 'exclude',
          'manualcrop_thumblist' => FALSE,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Enter address to be mapped in a single line (Ex. 123 Main Street, Suite 123, City, State 12345).');
  t('Form Image');
  t('Form Message');
  t('Map Address');

  return $fields;
}
