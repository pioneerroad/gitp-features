<?php
/**
 * @file
 * global__blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global__blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
