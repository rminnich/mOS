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

int arch_add_memory(int nid, u64 start, u64 size,
		    struct mhp_params *params)
{
  //	unsigned long start_pfn = start >> PAGE_SHIFT;
  //	unsigned long nr_pages = size >> PAGE_SHIFT;

  panic("arch_add_memory: fix me");
  //init_memory_mapping(start, start + size, params->pgprot);

  //return add_pages(nid, start_pfn, nr_pages, params);
  return -1;
}

void __ref arch_remove_memory(u64 start, u64 size, struct vmem_altmap *altmap)
{
  panic("arch_remove_memory");
}

void __ref vmemmap_free(unsigned long start, unsigned long end,
		struct vmem_altmap *altmap)
{
  panic("vmemmap_free");
}
