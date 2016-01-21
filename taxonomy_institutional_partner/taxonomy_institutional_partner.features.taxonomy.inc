<?php
/**
 * @file
 * taxonomy_institutional_partner.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_institutional_partner_taxonomy_default_vocabularies() {
  return array(
    'partner' => array(
      'name' => 'Institutional Partner',
      'machine_name' => 'partner',
      'description' => 'CRVS Decade Institutional Partner',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
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
