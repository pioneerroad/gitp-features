<?php
/**
 * @file
 * taxonomy__type_of_resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy__type_of_resource_taxonomy_default_vocabularies() {
  return array(
    'type_of_resource' => array(
      'name' => 'Type of Resource',
      'machine_name' => 'type_of_resource',
      'description' => 'This vocabulary allows resources to be classified by \'Type\'. Eg. training manual, meeting document, or publication',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
