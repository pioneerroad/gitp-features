<?php
/**
 * @file
 * country_profile_page_navigation_block.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function country_profile_page_navigation_block_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function country_profile_page_navigation_block_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
