/*
 * Copyright (c) 2020 Teltonika Telemedic
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief System/hardware module for STM32F0 processor
 */

#include <device.h>
#include <init.h>
#include <arch/cpu.h>
#include <arch/arm/aarch32/cortex_m/cmsis.h>
#include <linker/linker-defs.h>
#include <string.h>

/**
 * @brief Perform basic hardware initialization at boot.
 *
 * This needs to be run from the very beginning.
 * So the init priority has to be 0 (zero).
 *
 * @return 0
 */
static int bluenrg2_init(struct device *arg)
{
	u32_t key;

	ARG_UNUSED(arg);

	key = irq_lock();

	/* Install default handler that simply resets the CPU
	 * if configured in the kernel, NOP otherwise
	 */
	NMI_INIT();

	// TODO: add normar setup

	irq_unlock(key);

	return 0;
}

SYS_INIT(bluenrg2_init, PRE_KERNEL_1, 0);
