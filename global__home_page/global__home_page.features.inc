<?php
/**
 * @file
 * global__home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function global__home_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function global__home_page_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function global__home_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
