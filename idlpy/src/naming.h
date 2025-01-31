/*
 * Copyright(c) 2021 ADLINK Technology Limited and others
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License v. 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0, or the Eclipse Distribution License
 * v. 1.0 which is available at
 * http://www.eclipse.org/org/documents/edl-v10.php.
 *
 * SPDX-License-Identifier: EPL-2.0 OR BSD-3-Clause
 */
#ifndef IDLPY_NAMING_H
#define IDLPY_NAMING_H

#include "context.h"

char* typename(idlpy_ctx ctx, const void *node);
char* typename_unwrap_typedef(idlpy_ctx ctx, const void *node);
char* absolute_name(idlpy_ctx ctx, const void *node);
char* idl_full_typename(const void *node);


#endif //IDLPY_NAMING_H
