/*
 * Copyright (C) 2010-2014, 2023 NXP
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PHESETYPES_H
#define PHESETYPES_H
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#ifndef TRUE
#define TRUE (0x01) /* Logical True Value */
#endif
#ifndef FALSE
#define FALSE (0x00) /* Logical False Value */
#endif
// typedef uint8_t             utf8_t;       /* UTF8 Character String */
// typedef uint8_t             bool_t;       /* boolean data type */
typedef uint16_t ESESTATUS; /* Return values */
#define STATIC static

#endif /* PHESETYPES_H */
