#pragma once
#include "quantum.h"

#define LAYOUT( \
    p14, p11, p06, p03, \
    p13, p10, p05, p02, \
    p01, p04, p09, p12, \
    e7p, e8p            \
) { \
    { p06, p03, p05, p02 }, \
    { p11, p10, p04, p12 }, \
    { p14, p13, p01, p09 }, \
    { e7p, e8p, KC_NO, KC_NO } \
}