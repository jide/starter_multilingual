<?php
/**
 * @file
 * starter_multilingual.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function starter_multilingual_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.body.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.field_image.settings|entity_translation_sync"] = array(
    0 => 'fid',
  );
  $overrides["field_base.field_tags.settings|entity_translation_sync"] = FALSE;
  $overrides["field_base.title_field.settings|entity_translation_sync"] = FALSE;

 return $overrides;
}
