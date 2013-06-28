<?php
/**
 * @file
 * hbi_menu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hbi_menu_taxonomy_default_vocabularies() {
  return array(
    'hbi_categories' => array(
      'name' => 'HBI Categories',
      'machine_name' => 'hbi_categories',
      'description' => 'Used on the HBI Menu tab page',
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
