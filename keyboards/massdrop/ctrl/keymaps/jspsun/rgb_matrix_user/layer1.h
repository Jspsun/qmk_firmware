// !!! DO NOT ADD #pragma once !!! //
RGB_MATRIX_EFFECT(layer1)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

Color RED;
Color WHITE;

static void layer1_init(effect_params_t* params) {
    makeBasicColors(7);
    initGlitter(0);
    LAYER = 1;
}

static bool layer1_run(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    unsetEntireBoard(0);
    for(int i=led_min; i<=led_max; i++) {
        // if (isModifier(i, TAB)) {
        //     setRGB(i, magenta);
        // }
        // else if (isModifier(i, CTRL)) {
        //     setRGB(i, blue);
        // }
        // else if (isModifier(i, SHIFT)) {
        //     setRGB(i, orange);
        // }
        // else if (isModifier(i, FN)) {
        //     setRGB(i, blue);
        // }
        // else if (isModifier(i, META)) {
        //     setRGB(i, red);
        // }
        // else if (isModifier(i, ALT)) {
        //     setRGB(i, blue);
        // }
        // else if (isModifier(i, SPACE)) {
        // }
        // else if (isModifier(i, ENTER)) {
        //     setRGB(i, green);
        // }
        // else if (isModifier(i, BACKSPACE)) {
        //     setRGB(i, magenta);
        // }
        // else if (isKey(i) && !isHomeKeys(i) && isPrintable(i)) {
        //     setRGB(i, blue);
        // }
        // else if (isHomeKeys(i)) {
        //     setRGB(i, white);
        // }
        // else if (isArrow(i)) {
        //     setRGB(i, white);
        // }
        // else if (isMedia(i)) {
        //     setRGB(i, pink);
        // }
        if (isGlow(i)){
            setRGB(i, blue);
        }
        else {
            setRGB(i, lightblue);
        }
    }
    return led_max < DRIVER_LED_TOTAL;
}


static bool layer1(effect_params_t* params) {
  if (params->init) layer1_init(params);
  return layer1_run(params);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS