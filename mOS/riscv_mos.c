// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2012 Regents of the University of California
 * Copyright (C) 2019 Western Digital Corporation or its affiliates.
 * Copyright (C) 2020 FORTH-ICS/CARV
 *  Nick Kossifidis <mick@ics.forth.gr>
 */

#include <linux/init.h>
#include <linux/mm.h>
#include <linux/memblock.h>
#include <linux/initrd.h>
#include <linux/swap.h>
#include <linux/swiotlb.h>
#include <linux/sizes.h>
#include <linux/of_fdt.h>
#include <linux/of_reserved_mem.h>
#include <linux/libfdt.h>
#include <linux/set_memory.h>
#include <linux/dma-map-ops.h>
#include <linux/crash_dump.h>
#include <linux/hugetlb.h>
#ifdef CONFIG_RELOCATABLE
#include <linux/elf.h>
#endif
#include <linux/kfence.h>

#include <asm/fixmap.h>
#include <asm/tlbflush.h>
#include <asm/sections.h>
#include <asm/soc.h>
#include <asm/io.h>
#include <asm/ptdump.h>
#include <asm/numa.h>

#include "../kernel/head.h"


/*
 * When an LWK process is launched, this function will be called with a cpumask
 * representing the CPUs reserved for the process. Polling will be disabled
 * for correctable machine check events and correctable machine check interrupts
 * will be disabled.
 */
void mce_lwkprocess_begin(cpumask_t *lwkcpus, unsigned int threshold,
			  bool poll_enable)
{
	panic(__func__);
}
/*
 * When an LWK process exits, this function will be called with a cpumask
 * representing the CPUs reserved for the process. The state of machine check
 * polling, correctable machine check interrupt enablement and thresholding will
 * be restored. An immediate poll of the machine check banks to flush out any
 * events that may have accumulated during the process execution will be
 * performed.
 */
void mce_lwkprocess_end(cpumask_t *lwkcpus, bool reset_threshold,
		bool reenable_poll)
{
	panic(__func__);
}


