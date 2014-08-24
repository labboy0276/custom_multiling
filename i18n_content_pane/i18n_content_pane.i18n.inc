<?php

/**
 * @file
 * Implements hook of i18n module for localization of CTools Custom Content.
 */

/**
 * Implements hook_i18n_object_info().
 */
function i18n_content_pane_i18n_object_info() {
  $info['content_pane'] = array(
    'title' => t('CTools custom content'),
    'key' => 'name',
    'load callback' => 'i18n_content_pane_load',
    'placeholders' => array(
      '%content_name' => 'name',
    ),
    // We can easily list all these objects.
    'list callback' => 'i18n_content_pane_list',
    // Metadata for string translation.
    'string translation' => array(
      'textgroup' => 'ctools_content',
      'type' => 'content_pane',
      'properties' => array(
        'title' => array(
          'title' => t('Title'),
          'empty' => '',
        ),
        'body' => array(
          'title' => t('Body'),
          'format' => 'format',
        ),
      ),
    ),
  );
  return $info;
}

/**
 * Implements hook_i18n_string_info().
 */
function i18n_content_pane_i18n_string_info() {
  $groups['ctools_content'] = array(
    'title' => t('CTools custom contents'),
    'description' => t('CTools custom contents.'),
    // This group has strings with format (block body).
    'format' => TRUE,
    // This group can list all strings.
    'list' => TRUE,
  );
  return $groups;
}
