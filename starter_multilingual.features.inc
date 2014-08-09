<?php
/**
 * @file
 * starter_multilingual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function starter_multilingual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_bases_alter().
 */
function starter_multilingual_field_default_field_bases_alter(&$data) {
  if (isset($data['body'])) {
    $data['body']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['field_image'])) {
    $data['field_image']['settings']['entity_translation_sync'] = array(
      0 => 'fid',
    ); /* WAS: '' */
  }
  if (isset($data['field_tags'])) {
    $data['field_tags']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
  if (isset($data['title_field'])) {
    $data['title_field']['settings']['entity_translation_sync'] = FALSE; /* WAS: '' */
  }
}
