$content['type']  = array (
  'name' => 'Edition',
  'type' => 'edition',
  'description' => 'An individual edition.',
  'title_label' => 'Title',
  'body_label' => '',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => 1,
  'old_type' => 'edition',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'subnode' => 
  array (
    'critical_read' => 'unlimited',
    'eds_take' => '1',
    'in_short' => '1',
    'nuts_bolts' => '1',
    'page' => '0',
    'report' => '1',
    'story' => '0',
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Quote of the day',
    'field_name' => 'field_quote',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-4',
    'rows' => '5',
    'size' => 60,
    'description' => 'This text should not include quotation marks.',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_quote][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
      'format' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'views' => false,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-4',
      'parent' => '',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'revision_information' => '3',
  'author' => '4',
  'options' => '5',
  'comment_settings' => '6',
  'menu' => '2',
  'path' => '7',
  'attachments' => '8',
  'subnode_edition_critical_read' => '-1',
  'subnode_edition_eds_take' => '0',
  'subnode_edition_in_short' => '1',
  'subnode_edition_nuts_bolts' => '-3',
  'subnode_edition_report' => '-2',
);
