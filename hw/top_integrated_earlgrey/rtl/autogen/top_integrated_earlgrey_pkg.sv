// Copyright lowRISC contributors (OpenTitan project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
//
// util/topgen.py -t hw/top_integrated_earlgrey/data/top_integrated_earlgrey.hjson \
//                -o hw/top_integrated_earlgrey/ \
//                --rnd_cnst_seed \
//                1017106219537032642877583828875051302543807092889754935647094601236425074047

package top_integrated_earlgrey_pkg;
  /**
   * Peripheral base address for uart0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART0_BASE_ADDR = 32'h40000000;

  /**
   * Peripheral size in bytes for uart0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for uart1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART1_BASE_ADDR = 32'h40010000;

  /**
   * Peripheral size in bytes for uart1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART1_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for uart2 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART2_BASE_ADDR = 32'h40020000;

  /**
   * Peripheral size in bytes for uart2 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART2_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for uart3 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART3_BASE_ADDR = 32'h40030000;

  /**
   * Peripheral size in bytes for uart3 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_UART3_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for gpio in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_GPIO_BASE_ADDR = 32'h40040000;

  /**
   * Peripheral size in bytes for gpio in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_GPIO_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for spi_device in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_DEVICE_BASE_ADDR = 32'h40050000;

  /**
   * Peripheral size in bytes for spi_device in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_DEVICE_SIZE_BYTES = 32'h2000;

  /**
   * Peripheral base address for i2c0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C0_BASE_ADDR = 32'h40080000;

  /**
   * Peripheral size in bytes for i2c0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C0_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for i2c1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C1_BASE_ADDR = 32'h40090000;

  /**
   * Peripheral size in bytes for i2c1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C1_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for i2c2 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C2_BASE_ADDR = 32'h400A0000;

  /**
   * Peripheral size in bytes for i2c2 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_I2C2_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pattgen in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PATTGEN_BASE_ADDR = 32'h400E0000;

  /**
   * Peripheral size in bytes for pattgen in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PATTGEN_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for rv_timer in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_TIMER_BASE_ADDR = 32'h40100000;

  /**
   * Peripheral size in bytes for rv_timer in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_TIMER_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for core device on otp_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_BASE_ADDR = 32'h40130000;

  /**
   * Peripheral size in bytes for core device on otp_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for prim device on otp_macro in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_BASE_ADDR = 32'h40138000;

  /**
   * Peripheral size in bytes for prim device on otp_macro in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_SIZE_BYTES = 32'h20;

  /**
   * Peripheral base address for regs device on lc_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_BASE_ADDR = 32'h40140000;

  /**
   * Peripheral size in bytes for regs device on lc_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for dmi device on lc_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_BASE_ADDR = 32'h0;

  /**
   * Peripheral size in bytes for dmi device on lc_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for alert_handler in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_BASE_ADDR = 32'h40150000;

  /**
   * Peripheral size in bytes for alert_handler in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_SIZE_BYTES = 32'h800;

  /**
   * Peripheral base address for spi_host0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_HOST0_BASE_ADDR = 32'h40300000;

  /**
   * Peripheral size in bytes for spi_host0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_HOST0_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for spi_host1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_HOST1_BASE_ADDR = 32'h40310000;

  /**
   * Peripheral size in bytes for spi_host1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SPI_HOST1_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for usbdev in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_USBDEV_BASE_ADDR = 32'h40320000;

  /**
   * Peripheral size in bytes for usbdev in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_USBDEV_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for pwrmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PWRMGR_AON_BASE_ADDR = 32'h40400000;

  /**
   * Peripheral size in bytes for pwrmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PWRMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rstmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RSTMGR_AON_BASE_ADDR = 32'h40410000;

  /**
   * Peripheral size in bytes for rstmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RSTMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for clkmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_CLKMGR_AON_BASE_ADDR = 32'h40420000;

  /**
   * Peripheral size in bytes for clkmgr_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_CLKMGR_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for sysrst_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR = 32'h40430000;

  /**
   * Peripheral size in bytes for sysrst_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for adc_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_BASE_ADDR = 32'h40440000;

  /**
   * Peripheral size in bytes for adc_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pwm_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PWM_AON_BASE_ADDR = 32'h40450000;

  /**
   * Peripheral size in bytes for pwm_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PWM_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for pinmux_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PINMUX_AON_BASE_ADDR = 32'h40460000;

  /**
   * Peripheral size in bytes for pinmux_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_PINMUX_AON_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for aon_timer_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_BASE_ADDR = 32'h40470000;

  /**
   * Peripheral size in bytes for aon_timer_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for mailbox in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_MAILBOX_BASE_ADDR = 32'h40480400;

  /**
   * Peripheral size in bytes for mailbox in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_MAILBOX_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for ast in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AST_BASE_ADDR = 32'h40480000;

  /**
   * Peripheral size in bytes for ast in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AST_SIZE_BYTES = 32'h400;

  /**
   * Peripheral base address for sensor_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_BASE_ADDR = 32'h40490000;

  /**
   * Peripheral size in bytes for sensor_ctrl_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for regs device on sram_ctrl_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR = 32'h40500000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for ram device on sram_ctrl_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR = 32'h40600000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for core device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_BASE_ADDR = 32'h41000000;

  /**
   * Peripheral size in bytes for core device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for prim device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_BASE_ADDR = 32'h41008000;

  /**
   * Peripheral size in bytes for prim device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for mem device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_BASE_ADDR = 32'h20000000;

  /**
   * Peripheral size in bytes for mem device on flash_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_SIZE_BYTES = 32'h100000;

  /**
   * Peripheral base address for regs device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_REGS_BASE_ADDR = 32'h41200000;

  /**
   * Peripheral size in bytes for regs device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_REGS_SIZE_BYTES = 32'h10;

  /**
   * Peripheral base address for mem device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_MEM_BASE_ADDR = 32'h10000;

  /**
   * Peripheral size in bytes for mem device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_MEM_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for dbg device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_DBG_BASE_ADDR = 32'h1000;

  /**
   * Peripheral size in bytes for dbg device on rv_dm in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_DM_DBG_SIZE_BYTES = 32'h200;

  /**
   * Peripheral base address for rv_plic in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_PLIC_BASE_ADDR = 32'h48000000;

  /**
   * Peripheral size in bytes for rv_plic in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_PLIC_SIZE_BYTES = 32'h8000000;

  /**
   * Peripheral base address for aes in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AES_BASE_ADDR = 32'h41100000;

  /**
   * Peripheral size in bytes for aes in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_AES_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for hmac in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_HMAC_BASE_ADDR = 32'h41110000;

  /**
   * Peripheral size in bytes for hmac in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_HMAC_SIZE_BYTES = 32'h2000;

  /**
   * Peripheral base address for kmac in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_KMAC_BASE_ADDR = 32'h41120000;

  /**
   * Peripheral size in bytes for kmac in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_KMAC_SIZE_BYTES = 32'h1000;

  /**
   * Peripheral base address for otbn in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTBN_BASE_ADDR = 32'h41130000;

  /**
   * Peripheral size in bytes for otbn in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_OTBN_SIZE_BYTES = 32'h10000;

  /**
   * Peripheral base address for keymgr in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_KEYMGR_BASE_ADDR = 32'h41140000;

  /**
   * Peripheral size in bytes for keymgr in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_KEYMGR_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for csrng in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_CSRNG_BASE_ADDR = 32'h41150000;

  /**
   * Peripheral size in bytes for csrng in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_CSRNG_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for entropy_src in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_BASE_ADDR = 32'h41160000;

  /**
   * Peripheral size in bytes for entropy_src in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_SIZE_BYTES = 32'h100;

  /**
   * Peripheral base address for edn0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EDN0_BASE_ADDR = 32'h41170000;

  /**
   * Peripheral size in bytes for edn0 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EDN0_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for edn1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EDN1_BASE_ADDR = 32'h41180000;

  /**
   * Peripheral size in bytes for edn1 in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EDN1_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for regs device on sram_ctrl_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR = 32'h411C0000;

  /**
   * Peripheral size in bytes for regs device on sram_ctrl_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES = 32'h40;

  /**
   * Peripheral base address for ram device on sram_ctrl_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR = 32'h10000000;

  /**
   * Peripheral size in bytes for ram device on sram_ctrl_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES = 32'h20000;

  /**
   * Peripheral base address for regs device on rom_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_BASE_ADDR = 32'h411E0000;

  /**
   * Peripheral size in bytes for regs device on rom_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES = 32'h80;

  /**
   * Peripheral base address for rom device on rom_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_BASE_ADDR = 32'h8000;

  /**
   * Peripheral size in bytes for rom device on rom_ctrl in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES = 32'h8000;

  /**
   * Peripheral base address for cfg device on rv_core_ibex in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR = 32'h411F0000;

  /**
   * Peripheral size in bytes for cfg device on rv_core_ibex in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES = 32'h100;

  /**
   * Memory base address for ram_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RAM_RET_AON_BASE_ADDR = 32'h40600000;

  /**
   * Memory size for ram_ret_aon in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RAM_RET_AON_SIZE_BYTES = 32'h1000;

  /**
   * Memory base address for eflash in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EFLASH_BASE_ADDR = 32'h20000000;

  /**
   * Memory size for eflash in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_EFLASH_SIZE_BYTES = 32'h100000;

  /**
   * Memory base address for ram_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RAM_MAIN_BASE_ADDR = 32'h10000000;

  /**
   * Memory size for ram_main in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_RAM_MAIN_SIZE_BYTES = 32'h20000;

  /**
   * Memory base address for rom in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_BASE_ADDR = 32'h8000;

  /**
   * Memory size for rom in top integrated_earlgrey.
   */
  parameter int unsigned TOP_INTEGRATED_EARLGREY_ROM_SIZE_BYTES = 32'h8000;


  // Enumeration of alert modules
  typedef enum int unsigned {
    TopIntegratedEarlgreyAlertPeripheralUart0 = 0,
    TopIntegratedEarlgreyAlertPeripheralUart1 = 1,
    TopIntegratedEarlgreyAlertPeripheralUart2 = 2,
    TopIntegratedEarlgreyAlertPeripheralUart3 = 3,
    TopIntegratedEarlgreyAlertPeripheralGpio = 4,
    TopIntegratedEarlgreyAlertPeripheralSpiDevice = 5,
    TopIntegratedEarlgreyAlertPeripheralI2c0 = 6,
    TopIntegratedEarlgreyAlertPeripheralI2c1 = 7,
    TopIntegratedEarlgreyAlertPeripheralI2c2 = 8,
    TopIntegratedEarlgreyAlertPeripheralPattgen = 9,
    TopIntegratedEarlgreyAlertPeripheralRvTimer = 10,
    TopIntegratedEarlgreyAlertPeripheralOtpCtrl = 11,
    TopIntegratedEarlgreyAlertPeripheralLcCtrl = 12,
    TopIntegratedEarlgreyAlertPeripheralSpiHost0 = 13,
    TopIntegratedEarlgreyAlertPeripheralSpiHost1 = 14,
    TopIntegratedEarlgreyAlertPeripheralUsbdev = 15,
    TopIntegratedEarlgreyAlertPeripheralPwrmgrAon = 16,
    TopIntegratedEarlgreyAlertPeripheralRstmgrAon = 17,
    TopIntegratedEarlgreyAlertPeripheralClkmgrAon = 18,
    TopIntegratedEarlgreyAlertPeripheralSysrstCtrlAon = 19,
    TopIntegratedEarlgreyAlertPeripheralAdcCtrlAon = 20,
    TopIntegratedEarlgreyAlertPeripheralPwmAon = 21,
    TopIntegratedEarlgreyAlertPeripheralPinmuxAon = 22,
    TopIntegratedEarlgreyAlertPeripheralAonTimerAon = 23,
    TopIntegratedEarlgreyAlertPeripheralMailbox = 24,
    TopIntegratedEarlgreyAlertPeripheralSensorCtrlAon = 25,
    TopIntegratedEarlgreyAlertPeripheralSramCtrlRetAon = 26,
    TopIntegratedEarlgreyAlertPeripheralFlashCtrl = 27,
    TopIntegratedEarlgreyAlertPeripheralRvDm = 28,
    TopIntegratedEarlgreyAlertPeripheralRvPlic = 29,
    TopIntegratedEarlgreyAlertPeripheralAes = 30,
    TopIntegratedEarlgreyAlertPeripheralHmac = 31,
    TopIntegratedEarlgreyAlertPeripheralKmac = 32,
    TopIntegratedEarlgreyAlertPeripheralOtbn = 33,
    TopIntegratedEarlgreyAlertPeripheralKeymgr = 34,
    TopIntegratedEarlgreyAlertPeripheralCsrng = 35,
    TopIntegratedEarlgreyAlertPeripheralEntropySrc = 36,
    TopIntegratedEarlgreyAlertPeripheralEdn0 = 37,
    TopIntegratedEarlgreyAlertPeripheralEdn1 = 38,
    TopIntegratedEarlgreyAlertPeripheralSramCtrlMain = 39,
    TopIntegratedEarlgreyAlertPeripheralRomCtrl = 40,
    TopIntegratedEarlgreyAlertPeripheralRvCoreIbex = 41,
    TopIntegratedEarlgreyAlertPeripheralCount
  } alert_peripheral_e;

  // Enumeration of alerts
  typedef enum int unsigned {
    TopIntegratedEarlgreyAlertIdUart0FatalFault = 0,
    TopIntegratedEarlgreyAlertIdUart1FatalFault = 1,
    TopIntegratedEarlgreyAlertIdUart2FatalFault = 2,
    TopIntegratedEarlgreyAlertIdUart3FatalFault = 3,
    TopIntegratedEarlgreyAlertIdGpioFatalFault = 4,
    TopIntegratedEarlgreyAlertIdSpiDeviceFatalFault = 5,
    TopIntegratedEarlgreyAlertIdI2c0FatalFault = 6,
    TopIntegratedEarlgreyAlertIdI2c1FatalFault = 7,
    TopIntegratedEarlgreyAlertIdI2c2FatalFault = 8,
    TopIntegratedEarlgreyAlertIdPattgenFatalFault = 9,
    TopIntegratedEarlgreyAlertIdRvTimerFatalFault = 10,
    TopIntegratedEarlgreyAlertIdOtpCtrlFatalMacroError = 11,
    TopIntegratedEarlgreyAlertIdOtpCtrlFatalCheckError = 12,
    TopIntegratedEarlgreyAlertIdOtpCtrlFatalBusIntegError = 13,
    TopIntegratedEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert = 14,
    TopIntegratedEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert = 15,
    TopIntegratedEarlgreyAlertIdLcCtrlFatalProgError = 16,
    TopIntegratedEarlgreyAlertIdLcCtrlFatalStateError = 17,
    TopIntegratedEarlgreyAlertIdLcCtrlFatalBusIntegError = 18,
    TopIntegratedEarlgreyAlertIdSpiHost0FatalFault = 19,
    TopIntegratedEarlgreyAlertIdSpiHost1FatalFault = 20,
    TopIntegratedEarlgreyAlertIdUsbdevFatalFault = 21,
    TopIntegratedEarlgreyAlertIdPwrmgrAonFatalFault = 22,
    TopIntegratedEarlgreyAlertIdRstmgrAonFatalFault = 23,
    TopIntegratedEarlgreyAlertIdRstmgrAonFatalCnstyFault = 24,
    TopIntegratedEarlgreyAlertIdClkmgrAonRecovFault = 25,
    TopIntegratedEarlgreyAlertIdClkmgrAonFatalFault = 26,
    TopIntegratedEarlgreyAlertIdSysrstCtrlAonFatalFault = 27,
    TopIntegratedEarlgreyAlertIdAdcCtrlAonFatalFault = 28,
    TopIntegratedEarlgreyAlertIdPwmAonFatalFault = 29,
    TopIntegratedEarlgreyAlertIdPinmuxAonFatalFault = 30,
    TopIntegratedEarlgreyAlertIdAonTimerAonFatalFault = 31,
    TopIntegratedEarlgreyAlertIdMailboxFatalFault = 32,
    TopIntegratedEarlgreyAlertIdSensorCtrlAonRecovAlert = 33,
    TopIntegratedEarlgreyAlertIdSensorCtrlAonFatalAlert = 34,
    TopIntegratedEarlgreyAlertIdSramCtrlRetAonFatalError = 35,
    TopIntegratedEarlgreyAlertIdFlashCtrlRecovErr = 36,
    TopIntegratedEarlgreyAlertIdFlashCtrlFatalStdErr = 37,
    TopIntegratedEarlgreyAlertIdFlashCtrlFatalErr = 38,
    TopIntegratedEarlgreyAlertIdFlashCtrlFatalPrimFlashAlert = 39,
    TopIntegratedEarlgreyAlertIdFlashCtrlRecovPrimFlashAlert = 40,
    TopIntegratedEarlgreyAlertIdRvDmFatalFault = 41,
    TopIntegratedEarlgreyAlertIdRvPlicFatalFault = 42,
    TopIntegratedEarlgreyAlertIdAesRecovCtrlUpdateErr = 43,
    TopIntegratedEarlgreyAlertIdAesFatalFault = 44,
    TopIntegratedEarlgreyAlertIdHmacFatalFault = 45,
    TopIntegratedEarlgreyAlertIdKmacRecovOperationErr = 46,
    TopIntegratedEarlgreyAlertIdKmacFatalFaultErr = 47,
    TopIntegratedEarlgreyAlertIdOtbnFatal = 48,
    TopIntegratedEarlgreyAlertIdOtbnRecov = 49,
    TopIntegratedEarlgreyAlertIdKeymgrRecovOperationErr = 50,
    TopIntegratedEarlgreyAlertIdKeymgrFatalFaultErr = 51,
    TopIntegratedEarlgreyAlertIdCsrngRecovAlert = 52,
    TopIntegratedEarlgreyAlertIdCsrngFatalAlert = 53,
    TopIntegratedEarlgreyAlertIdEntropySrcRecovAlert = 54,
    TopIntegratedEarlgreyAlertIdEntropySrcFatalAlert = 55,
    TopIntegratedEarlgreyAlertIdEdn0RecovAlert = 56,
    TopIntegratedEarlgreyAlertIdEdn0FatalAlert = 57,
    TopIntegratedEarlgreyAlertIdEdn1RecovAlert = 58,
    TopIntegratedEarlgreyAlertIdEdn1FatalAlert = 59,
    TopIntegratedEarlgreyAlertIdSramCtrlMainFatalError = 60,
    TopIntegratedEarlgreyAlertIdRomCtrlFatal = 61,
    TopIntegratedEarlgreyAlertIdRvCoreIbexFatalSwErr = 62,
    TopIntegratedEarlgreyAlertIdRvCoreIbexRecovSwErr = 63,
    TopIntegratedEarlgreyAlertIdRvCoreIbexFatalHwErr = 64,
    TopIntegratedEarlgreyAlertIdRvCoreIbexRecovHwErr = 65,
    TopIntegratedEarlgreyAlertIdCount
  } alert_id_e;

  // Enumeration of interrupts
  typedef enum int unsigned {
    TopIntegratedEarlgreyIrqIdUart0TxWatermark = 1,
    TopIntegratedEarlgreyIrqIdUart0RxWatermark = 2,
    TopIntegratedEarlgreyIrqIdUart0TxDone = 3,
    TopIntegratedEarlgreyIrqIdUart0RxOverflow = 4,
    TopIntegratedEarlgreyIrqIdUart0RxFrameErr = 5,
    TopIntegratedEarlgreyIrqIdUart0RxBreakErr = 6,
    TopIntegratedEarlgreyIrqIdUart0RxTimeout = 7,
    TopIntegratedEarlgreyIrqIdUart0RxParityErr = 8,
    TopIntegratedEarlgreyIrqIdUart0TxEmpty = 9,
    TopIntegratedEarlgreyIrqIdUart1TxWatermark = 10,
    TopIntegratedEarlgreyIrqIdUart1RxWatermark = 11,
    TopIntegratedEarlgreyIrqIdUart1TxDone = 12,
    TopIntegratedEarlgreyIrqIdUart1RxOverflow = 13,
    TopIntegratedEarlgreyIrqIdUart1RxFrameErr = 14,
    TopIntegratedEarlgreyIrqIdUart1RxBreakErr = 15,
    TopIntegratedEarlgreyIrqIdUart1RxTimeout = 16,
    TopIntegratedEarlgreyIrqIdUart1RxParityErr = 17,
    TopIntegratedEarlgreyIrqIdUart1TxEmpty = 18,
    TopIntegratedEarlgreyIrqIdUart2TxWatermark = 19,
    TopIntegratedEarlgreyIrqIdUart2RxWatermark = 20,
    TopIntegratedEarlgreyIrqIdUart2TxDone = 21,
    TopIntegratedEarlgreyIrqIdUart2RxOverflow = 22,
    TopIntegratedEarlgreyIrqIdUart2RxFrameErr = 23,
    TopIntegratedEarlgreyIrqIdUart2RxBreakErr = 24,
    TopIntegratedEarlgreyIrqIdUart2RxTimeout = 25,
    TopIntegratedEarlgreyIrqIdUart2RxParityErr = 26,
    TopIntegratedEarlgreyIrqIdUart2TxEmpty = 27,
    TopIntegratedEarlgreyIrqIdUart3TxWatermark = 28,
    TopIntegratedEarlgreyIrqIdUart3RxWatermark = 29,
    TopIntegratedEarlgreyIrqIdUart3TxDone = 30,
    TopIntegratedEarlgreyIrqIdUart3RxOverflow = 31,
    TopIntegratedEarlgreyIrqIdUart3RxFrameErr = 32,
    TopIntegratedEarlgreyIrqIdUart3RxBreakErr = 33,
    TopIntegratedEarlgreyIrqIdUart3RxTimeout = 34,
    TopIntegratedEarlgreyIrqIdUart3RxParityErr = 35,
    TopIntegratedEarlgreyIrqIdUart3TxEmpty = 36,
    TopIntegratedEarlgreyIrqIdGpioGpio0 = 37,
    TopIntegratedEarlgreyIrqIdGpioGpio1 = 38,
    TopIntegratedEarlgreyIrqIdGpioGpio2 = 39,
    TopIntegratedEarlgreyIrqIdGpioGpio3 = 40,
    TopIntegratedEarlgreyIrqIdGpioGpio4 = 41,
    TopIntegratedEarlgreyIrqIdGpioGpio5 = 42,
    TopIntegratedEarlgreyIrqIdGpioGpio6 = 43,
    TopIntegratedEarlgreyIrqIdGpioGpio7 = 44,
    TopIntegratedEarlgreyIrqIdGpioGpio8 = 45,
    TopIntegratedEarlgreyIrqIdGpioGpio9 = 46,
    TopIntegratedEarlgreyIrqIdGpioGpio10 = 47,
    TopIntegratedEarlgreyIrqIdGpioGpio11 = 48,
    TopIntegratedEarlgreyIrqIdGpioGpio12 = 49,
    TopIntegratedEarlgreyIrqIdGpioGpio13 = 50,
    TopIntegratedEarlgreyIrqIdGpioGpio14 = 51,
    TopIntegratedEarlgreyIrqIdGpioGpio15 = 52,
    TopIntegratedEarlgreyIrqIdGpioGpio16 = 53,
    TopIntegratedEarlgreyIrqIdGpioGpio17 = 54,
    TopIntegratedEarlgreyIrqIdGpioGpio18 = 55,
    TopIntegratedEarlgreyIrqIdGpioGpio19 = 56,
    TopIntegratedEarlgreyIrqIdGpioGpio20 = 57,
    TopIntegratedEarlgreyIrqIdGpioGpio21 = 58,
    TopIntegratedEarlgreyIrqIdGpioGpio22 = 59,
    TopIntegratedEarlgreyIrqIdGpioGpio23 = 60,
    TopIntegratedEarlgreyIrqIdGpioGpio24 = 61,
    TopIntegratedEarlgreyIrqIdGpioGpio25 = 62,
    TopIntegratedEarlgreyIrqIdGpioGpio26 = 63,
    TopIntegratedEarlgreyIrqIdGpioGpio27 = 64,
    TopIntegratedEarlgreyIrqIdGpioGpio28 = 65,
    TopIntegratedEarlgreyIrqIdGpioGpio29 = 66,
    TopIntegratedEarlgreyIrqIdGpioGpio30 = 67,
    TopIntegratedEarlgreyIrqIdGpioGpio31 = 68,
    TopIntegratedEarlgreyIrqIdSpiDeviceUploadCmdfifoNotEmpty = 69,
    TopIntegratedEarlgreyIrqIdSpiDeviceUploadPayloadNotEmpty = 70,
    TopIntegratedEarlgreyIrqIdSpiDeviceUploadPayloadOverflow = 71,
    TopIntegratedEarlgreyIrqIdSpiDeviceReadbufWatermark = 72,
    TopIntegratedEarlgreyIrqIdSpiDeviceReadbufFlip = 73,
    TopIntegratedEarlgreyIrqIdSpiDeviceTpmHeaderNotEmpty = 74,
    TopIntegratedEarlgreyIrqIdSpiDeviceTpmRdfifoCmdEnd = 75,
    TopIntegratedEarlgreyIrqIdSpiDeviceTpmRdfifoDrop = 76,
    TopIntegratedEarlgreyIrqIdI2c0FmtThreshold = 77,
    TopIntegratedEarlgreyIrqIdI2c0RxThreshold = 78,
    TopIntegratedEarlgreyIrqIdI2c0AcqThreshold = 79,
    TopIntegratedEarlgreyIrqIdI2c0RxOverflow = 80,
    TopIntegratedEarlgreyIrqIdI2c0ControllerHalt = 81,
    TopIntegratedEarlgreyIrqIdI2c0SclInterference = 82,
    TopIntegratedEarlgreyIrqIdI2c0SdaInterference = 83,
    TopIntegratedEarlgreyIrqIdI2c0StretchTimeout = 84,
    TopIntegratedEarlgreyIrqIdI2c0SdaUnstable = 85,
    TopIntegratedEarlgreyIrqIdI2c0CmdComplete = 86,
    TopIntegratedEarlgreyIrqIdI2c0TxStretch = 87,
    TopIntegratedEarlgreyIrqIdI2c0TxThreshold = 88,
    TopIntegratedEarlgreyIrqIdI2c0AcqStretch = 89,
    TopIntegratedEarlgreyIrqIdI2c0UnexpStop = 90,
    TopIntegratedEarlgreyIrqIdI2c0HostTimeout = 91,
    TopIntegratedEarlgreyIrqIdI2c1FmtThreshold = 92,
    TopIntegratedEarlgreyIrqIdI2c1RxThreshold = 93,
    TopIntegratedEarlgreyIrqIdI2c1AcqThreshold = 94,
    TopIntegratedEarlgreyIrqIdI2c1RxOverflow = 95,
    TopIntegratedEarlgreyIrqIdI2c1ControllerHalt = 96,
    TopIntegratedEarlgreyIrqIdI2c1SclInterference = 97,
    TopIntegratedEarlgreyIrqIdI2c1SdaInterference = 98,
    TopIntegratedEarlgreyIrqIdI2c1StretchTimeout = 99,
    TopIntegratedEarlgreyIrqIdI2c1SdaUnstable = 100,
    TopIntegratedEarlgreyIrqIdI2c1CmdComplete = 101,
    TopIntegratedEarlgreyIrqIdI2c1TxStretch = 102,
    TopIntegratedEarlgreyIrqIdI2c1TxThreshold = 103,
    TopIntegratedEarlgreyIrqIdI2c1AcqStretch = 104,
    TopIntegratedEarlgreyIrqIdI2c1UnexpStop = 105,
    TopIntegratedEarlgreyIrqIdI2c1HostTimeout = 106,
    TopIntegratedEarlgreyIrqIdI2c2FmtThreshold = 107,
    TopIntegratedEarlgreyIrqIdI2c2RxThreshold = 108,
    TopIntegratedEarlgreyIrqIdI2c2AcqThreshold = 109,
    TopIntegratedEarlgreyIrqIdI2c2RxOverflow = 110,
    TopIntegratedEarlgreyIrqIdI2c2ControllerHalt = 111,
    TopIntegratedEarlgreyIrqIdI2c2SclInterference = 112,
    TopIntegratedEarlgreyIrqIdI2c2SdaInterference = 113,
    TopIntegratedEarlgreyIrqIdI2c2StretchTimeout = 114,
    TopIntegratedEarlgreyIrqIdI2c2SdaUnstable = 115,
    TopIntegratedEarlgreyIrqIdI2c2CmdComplete = 116,
    TopIntegratedEarlgreyIrqIdI2c2TxStretch = 117,
    TopIntegratedEarlgreyIrqIdI2c2TxThreshold = 118,
    TopIntegratedEarlgreyIrqIdI2c2AcqStretch = 119,
    TopIntegratedEarlgreyIrqIdI2c2UnexpStop = 120,
    TopIntegratedEarlgreyIrqIdI2c2HostTimeout = 121,
    TopIntegratedEarlgreyIrqIdPattgenDoneCh0 = 122,
    TopIntegratedEarlgreyIrqIdPattgenDoneCh1 = 123,
    TopIntegratedEarlgreyIrqIdRvTimerTimerExpiredHart0Timer0 = 124,
    TopIntegratedEarlgreyIrqIdOtpCtrlOtpOperationDone = 125,
    TopIntegratedEarlgreyIrqIdOtpCtrlOtpError = 126,
    TopIntegratedEarlgreyIrqIdAlertHandlerClassa = 127,
    TopIntegratedEarlgreyIrqIdAlertHandlerClassb = 128,
    TopIntegratedEarlgreyIrqIdAlertHandlerClassc = 129,
    TopIntegratedEarlgreyIrqIdAlertHandlerClassd = 130,
    TopIntegratedEarlgreyIrqIdSpiHost0Error = 131,
    TopIntegratedEarlgreyIrqIdSpiHost0SpiEvent = 132,
    TopIntegratedEarlgreyIrqIdSpiHost1Error = 133,
    TopIntegratedEarlgreyIrqIdSpiHost1SpiEvent = 134,
    TopIntegratedEarlgreyIrqIdUsbdevPktReceived = 135,
    TopIntegratedEarlgreyIrqIdUsbdevPktSent = 136,
    TopIntegratedEarlgreyIrqIdUsbdevDisconnected = 137,
    TopIntegratedEarlgreyIrqIdUsbdevHostLost = 138,
    TopIntegratedEarlgreyIrqIdUsbdevLinkReset = 139,
    TopIntegratedEarlgreyIrqIdUsbdevLinkSuspend = 140,
    TopIntegratedEarlgreyIrqIdUsbdevLinkResume = 141,
    TopIntegratedEarlgreyIrqIdUsbdevAvOutEmpty = 142,
    TopIntegratedEarlgreyIrqIdUsbdevRxFull = 143,
    TopIntegratedEarlgreyIrqIdUsbdevAvOverflow = 144,
    TopIntegratedEarlgreyIrqIdUsbdevLinkInErr = 145,
    TopIntegratedEarlgreyIrqIdUsbdevRxCrcErr = 146,
    TopIntegratedEarlgreyIrqIdUsbdevRxPidErr = 147,
    TopIntegratedEarlgreyIrqIdUsbdevRxBitstuffErr = 148,
    TopIntegratedEarlgreyIrqIdUsbdevFrame = 149,
    TopIntegratedEarlgreyIrqIdUsbdevPowered = 150,
    TopIntegratedEarlgreyIrqIdUsbdevLinkOutErr = 151,
    TopIntegratedEarlgreyIrqIdUsbdevAvSetupEmpty = 152,
    TopIntegratedEarlgreyIrqIdPwrmgrAonWakeup = 153,
    TopIntegratedEarlgreyIrqIdSysrstCtrlAonEventDetected = 154,
    TopIntegratedEarlgreyIrqIdAdcCtrlAonMatchPending = 155,
    TopIntegratedEarlgreyIrqIdAonTimerAonWkupTimerExpired = 156,
    TopIntegratedEarlgreyIrqIdAonTimerAonWdogTimerBark = 157,
    TopIntegratedEarlgreyIrqIdMailboxDoorbell = 158,
    TopIntegratedEarlgreyIrqIdMailboxCompletion = 159,
    TopIntegratedEarlgreyIrqIdSensorCtrlAonIoStatusChange = 160,
    TopIntegratedEarlgreyIrqIdSensorCtrlAonInitStatusChange = 161,
    TopIntegratedEarlgreyIrqIdFlashCtrlProgEmpty = 162,
    TopIntegratedEarlgreyIrqIdFlashCtrlProgLvl = 163,
    TopIntegratedEarlgreyIrqIdFlashCtrlRdFull = 164,
    TopIntegratedEarlgreyIrqIdFlashCtrlRdLvl = 165,
    TopIntegratedEarlgreyIrqIdFlashCtrlOpDone = 166,
    TopIntegratedEarlgreyIrqIdFlashCtrlCorrErr = 167,
    TopIntegratedEarlgreyIrqIdHmacHmacDone = 168,
    TopIntegratedEarlgreyIrqIdHmacFifoEmpty = 169,
    TopIntegratedEarlgreyIrqIdHmacHmacErr = 170,
    TopIntegratedEarlgreyIrqIdKmacKmacDone = 171,
    TopIntegratedEarlgreyIrqIdKmacFifoEmpty = 172,
    TopIntegratedEarlgreyIrqIdKmacKmacErr = 173,
    TopIntegratedEarlgreyIrqIdOtbnDone = 174,
    TopIntegratedEarlgreyIrqIdKeymgrOpDone = 175,
    TopIntegratedEarlgreyIrqIdCsrngCsCmdReqDone = 176,
    TopIntegratedEarlgreyIrqIdCsrngCsEntropyReq = 177,
    TopIntegratedEarlgreyIrqIdCsrngCsHwInstExc = 178,
    TopIntegratedEarlgreyIrqIdCsrngCsFatalErr = 179,
    TopIntegratedEarlgreyIrqIdEntropySrcEsEntropyValid = 180,
    TopIntegratedEarlgreyIrqIdEntropySrcEsHealthTestFailed = 181,
    TopIntegratedEarlgreyIrqIdEntropySrcEsObserveFifoReady = 182,
    TopIntegratedEarlgreyIrqIdEntropySrcEsFatalErr = 183,
    TopIntegratedEarlgreyIrqIdEdn0EdnCmdReqDone = 184,
    TopIntegratedEarlgreyIrqIdEdn0EdnFatalErr = 185,
    TopIntegratedEarlgreyIrqIdEdn1EdnCmdReqDone = 186,
    TopIntegratedEarlgreyIrqIdEdn1EdnFatalErr = 187,
    TopIntegratedEarlgreyIrqIdCount
  } interrupt_id_e;

  // Enumeration of IO power domains.
  // Only used in ASIC target.
  typedef enum logic [2:0] {
    IoBankVcc = 0,
    IoBankAvcc = 1,
    IoBankVioa = 2,
    IoBankViob = 3,
    IoBankCount = 4
  } pwr_dom_e;

  // Enumeration for MIO signals on the top-level.
  typedef enum int unsigned {
    MioInGpioGpio0 = 0,
    MioInGpioGpio1 = 1,
    MioInGpioGpio2 = 2,
    MioInGpioGpio3 = 3,
    MioInGpioGpio4 = 4,
    MioInGpioGpio5 = 5,
    MioInGpioGpio6 = 6,
    MioInGpioGpio7 = 7,
    MioInGpioGpio8 = 8,
    MioInGpioGpio9 = 9,
    MioInGpioGpio10 = 10,
    MioInGpioGpio11 = 11,
    MioInGpioGpio12 = 12,
    MioInGpioGpio13 = 13,
    MioInGpioGpio14 = 14,
    MioInGpioGpio15 = 15,
    MioInGpioGpio16 = 16,
    MioInGpioGpio17 = 17,
    MioInGpioGpio18 = 18,
    MioInGpioGpio19 = 19,
    MioInGpioGpio20 = 20,
    MioInGpioGpio21 = 21,
    MioInGpioGpio22 = 22,
    MioInGpioGpio23 = 23,
    MioInGpioGpio24 = 24,
    MioInGpioGpio25 = 25,
    MioInGpioGpio26 = 26,
    MioInGpioGpio27 = 27,
    MioInGpioGpio28 = 28,
    MioInGpioGpio29 = 29,
    MioInGpioGpio30 = 30,
    MioInGpioGpio31 = 31,
    MioInI2c0Sda = 32,
    MioInI2c0Scl = 33,
    MioInI2c1Sda = 34,
    MioInI2c1Scl = 35,
    MioInI2c2Sda = 36,
    MioInI2c2Scl = 37,
    MioInSpiHost1Sd0 = 38,
    MioInSpiHost1Sd1 = 39,
    MioInSpiHost1Sd2 = 40,
    MioInSpiHost1Sd3 = 41,
    MioInUart0Rx = 42,
    MioInUart1Rx = 43,
    MioInUart2Rx = 44,
    MioInUart3Rx = 45,
    MioInSpiDeviceTpmCsb = 46,
    MioInFlashCtrlTck = 47,
    MioInFlashCtrlTms = 48,
    MioInFlashCtrlTdi = 49,
    MioInSysrstCtrlAonAcPresent = 50,
    MioInSysrstCtrlAonKey0In = 51,
    MioInSysrstCtrlAonKey1In = 52,
    MioInSysrstCtrlAonKey2In = 53,
    MioInSysrstCtrlAonPwrbIn = 54,
    MioInSysrstCtrlAonLidOpen = 55,
    MioInUsbdevSense = 56,
    MioInCount = 57
  } mio_in_e;

  typedef enum {
    MioOutGpioGpio0 = 0,
    MioOutGpioGpio1 = 1,
    MioOutGpioGpio2 = 2,
    MioOutGpioGpio3 = 3,
    MioOutGpioGpio4 = 4,
    MioOutGpioGpio5 = 5,
    MioOutGpioGpio6 = 6,
    MioOutGpioGpio7 = 7,
    MioOutGpioGpio8 = 8,
    MioOutGpioGpio9 = 9,
    MioOutGpioGpio10 = 10,
    MioOutGpioGpio11 = 11,
    MioOutGpioGpio12 = 12,
    MioOutGpioGpio13 = 13,
    MioOutGpioGpio14 = 14,
    MioOutGpioGpio15 = 15,
    MioOutGpioGpio16 = 16,
    MioOutGpioGpio17 = 17,
    MioOutGpioGpio18 = 18,
    MioOutGpioGpio19 = 19,
    MioOutGpioGpio20 = 20,
    MioOutGpioGpio21 = 21,
    MioOutGpioGpio22 = 22,
    MioOutGpioGpio23 = 23,
    MioOutGpioGpio24 = 24,
    MioOutGpioGpio25 = 25,
    MioOutGpioGpio26 = 26,
    MioOutGpioGpio27 = 27,
    MioOutGpioGpio28 = 28,
    MioOutGpioGpio29 = 29,
    MioOutGpioGpio30 = 30,
    MioOutGpioGpio31 = 31,
    MioOutI2c0Sda = 32,
    MioOutI2c0Scl = 33,
    MioOutI2c1Sda = 34,
    MioOutI2c1Scl = 35,
    MioOutI2c2Sda = 36,
    MioOutI2c2Scl = 37,
    MioOutSpiHost1Sd0 = 38,
    MioOutSpiHost1Sd1 = 39,
    MioOutSpiHost1Sd2 = 40,
    MioOutSpiHost1Sd3 = 41,
    MioOutUart0Tx = 42,
    MioOutUart1Tx = 43,
    MioOutUart2Tx = 44,
    MioOutUart3Tx = 45,
    MioOutPattgenPda0Tx = 46,
    MioOutPattgenPcl0Tx = 47,
    MioOutPattgenPda1Tx = 48,
    MioOutPattgenPcl1Tx = 49,
    MioOutSpiHost1Sck = 50,
    MioOutSpiHost1Csb = 51,
    MioOutFlashCtrlTdo = 52,
    MioOutSensorCtrlAonAstDebugOut0 = 53,
    MioOutSensorCtrlAonAstDebugOut1 = 54,
    MioOutSensorCtrlAonAstDebugOut2 = 55,
    MioOutSensorCtrlAonAstDebugOut3 = 56,
    MioOutSensorCtrlAonAstDebugOut4 = 57,
    MioOutSensorCtrlAonAstDebugOut5 = 58,
    MioOutSensorCtrlAonAstDebugOut6 = 59,
    MioOutSensorCtrlAonAstDebugOut7 = 60,
    MioOutSensorCtrlAonAstDebugOut8 = 61,
    MioOutPwmAonPwm0 = 62,
    MioOutPwmAonPwm1 = 63,
    MioOutPwmAonPwm2 = 64,
    MioOutPwmAonPwm3 = 65,
    MioOutPwmAonPwm4 = 66,
    MioOutPwmAonPwm5 = 67,
    MioOutOtpMacroTest0 = 68,
    MioOutSysrstCtrlAonBatDisable = 69,
    MioOutSysrstCtrlAonKey0Out = 70,
    MioOutSysrstCtrlAonKey1Out = 71,
    MioOutSysrstCtrlAonKey2Out = 72,
    MioOutSysrstCtrlAonPwrbOut = 73,
    MioOutSysrstCtrlAonZ3Wakeup = 74,
    MioOutCount = 75
  } mio_out_e;

  // Enumeration for DIO signals, used on both the top and chip-levels.
  typedef enum int unsigned {
    DioUsbdevUsbDp = 0,
    DioUsbdevUsbDn = 1,
    DioSpiHost0Sd0 = 2,
    DioSpiHost0Sd1 = 3,
    DioSpiHost0Sd2 = 4,
    DioSpiHost0Sd3 = 5,
    DioSpiDeviceSd0 = 6,
    DioSpiDeviceSd1 = 7,
    DioSpiDeviceSd2 = 8,
    DioSpiDeviceSd3 = 9,
    DioSysrstCtrlAonEcRstL = 10,
    DioSysrstCtrlAonFlashWpL = 11,
    DioSpiDeviceSck = 12,
    DioSpiDeviceCsb = 13,
    DioSpiHost0Sck = 14,
    DioSpiHost0Csb = 15,
    DioCount = 16
  } dio_e;

  // Enumeration for the types of pads.
  typedef enum {
    MioPad,
    DioPad
  } pad_type_e;

  // Raw MIO/DIO input array indices on chip-level.
  // TODO: Does not account for target specific stubbed/added pads.
  // Need to make a target-specific package for those.
  typedef enum int unsigned {
    MioPadIoa0 = 0,
    MioPadIoa1 = 1,
    MioPadIoa2 = 2,
    MioPadIoa3 = 3,
    MioPadIoa4 = 4,
    MioPadIoa5 = 5,
    MioPadIoa6 = 6,
    MioPadIoa7 = 7,
    MioPadIoa8 = 8,
    MioPadIob0 = 9,
    MioPadIob1 = 10,
    MioPadIob2 = 11,
    MioPadIob3 = 12,
    MioPadIob4 = 13,
    MioPadIob5 = 14,
    MioPadIob6 = 15,
    MioPadIob7 = 16,
    MioPadIob8 = 17,
    MioPadIob9 = 18,
    MioPadIob10 = 19,
    MioPadIob11 = 20,
    MioPadIob12 = 21,
    MioPadIoc0 = 22,
    MioPadIoc1 = 23,
    MioPadIoc2 = 24,
    MioPadIoc3 = 25,
    MioPadIoc4 = 26,
    MioPadIoc5 = 27,
    MioPadIoc6 = 28,
    MioPadIoc7 = 29,
    MioPadIoc8 = 30,
    MioPadIoc9 = 31,
    MioPadIoc10 = 32,
    MioPadIoc11 = 33,
    MioPadIoc12 = 34,
    MioPadIor0 = 35,
    MioPadIor1 = 36,
    MioPadIor2 = 37,
    MioPadIor3 = 38,
    MioPadIor4 = 39,
    MioPadIor5 = 40,
    MioPadIor6 = 41,
    MioPadIor7 = 42,
    MioPadIor10 = 43,
    MioPadIor11 = 44,
    MioPadIor12 = 45,
    MioPadIor13 = 46,
    MioPadCount
  } mio_pad_e;

  typedef enum int unsigned {
    DioPadPorN = 0,
    DioPadUsbP = 1,
    DioPadUsbN = 2,
    DioPadCc1 = 3,
    DioPadCc2 = 4,
    DioPadFlashTestVolt = 5,
    DioPadFlashTestMode0 = 6,
    DioPadFlashTestMode1 = 7,
    DioPadOtpExtVolt = 8,
    DioPadSpiHostD0 = 9,
    DioPadSpiHostD1 = 10,
    DioPadSpiHostD2 = 11,
    DioPadSpiHostD3 = 12,
    DioPadSpiHostClk = 13,
    DioPadSpiHostCsL = 14,
    DioPadSpiDevD0 = 15,
    DioPadSpiDevD1 = 16,
    DioPadSpiDevD2 = 17,
    DioPadSpiDevD3 = 18,
    DioPadSpiDevClk = 19,
    DioPadSpiDevCsL = 20,
    DioPadIor8 = 21,
    DioPadIor9 = 22,
    DioPadCount
  } dio_pad_e;

  // List of peripheral instantiated in this chip.
  typedef enum {
    PeripheralAdcCtrlAon,
    PeripheralAes,
    PeripheralAlertHandler,
    PeripheralAonTimerAon,
    PeripheralAst,
    PeripheralClkmgrAon,
    PeripheralCsrng,
    PeripheralEdn0,
    PeripheralEdn1,
    PeripheralEntropySrc,
    PeripheralFlashCtrl,
    PeripheralGpio,
    PeripheralHmac,
    PeripheralI2c0,
    PeripheralI2c1,
    PeripheralI2c2,
    PeripheralKeymgr,
    PeripheralKmac,
    PeripheralLcCtrl,
    PeripheralMailbox,
    PeripheralOtbn,
    PeripheralOtpCtrl,
    PeripheralOtpMacro,
    PeripheralPattgen,
    PeripheralPinmuxAon,
    PeripheralPwmAon,
    PeripheralPwrmgrAon,
    PeripheralRomCtrl,
    PeripheralRstmgrAon,
    PeripheralRvCoreIbex,
    PeripheralRvDm,
    PeripheralRvPlic,
    PeripheralRvTimer,
    PeripheralSensorCtrlAon,
    PeripheralSpiDevice,
    PeripheralSpiHost0,
    PeripheralSpiHost1,
    PeripheralSramCtrlMain,
    PeripheralSramCtrlRetAon,
    PeripheralSysrstCtrlAon,
    PeripheralUart0,
    PeripheralUart1,
    PeripheralUart2,
    PeripheralUart3,
    PeripheralUsbdev,
    PeripheralCount
  } peripheral_e;

  // TODO: Enumeration for PLIC Interrupt source peripheral.

// MACROs for AST analog simulation support
`ifdef ANALOGSIM
  `define INOUT_AI input ast_pkg::awire_t
  `define INOUT_AO output ast_pkg::awire_t
`else
  `define INOUT_AI inout
  `define INOUT_AO inout
`endif

endpackage
