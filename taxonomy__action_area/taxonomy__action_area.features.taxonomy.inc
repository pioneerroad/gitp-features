<?php
/**
 * @file
 * taxonomy__action_area.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy__action_area_taxonomy_default_vocabularies() {
  return array(
    'action_area' => array(
      'name' => 'Action Area',
      'machine_name' => 'action_area',
      'description' => 'CRVS Decade Action Areas',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
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
