# Multi Operating System (mOS)
# Copyright (c) 2016, Intel Corporation.
#
# This program is free software; you can redistribute it and/or modify it
# under the terms and conditions of the GNU General Public License,
# version 2, as published by the Free Software Foundation.
#
# This program is distributed in the hope it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
# more details.

.NOTPARALLEL:

subdir-y += libmos xpmem lwkreset yod lwkctl mosview

_toolinst_: $(subdir-y:%=%_toolinst_)

$(subdir-y:%=%_toolinst_): %_toolinst_:
	$(Q)$(MAKE) $(build)=$(src)/$* _toolinst_


PHONY += _toolinst_ $(subdir-y:%=%_toolinst_)
