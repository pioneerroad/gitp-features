<?php
/**
 * @file
 * rsg_page_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rsg_page_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
