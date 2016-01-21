<?php
/**
 * @file
 * taxonomy_implementation_status.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_implementation_status_taxonomy_default_vocabularies() {
  return array(
    'implementation_status' => array(
      'name' => 'Implementation Status',
      'machine_name' => 'implementation_status',
      'description' => 'CRVS Country Implementation Status Options',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
