// Copyright (C) Microsoft Corporation. All rights reserved.

#ifndef T_ON_H
#define T_ON_H

/*
T_ON will use THANDLE_LL_TYPE_DEFINE (will not use THANDLE_TYPE_DEFINE_WITH_MALLOC_FUNCTIONS) - so "type on" (this effectively means the global functions are NEVER used)
*/

#ifdef __cplusplus
#include <cstdint>
#else
#include <stdint.h>
#endif

#include "c_util/thandle.h"

#include "umock_c/umock_c_prod.h"
#ifdef __cplusplus
extern "C" {
#endif

    typedef struct T_ON_TAG
    {
        int x;      /*some pretend coordinate*/
        uint32_t n; /*the number of characters in s[]. Might be 0, in which case s should not be accessed*/
        char s[]    /*has n characters*/;
    }T_ON_DUMMY;

    THANDLE_TYPE_DECLARE(T_ON_DUMMY);

    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create, int, x);
    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create_with_malloc_functions, int, x);
    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create_with_extra_size, int, x, const char*, s);
    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create_with_extra_size_with_malloc_functions, int, x, const char*, s);
    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create_from_content_flex, const T_ON_DUMMY*, origin);
    MOCKABLE_FUNCTION(, THANDLE(T_ON_DUMMY), T_ON_create_from_content_flex_with_malloc_functions, const T_ON_DUMMY*, origin);

#ifdef __cplusplus
}
#endif

#endif /*T_ON_H*/
