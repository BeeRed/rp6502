
/*
 * Copyright (c) 2023 Rumbledethumps
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _VSTACK_H_
#define _VSTACK_H_

#include <stddef.h>
#include <stdint.h>

#define VSTACK_RW REGS(0xFFEC)
#define VSTACK_SIZE 0x104
extern uint8_t vstack[];
extern volatile size_t vstack_ptr;

#endif /* _VSTACK_H_ */
