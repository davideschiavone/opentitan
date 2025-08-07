// Copyright lowRISC contributors (OpenTitan project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/examples/demos.h"
#include "sw/device/lib/arch/device.h"
#include "sw/device/lib/dif/dif_gpio.h"
#include "sw/device/lib/dif/dif_pinmux.h"
#include "sw/device/lib/dif/dif_uart.h"
#include "sw/device/lib/runtime/hart.h"
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/runtime/print.h"
#include "sw/device/lib/testing/pinmux_testutils.h"
#include "sw/device/lib/testing/test_framework/check.h"
#include "sw/device/lib/testing/test_framework/ottf_test_config.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

OTTF_DEFINE_TEST_CONFIG();

int _ottf_main(int argc, char **argv) {

  LOG_INFO("Hello, world!\n");

  volatile uint32_t *host_device = (volatile uint32_t *)0x60000000;

  for(int i=0;i<100;i++) host_device[i] = (uint32_t)(i*2);

  volatile uint32_t *mailbox_payload = (volatile uint32_t *)0x4048042C;

  while(*mailbox_payload != 0xDEADBEEF);

  volatile uint32_t *reg = (volatile uint32_t *)0x411f0080;
  *reg = 0x900d;  // ends application and test passes

  return 0;
}