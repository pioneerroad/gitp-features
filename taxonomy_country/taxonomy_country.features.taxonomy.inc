<?php
/**
 * @file
 * taxonomy_country.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_country_taxonomy_default_vocabularies() {
  return array(
    'country' => array(
      'name' => 'Country',
      'machine_name' => 'country',
      'description' => 'ESCAP\'s Member and Associate Member Countries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
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
