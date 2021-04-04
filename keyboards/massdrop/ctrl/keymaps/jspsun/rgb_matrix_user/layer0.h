// !!! DO NOT ADD #pragma once !!! //
RGB_MATRIX_EFFECT(layer0)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

Color RED;
Color WHITE;

static void layer0_init(effect_params_t* params) {
    makeBasicColors(7);
    initGlitter(0);
    LAYER = 1;
}

static bool layer0_run(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    unsetEntireBoard(0);
    for(int i=led_min; i<=led_max; i++) {
        if (isAccented(i) || isGlow(i)){
            doGlitter(i, coldwhite, lightblue);
        }
        else {
            setRGB(i, off);
        }
    }
    return led_max < DRIVER_LED_TOTAL;
}


static bool layer0(effect_params_t* params) {
  if (params->init) layer0_init(params);
  return layer0_run(params);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS