// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

/*PLAY is a module that pretends to be a production module that will embed a TARRAY in its handle*/

#ifndef PLAY_UNDO_OP_TARRAY_TYPES_H
#define PLAY_UNDO_OP_TARRAY_TYPES_H

#include "c_util/thandle.h"
#include "c_util/tarray.h"

#include "play_undo_op_types.h"

TARRAY_DEFINE_STRUCT_TYPE(UNDO_OP);

#include "umock_c/umock_c_prod.h"
#ifdef __cplusplus
extern "C"
{
#endif

    THANDLE_TYPE_DECLARE(TARRAY_TYPEDEF_NAME(UNDO_OP));

    TARRAY_TYPE_DECLARE(UNDO_OP);

#ifdef __cplusplus
}
#endif

#endif /*PLAY_UNDO_OP_TARRAY_TYPES_H*/


