<?php
/**
 * @file
 * global__image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function global__image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: carousel_slide__thumbnail.
  $styles['carousel_slide__thumbnail'] = array(
    'label' => 'Carousel Slide (Thumbnail)',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 266,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: carousel_slide_image.
  $styles['carousel_slide_image'] = array(
    'label' => 'Carousel Slide Image',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 533,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: landscape_photo__fixed_ratio__lg.
  $styles['landscape_photo__fixed_ratio__lg'] = array(
    'label' => 'Landscape Photo (Fixed Ratio -- Large)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 530,
          'height' => 315,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: landscape_photo__fixed_ratio__medium.
  $styles['landscape_photo__fixed_ratio__medium'] = array(
    'label' => 'Landscape Photo (Fixed Ratio -- Medium)',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 360,
          'height' => 214,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: landscape_photo__fixed_ratio__sm.
  $styles['landscape_photo__fixed_ratio__sm'] = array(
    'label' => 'Landscape Photo (Fixed Ratio -- Small)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 236,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_photo__lg.
  $styles['square_photo__lg'] = array(
    'label' => 'Square Photo (Large)',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_photo__sm.
  $styles['square_photo__sm'] = array(
    'label' => 'Square Photo (Small)',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
