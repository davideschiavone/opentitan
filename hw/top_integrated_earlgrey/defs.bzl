# Copyright lowRISC contributors (OpenTitan project).
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#

load("//rules/opentitan:hw.bzl", "opentitan_top")
load("//hw/top_integrated_earlgrey/data/autogen:defs.bzl", "INTEGRATED_EARLGREY_IPS")

INTEGRATED_EARLGREY = opentitan_top(
    name = "integrated_earlgrey",
    hjson = "//hw/top_integrated_earlgrey/data/autogen:top_integrated_earlgrey.gen.hjson",
    top_lib = "//hw/top_integrated_earlgrey/sw/autogen:top_integrated_earlgrey",
    top_ld = "//hw/top_integrated_earlgrey/sw/autogen:top_integrated_earlgrey_memory",
    ips = INTEGRATED_EARLGREY_IPS,
)
