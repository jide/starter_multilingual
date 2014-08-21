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
