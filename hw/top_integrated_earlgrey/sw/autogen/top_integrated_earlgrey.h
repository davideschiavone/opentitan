// Copyright lowRISC contributors (OpenTitan project).
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// ------------------- W A R N I N G: A U T O - G E N E R A T E D   C O D E !! -------------------//
// PLEASE DO NOT HAND-EDIT THIS FILE. IT HAS BEEN AUTO-GENERATED WITH THE FOLLOWING COMMAND:
// util/topgen.py -t hw/top_integrated_earlgrey/data/top_integrated_earlgrey.hjson
// -o hw/top_integrated_earlgrey

#ifndef OPENTITAN_HW_TOP_INTEGRATED_EARLGREY_SW_AUTOGEN_TOP_INTEGRATED_EARLGREY_H_
#define OPENTITAN_HW_TOP_INTEGRATED_EARLGREY_SW_AUTOGEN_TOP_INTEGRATED_EARLGREY_H_

/**
 * @file
 * @brief Top-specific Definitions
 *
 * This file contains preprocessor and type definitions for use within the
 * device C/C++ codebase.
 *
 * These definitions are for information that depends on the top-specific chip
 * configuration, which includes:
 * - Device Memory Information (for Peripherals and Memory)
 * - PLIC Interrupt ID Names and Source Mappings
 * - Alert ID Names and Source Mappings
 * - Pinmux Pin/Select Names
 * - Power Manager Wakeups
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Peripheral base address for uart0 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_UART0_BASE_ADDR 0x40000000u

/**
 * Peripheral size for uart0 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_UART0_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_UART0_BASE_ADDR + TOP_INTEGRATED_EARLGREY_UART0_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_UART0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart1 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_UART1_BASE_ADDR 0x40010000u

/**
 * Peripheral size for uart1 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_UART1_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_UART1_BASE_ADDR + TOP_INTEGRATED_EARLGREY_UART1_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_UART1_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart2 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_UART2_BASE_ADDR 0x40020000u

/**
 * Peripheral size for uart2 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_UART2_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_UART2_BASE_ADDR + TOP_INTEGRATED_EARLGREY_UART2_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_UART2_SIZE_BYTES 0x40u

/**
 * Peripheral base address for uart3 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_UART3_BASE_ADDR 0x40030000u

/**
 * Peripheral size for uart3 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_UART3_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_UART3_BASE_ADDR + TOP_INTEGRATED_EARLGREY_UART3_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_UART3_SIZE_BYTES 0x40u

/**
 * Peripheral base address for gpio in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_GPIO_BASE_ADDR 0x40040000u

/**
 * Peripheral size for gpio in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_GPIO_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_GPIO_BASE_ADDR + TOP_INTEGRATED_EARLGREY_GPIO_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_GPIO_SIZE_BYTES 0x80u

/**
 * Peripheral base address for spi_device in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SPI_DEVICE_BASE_ADDR 0x40050000u

/**
 * Peripheral size for spi_device in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SPI_DEVICE_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SPI_DEVICE_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SPI_DEVICE_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SPI_DEVICE_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for i2c0 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_I2C0_BASE_ADDR 0x40080000u

/**
 * Peripheral size for i2c0 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_I2C0_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_I2C0_BASE_ADDR + TOP_INTEGRATED_EARLGREY_I2C0_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_I2C0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for i2c1 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_I2C1_BASE_ADDR 0x40090000u

/**
 * Peripheral size for i2c1 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_I2C1_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_I2C1_BASE_ADDR + TOP_INTEGRATED_EARLGREY_I2C1_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_I2C1_SIZE_BYTES 0x80u

/**
 * Peripheral base address for i2c2 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_I2C2_BASE_ADDR 0x400A0000u

/**
 * Peripheral size for i2c2 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_I2C2_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_I2C2_BASE_ADDR + TOP_INTEGRATED_EARLGREY_I2C2_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_I2C2_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pattgen in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_PATTGEN_BASE_ADDR 0x400E0000u

/**
 * Peripheral size for pattgen in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_PATTGEN_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_PATTGEN_BASE_ADDR + TOP_INTEGRATED_EARLGREY_PATTGEN_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_PATTGEN_SIZE_BYTES 0x40u

/**
 * Peripheral base address for rv_timer in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_TIMER_BASE_ADDR 0x40100000u

/**
 * Peripheral size for rv_timer in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_TIMER_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_TIMER_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_TIMER_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_TIMER_SIZE_BYTES 0x200u

/**
 * Peripheral base address for core device on otp_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_BASE_ADDR 0x40130000u

/**
 * Peripheral size for core device on otp_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_BASE_ADDR + TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_OTP_CTRL_CORE_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for prim device on otp_macro in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_BASE_ADDR 0x40138000u

/**
 * Peripheral size for prim device on otp_macro in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_OTP_MACRO_PRIM_SIZE_BYTES 0x20u

/**
 * Peripheral base address for regs device on lc_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_BASE_ADDR 0x40140000u

/**
 * Peripheral size for regs device on lc_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_BASE_ADDR + TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_LC_CTRL_REGS_SIZE_BYTES 0x100u

/**
 * Peripheral base address for dmi device on lc_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_BASE_ADDR 0x0u

/**
 * Peripheral size for dmi device on lc_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_BASE_ADDR + TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_LC_CTRL_DMI_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for alert_handler in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_BASE_ADDR 0x40150000u

/**
 * Peripheral size for alert_handler in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_BASE_ADDR + TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_ALERT_HANDLER_SIZE_BYTES 0x800u

/**
 * Peripheral base address for spi_host0 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SPI_HOST0_BASE_ADDR 0x40300000u

/**
 * Peripheral size for spi_host0 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SPI_HOST0_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SPI_HOST0_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SPI_HOST0_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SPI_HOST0_SIZE_BYTES 0x40u

/**
 * Peripheral base address for spi_host1 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SPI_HOST1_BASE_ADDR 0x40310000u

/**
 * Peripheral size for spi_host1 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SPI_HOST1_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SPI_HOST1_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SPI_HOST1_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SPI_HOST1_SIZE_BYTES 0x40u

/**
 * Peripheral base address for usbdev in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_USBDEV_BASE_ADDR 0x40320000u

/**
 * Peripheral size for usbdev in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_USBDEV_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_USBDEV_BASE_ADDR + TOP_INTEGRATED_EARLGREY_USBDEV_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_USBDEV_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for pwrmgr_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_PWRMGR_AON_BASE_ADDR 0x40400000u

/**
 * Peripheral size for pwrmgr_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_PWRMGR_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_PWRMGR_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_PWRMGR_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_PWRMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rstmgr_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RSTMGR_AON_BASE_ADDR 0x40410000u

/**
 * Peripheral size for rstmgr_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RSTMGR_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RSTMGR_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RSTMGR_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RSTMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for clkmgr_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_CLKMGR_AON_BASE_ADDR 0x40420000u

/**
 * Peripheral size for clkmgr_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_CLKMGR_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_CLKMGR_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_CLKMGR_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_CLKMGR_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for sysrst_ctrl_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR 0x40430000u

/**
 * Peripheral size for sysrst_ctrl_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SYSRST_CTRL_AON_SIZE_BYTES 0x100u

/**
 * Peripheral base address for adc_ctrl_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_BASE_ADDR 0x40440000u

/**
 * Peripheral size for adc_ctrl_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_ADC_CTRL_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pwm_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_PWM_AON_BASE_ADDR 0x40450000u

/**
 * Peripheral size for pwm_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_PWM_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_PWM_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_PWM_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_PWM_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for pinmux_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_PINMUX_AON_BASE_ADDR 0x40460000u

/**
 * Peripheral size for pinmux_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_PINMUX_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_PINMUX_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_PINMUX_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_PINMUX_AON_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for aon_timer_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_BASE_ADDR 0x40470000u

/**
 * Peripheral size for aon_timer_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_AON_TIMER_AON_SIZE_BYTES 0x40u

/**
 * Peripheral base address for mailbox in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_MAILBOX_BASE_ADDR 0x40480400u

/**
 * Peripheral size for mailbox in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_MAILBOX_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_MAILBOX_BASE_ADDR + TOP_INTEGRATED_EARLGREY_MAILBOX_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_MAILBOX_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ast in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_AST_BASE_ADDR 0x40480000u

/**
 * Peripheral size for ast in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_AST_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_AST_BASE_ADDR + TOP_INTEGRATED_EARLGREY_AST_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_AST_SIZE_BYTES 0x400u

/**
 * Peripheral base address for sensor_ctrl_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_BASE_ADDR 0x40490000u

/**
 * Peripheral size for sensor_ctrl_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SENSOR_CTRL_AON_SIZE_BYTES 0x80u

/**
 * Peripheral base address for regs device on sram_ctrl_ret_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR 0x40500000u

/**
 * Peripheral size for regs device on sram_ctrl_ret_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_REGS_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ram device on sram_ctrl_ret_aon in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR 0x40600000u

/**
 * Peripheral size for ram device on sram_ctrl_ret_aon in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_RET_AON_RAM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for core device on flash_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_BASE_ADDR 0x41000000u

/**
 * Peripheral size for core device on flash_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_BASE_ADDR + TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_CORE_SIZE_BYTES 0x200u

/**
 * Peripheral base address for prim device on flash_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_BASE_ADDR 0x41008000u

/**
 * Peripheral size for prim device on flash_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_PRIM_SIZE_BYTES 0x80u

/**
 * Peripheral base address for mem device on flash_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_BASE_ADDR 0x20000000u

/**
 * Peripheral size for mem device on flash_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_FLASH_CTRL_MEM_SIZE_BYTES 0x100000u

/**
 * Peripheral base address for regs device on rv_dm in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_REGS_BASE_ADDR 0x41200000u

/**
 * Peripheral size for regs device on rv_dm in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_DM_REGS_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_DM_REGS_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_DM_REGS_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_REGS_SIZE_BYTES 0x10u

/**
 * Peripheral base address for mem device on rv_dm in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_MEM_BASE_ADDR 0x10000u

/**
 * Peripheral size for mem device on rv_dm in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_DM_MEM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_DM_MEM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_DM_MEM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_MEM_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for dbg device on rv_dm in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_DBG_BASE_ADDR 0x1000u

/**
 * Peripheral size for dbg device on rv_dm in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_DM_DBG_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_DM_DBG_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_DM_DBG_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_DM_DBG_SIZE_BYTES 0x200u

/**
 * Peripheral base address for rv_plic in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_PLIC_BASE_ADDR 0x48000000u

/**
 * Peripheral size for rv_plic in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_PLIC_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_PLIC_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_PLIC_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_PLIC_SIZE_BYTES 0x8000000u

/**
 * Peripheral base address for aes in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_AES_BASE_ADDR 0x41100000u

/**
 * Peripheral size for aes in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_AES_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_AES_BASE_ADDR + TOP_INTEGRATED_EARLGREY_AES_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_AES_SIZE_BYTES 0x100u

/**
 * Peripheral base address for hmac in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_HMAC_BASE_ADDR 0x41110000u

/**
 * Peripheral size for hmac in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_HMAC_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_HMAC_BASE_ADDR + TOP_INTEGRATED_EARLGREY_HMAC_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_HMAC_SIZE_BYTES 0x2000u

/**
 * Peripheral base address for kmac in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_KMAC_BASE_ADDR 0x41120000u

/**
 * Peripheral size for kmac in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_KMAC_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_KMAC_BASE_ADDR + TOP_INTEGRATED_EARLGREY_KMAC_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_KMAC_SIZE_BYTES 0x1000u

/**
 * Peripheral base address for otbn in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_OTBN_BASE_ADDR 0x41130000u

/**
 * Peripheral size for otbn in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_OTBN_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_OTBN_BASE_ADDR + TOP_INTEGRATED_EARLGREY_OTBN_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_OTBN_SIZE_BYTES 0x10000u

/**
 * Peripheral base address for keymgr in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_KEYMGR_BASE_ADDR 0x41140000u

/**
 * Peripheral size for keymgr in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_KEYMGR_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_KEYMGR_BASE_ADDR + TOP_INTEGRATED_EARLGREY_KEYMGR_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_KEYMGR_SIZE_BYTES 0x100u

/**
 * Peripheral base address for csrng in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_CSRNG_BASE_ADDR 0x41150000u

/**
 * Peripheral size for csrng in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_CSRNG_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_CSRNG_BASE_ADDR + TOP_INTEGRATED_EARLGREY_CSRNG_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_CSRNG_SIZE_BYTES 0x80u

/**
 * Peripheral base address for entropy_src in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_BASE_ADDR 0x41160000u

/**
 * Peripheral size for entropy_src in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_BASE_ADDR + TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_ENTROPY_SRC_SIZE_BYTES 0x100u

/**
 * Peripheral base address for edn0 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_EDN0_BASE_ADDR 0x41170000u

/**
 * Peripheral size for edn0 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_EDN0_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_EDN0_BASE_ADDR + TOP_INTEGRATED_EARLGREY_EDN0_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_EDN0_SIZE_BYTES 0x80u

/**
 * Peripheral base address for edn1 in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_EDN1_BASE_ADDR 0x41180000u

/**
 * Peripheral size for edn1 in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_EDN1_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_EDN1_BASE_ADDR + TOP_INTEGRATED_EARLGREY_EDN1_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_EDN1_SIZE_BYTES 0x80u

/**
 * Peripheral base address for regs device on sram_ctrl_main in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR 0x411C0000u

/**
 * Peripheral size for regs device on sram_ctrl_main in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_REGS_SIZE_BYTES 0x40u

/**
 * Peripheral base address for ram device on sram_ctrl_main in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR 0x10000000u

/**
 * Peripheral size for ram device on sram_ctrl_main in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_SRAM_CTRL_MAIN_RAM_SIZE_BYTES 0x20000u

/**
 * Peripheral base address for regs device on rom_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_BASE_ADDR 0x411E0000u

/**
 * Peripheral size for regs device on rom_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_BASE_ADDR + TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_ROM_CTRL_REGS_SIZE_BYTES 0x80u

/**
 * Peripheral base address for rom device on rom_ctrl in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_BASE_ADDR 0x8000u

/**
 * Peripheral size for rom device on rom_ctrl in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_BASE_ADDR + TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_ROM_CTRL_ROM_SIZE_BYTES 0x8000u

/**
 * Peripheral base address for cfg device on rv_core_ibex in top integrated_earlgrey.
 *
 * This should be used with #mmio_region_from_addr to access the memory-mapped
 * registers associated with the peripheral (usually via a DIF).
 */
#define TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR 0x411F0000u

/**
 * Peripheral size for cfg device on rv_core_ibex in top integrated_earlgrey.
 *
 * This is the size (in bytes) of the peripheral's reserved memory area. All
 * memory-mapped registers associated with this peripheral should have an
 * address between #TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR and
 * `TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_BASE_ADDR + TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES`.
 */
#define TOP_INTEGRATED_EARLGREY_RV_CORE_IBEX_CFG_SIZE_BYTES 0x100u


/**
 * Memory base address for ram_ret_aon in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_RAM_RET_AON_BASE_ADDR 0x40600000u

/**
 * Memory size for ram_ret_aon in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_RAM_RET_AON_SIZE_BYTES 0x1000u

/**
 * Memory base address for eflash in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_EFLASH_BASE_ADDR 0x20000000u

/**
 * Memory size for eflash in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_EFLASH_SIZE_BYTES 0x100000u

/**
 * Memory base address for ram_main in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_RAM_MAIN_BASE_ADDR 0x10000000u

/**
 * Memory size for ram_main in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_RAM_MAIN_SIZE_BYTES 0x20000u

/**
 * Memory base address for rom in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_ROM_BASE_ADDR 0x8000u

/**
 * Memory size for rom in top integrated_earlgrey.
 */
#define TOP_INTEGRATED_EARLGREY_ROM_SIZE_BYTES 0x8000u


/**
 * PLIC Interrupt Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * interrupt.
 */
typedef enum top_integrated_earlgrey_plic_peripheral {
  kTopIntegratedEarlgreyPlicPeripheralUnknown = 0, /**< Unknown Peripheral */
  kTopIntegratedEarlgreyPlicPeripheralUart0 = 1, /**< uart0 */
  kTopIntegratedEarlgreyPlicPeripheralUart1 = 2, /**< uart1 */
  kTopIntegratedEarlgreyPlicPeripheralUart2 = 3, /**< uart2 */
  kTopIntegratedEarlgreyPlicPeripheralUart3 = 4, /**< uart3 */
  kTopIntegratedEarlgreyPlicPeripheralGpio = 5, /**< gpio */
  kTopIntegratedEarlgreyPlicPeripheralSpiDevice = 6, /**< spi_device */
  kTopIntegratedEarlgreyPlicPeripheralI2c0 = 7, /**< i2c0 */
  kTopIntegratedEarlgreyPlicPeripheralI2c1 = 8, /**< i2c1 */
  kTopIntegratedEarlgreyPlicPeripheralI2c2 = 9, /**< i2c2 */
  kTopIntegratedEarlgreyPlicPeripheralPattgen = 10, /**< pattgen */
  kTopIntegratedEarlgreyPlicPeripheralRvTimer = 11, /**< rv_timer */
  kTopIntegratedEarlgreyPlicPeripheralOtpCtrl = 12, /**< otp_ctrl */
  kTopIntegratedEarlgreyPlicPeripheralAlertHandler = 13, /**< alert_handler */
  kTopIntegratedEarlgreyPlicPeripheralSpiHost0 = 14, /**< spi_host0 */
  kTopIntegratedEarlgreyPlicPeripheralSpiHost1 = 15, /**< spi_host1 */
  kTopIntegratedEarlgreyPlicPeripheralUsbdev = 16, /**< usbdev */
  kTopIntegratedEarlgreyPlicPeripheralPwrmgrAon = 17, /**< pwrmgr_aon */
  kTopIntegratedEarlgreyPlicPeripheralSysrstCtrlAon = 18, /**< sysrst_ctrl_aon */
  kTopIntegratedEarlgreyPlicPeripheralAdcCtrlAon = 19, /**< adc_ctrl_aon */
  kTopIntegratedEarlgreyPlicPeripheralAonTimerAon = 20, /**< aon_timer_aon */
  kTopIntegratedEarlgreyPlicPeripheralMailbox = 21, /**< mailbox */
  kTopIntegratedEarlgreyPlicPeripheralSensorCtrlAon = 22, /**< sensor_ctrl_aon */
  kTopIntegratedEarlgreyPlicPeripheralFlashCtrl = 23, /**< flash_ctrl */
  kTopIntegratedEarlgreyPlicPeripheralHmac = 24, /**< hmac */
  kTopIntegratedEarlgreyPlicPeripheralKmac = 25, /**< kmac */
  kTopIntegratedEarlgreyPlicPeripheralOtbn = 26, /**< otbn */
  kTopIntegratedEarlgreyPlicPeripheralKeymgr = 27, /**< keymgr */
  kTopIntegratedEarlgreyPlicPeripheralCsrng = 28, /**< csrng */
  kTopIntegratedEarlgreyPlicPeripheralEntropySrc = 29, /**< entropy_src */
  kTopIntegratedEarlgreyPlicPeripheralEdn0 = 30, /**< edn0 */
  kTopIntegratedEarlgreyPlicPeripheralEdn1 = 31, /**< edn1 */
  kTopIntegratedEarlgreyPlicPeripheralLast = 31, /**< \internal Final PLIC peripheral */
} top_integrated_earlgrey_plic_peripheral_t;

/**
 * PLIC Interrupt Source.
 *
 * Enumeration of all PLIC interrupt sources. The interrupt sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_integrated_earlgrey_plic_irq_id {
  kTopIntegratedEarlgreyPlicIrqIdNone = 0, /**< No Interrupt */
  kTopIntegratedEarlgreyPlicIrqIdUart0TxWatermark = 1, /**< uart0_tx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxWatermark = 2, /**< uart0_rx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart0TxDone = 3, /**< uart0_tx_done */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxOverflow = 4, /**< uart0_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxFrameErr = 5, /**< uart0_rx_frame_err */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxBreakErr = 6, /**< uart0_rx_break_err */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxTimeout = 7, /**< uart0_rx_timeout */
  kTopIntegratedEarlgreyPlicIrqIdUart0RxParityErr = 8, /**< uart0_rx_parity_err */
  kTopIntegratedEarlgreyPlicIrqIdUart0TxEmpty = 9, /**< uart0_tx_empty */
  kTopIntegratedEarlgreyPlicIrqIdUart1TxWatermark = 10, /**< uart1_tx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxWatermark = 11, /**< uart1_rx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart1TxDone = 12, /**< uart1_tx_done */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxOverflow = 13, /**< uart1_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxFrameErr = 14, /**< uart1_rx_frame_err */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxBreakErr = 15, /**< uart1_rx_break_err */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxTimeout = 16, /**< uart1_rx_timeout */
  kTopIntegratedEarlgreyPlicIrqIdUart1RxParityErr = 17, /**< uart1_rx_parity_err */
  kTopIntegratedEarlgreyPlicIrqIdUart1TxEmpty = 18, /**< uart1_tx_empty */
  kTopIntegratedEarlgreyPlicIrqIdUart2TxWatermark = 19, /**< uart2_tx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxWatermark = 20, /**< uart2_rx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart2TxDone = 21, /**< uart2_tx_done */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxOverflow = 22, /**< uart2_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxFrameErr = 23, /**< uart2_rx_frame_err */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxBreakErr = 24, /**< uart2_rx_break_err */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxTimeout = 25, /**< uart2_rx_timeout */
  kTopIntegratedEarlgreyPlicIrqIdUart2RxParityErr = 26, /**< uart2_rx_parity_err */
  kTopIntegratedEarlgreyPlicIrqIdUart2TxEmpty = 27, /**< uart2_tx_empty */
  kTopIntegratedEarlgreyPlicIrqIdUart3TxWatermark = 28, /**< uart3_tx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxWatermark = 29, /**< uart3_rx_watermark */
  kTopIntegratedEarlgreyPlicIrqIdUart3TxDone = 30, /**< uart3_tx_done */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxOverflow = 31, /**< uart3_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxFrameErr = 32, /**< uart3_rx_frame_err */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxBreakErr = 33, /**< uart3_rx_break_err */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxTimeout = 34, /**< uart3_rx_timeout */
  kTopIntegratedEarlgreyPlicIrqIdUart3RxParityErr = 35, /**< uart3_rx_parity_err */
  kTopIntegratedEarlgreyPlicIrqIdUart3TxEmpty = 36, /**< uart3_tx_empty */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio0 = 37, /**< gpio_gpio 0 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio1 = 38, /**< gpio_gpio 1 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio2 = 39, /**< gpio_gpio 2 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio3 = 40, /**< gpio_gpio 3 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio4 = 41, /**< gpio_gpio 4 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio5 = 42, /**< gpio_gpio 5 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio6 = 43, /**< gpio_gpio 6 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio7 = 44, /**< gpio_gpio 7 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio8 = 45, /**< gpio_gpio 8 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio9 = 46, /**< gpio_gpio 9 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio10 = 47, /**< gpio_gpio 10 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio11 = 48, /**< gpio_gpio 11 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio12 = 49, /**< gpio_gpio 12 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio13 = 50, /**< gpio_gpio 13 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio14 = 51, /**< gpio_gpio 14 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio15 = 52, /**< gpio_gpio 15 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio16 = 53, /**< gpio_gpio 16 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio17 = 54, /**< gpio_gpio 17 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio18 = 55, /**< gpio_gpio 18 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio19 = 56, /**< gpio_gpio 19 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio20 = 57, /**< gpio_gpio 20 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio21 = 58, /**< gpio_gpio 21 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio22 = 59, /**< gpio_gpio 22 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio23 = 60, /**< gpio_gpio 23 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio24 = 61, /**< gpio_gpio 24 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio25 = 62, /**< gpio_gpio 25 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio26 = 63, /**< gpio_gpio 26 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio27 = 64, /**< gpio_gpio 27 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio28 = 65, /**< gpio_gpio 28 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio29 = 66, /**< gpio_gpio 29 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio30 = 67, /**< gpio_gpio 30 */
  kTopIntegratedEarlgreyPlicIrqIdGpioGpio31 = 68, /**< gpio_gpio 31 */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceUploadCmdfifoNotEmpty = 69, /**< spi_device_upload_cmdfifo_not_empty */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceUploadPayloadNotEmpty = 70, /**< spi_device_upload_payload_not_empty */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceUploadPayloadOverflow = 71, /**< spi_device_upload_payload_overflow */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceReadbufWatermark = 72, /**< spi_device_readbuf_watermark */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceReadbufFlip = 73, /**< spi_device_readbuf_flip */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceTpmHeaderNotEmpty = 74, /**< spi_device_tpm_header_not_empty */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceTpmRdfifoCmdEnd = 75, /**< spi_device_tpm_rdfifo_cmd_end */
  kTopIntegratedEarlgreyPlicIrqIdSpiDeviceTpmRdfifoDrop = 76, /**< spi_device_tpm_rdfifo_drop */
  kTopIntegratedEarlgreyPlicIrqIdI2c0FmtThreshold = 77, /**< i2c0_fmt_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c0RxThreshold = 78, /**< i2c0_rx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c0AcqThreshold = 79, /**< i2c0_acq_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c0RxOverflow = 80, /**< i2c0_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdI2c0ControllerHalt = 81, /**< i2c0_controller_halt */
  kTopIntegratedEarlgreyPlicIrqIdI2c0SclInterference = 82, /**< i2c0_scl_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c0SdaInterference = 83, /**< i2c0_sda_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c0StretchTimeout = 84, /**< i2c0_stretch_timeout */
  kTopIntegratedEarlgreyPlicIrqIdI2c0SdaUnstable = 85, /**< i2c0_sda_unstable */
  kTopIntegratedEarlgreyPlicIrqIdI2c0CmdComplete = 86, /**< i2c0_cmd_complete */
  kTopIntegratedEarlgreyPlicIrqIdI2c0TxStretch = 87, /**< i2c0_tx_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c0TxThreshold = 88, /**< i2c0_tx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c0AcqStretch = 89, /**< i2c0_acq_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c0UnexpStop = 90, /**< i2c0_unexp_stop */
  kTopIntegratedEarlgreyPlicIrqIdI2c0HostTimeout = 91, /**< i2c0_host_timeout */
  kTopIntegratedEarlgreyPlicIrqIdI2c1FmtThreshold = 92, /**< i2c1_fmt_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c1RxThreshold = 93, /**< i2c1_rx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c1AcqThreshold = 94, /**< i2c1_acq_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c1RxOverflow = 95, /**< i2c1_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdI2c1ControllerHalt = 96, /**< i2c1_controller_halt */
  kTopIntegratedEarlgreyPlicIrqIdI2c1SclInterference = 97, /**< i2c1_scl_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c1SdaInterference = 98, /**< i2c1_sda_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c1StretchTimeout = 99, /**< i2c1_stretch_timeout */
  kTopIntegratedEarlgreyPlicIrqIdI2c1SdaUnstable = 100, /**< i2c1_sda_unstable */
  kTopIntegratedEarlgreyPlicIrqIdI2c1CmdComplete = 101, /**< i2c1_cmd_complete */
  kTopIntegratedEarlgreyPlicIrqIdI2c1TxStretch = 102, /**< i2c1_tx_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c1TxThreshold = 103, /**< i2c1_tx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c1AcqStretch = 104, /**< i2c1_acq_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c1UnexpStop = 105, /**< i2c1_unexp_stop */
  kTopIntegratedEarlgreyPlicIrqIdI2c1HostTimeout = 106, /**< i2c1_host_timeout */
  kTopIntegratedEarlgreyPlicIrqIdI2c2FmtThreshold = 107, /**< i2c2_fmt_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c2RxThreshold = 108, /**< i2c2_rx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c2AcqThreshold = 109, /**< i2c2_acq_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c2RxOverflow = 110, /**< i2c2_rx_overflow */
  kTopIntegratedEarlgreyPlicIrqIdI2c2ControllerHalt = 111, /**< i2c2_controller_halt */
  kTopIntegratedEarlgreyPlicIrqIdI2c2SclInterference = 112, /**< i2c2_scl_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c2SdaInterference = 113, /**< i2c2_sda_interference */
  kTopIntegratedEarlgreyPlicIrqIdI2c2StretchTimeout = 114, /**< i2c2_stretch_timeout */
  kTopIntegratedEarlgreyPlicIrqIdI2c2SdaUnstable = 115, /**< i2c2_sda_unstable */
  kTopIntegratedEarlgreyPlicIrqIdI2c2CmdComplete = 116, /**< i2c2_cmd_complete */
  kTopIntegratedEarlgreyPlicIrqIdI2c2TxStretch = 117, /**< i2c2_tx_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c2TxThreshold = 118, /**< i2c2_tx_threshold */
  kTopIntegratedEarlgreyPlicIrqIdI2c2AcqStretch = 119, /**< i2c2_acq_stretch */
  kTopIntegratedEarlgreyPlicIrqIdI2c2UnexpStop = 120, /**< i2c2_unexp_stop */
  kTopIntegratedEarlgreyPlicIrqIdI2c2HostTimeout = 121, /**< i2c2_host_timeout */
  kTopIntegratedEarlgreyPlicIrqIdPattgenDoneCh0 = 122, /**< pattgen_done_ch0 */
  kTopIntegratedEarlgreyPlicIrqIdPattgenDoneCh1 = 123, /**< pattgen_done_ch1 */
  kTopIntegratedEarlgreyPlicIrqIdRvTimerTimerExpiredHart0Timer0 = 124, /**< rv_timer_timer_expired_hart0_timer0 */
  kTopIntegratedEarlgreyPlicIrqIdOtpCtrlOtpOperationDone = 125, /**< otp_ctrl_otp_operation_done */
  kTopIntegratedEarlgreyPlicIrqIdOtpCtrlOtpError = 126, /**< otp_ctrl_otp_error */
  kTopIntegratedEarlgreyPlicIrqIdAlertHandlerClassa = 127, /**< alert_handler_classa */
  kTopIntegratedEarlgreyPlicIrqIdAlertHandlerClassb = 128, /**< alert_handler_classb */
  kTopIntegratedEarlgreyPlicIrqIdAlertHandlerClassc = 129, /**< alert_handler_classc */
  kTopIntegratedEarlgreyPlicIrqIdAlertHandlerClassd = 130, /**< alert_handler_classd */
  kTopIntegratedEarlgreyPlicIrqIdSpiHost0Error = 131, /**< spi_host0_error */
  kTopIntegratedEarlgreyPlicIrqIdSpiHost0SpiEvent = 132, /**< spi_host0_spi_event */
  kTopIntegratedEarlgreyPlicIrqIdSpiHost1Error = 133, /**< spi_host1_error */
  kTopIntegratedEarlgreyPlicIrqIdSpiHost1SpiEvent = 134, /**< spi_host1_spi_event */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevPktReceived = 135, /**< usbdev_pkt_received */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevPktSent = 136, /**< usbdev_pkt_sent */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevDisconnected = 137, /**< usbdev_disconnected */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevHostLost = 138, /**< usbdev_host_lost */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevLinkReset = 139, /**< usbdev_link_reset */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevLinkSuspend = 140, /**< usbdev_link_suspend */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevLinkResume = 141, /**< usbdev_link_resume */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevAvOutEmpty = 142, /**< usbdev_av_out_empty */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevRxFull = 143, /**< usbdev_rx_full */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevAvOverflow = 144, /**< usbdev_av_overflow */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevLinkInErr = 145, /**< usbdev_link_in_err */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevRxCrcErr = 146, /**< usbdev_rx_crc_err */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevRxPidErr = 147, /**< usbdev_rx_pid_err */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevRxBitstuffErr = 148, /**< usbdev_rx_bitstuff_err */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevFrame = 149, /**< usbdev_frame */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevPowered = 150, /**< usbdev_powered */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevLinkOutErr = 151, /**< usbdev_link_out_err */
  kTopIntegratedEarlgreyPlicIrqIdUsbdevAvSetupEmpty = 152, /**< usbdev_av_setup_empty */
  kTopIntegratedEarlgreyPlicIrqIdPwrmgrAonWakeup = 153, /**< pwrmgr_aon_wakeup */
  kTopIntegratedEarlgreyPlicIrqIdSysrstCtrlAonEventDetected = 154, /**< sysrst_ctrl_aon_event_detected */
  kTopIntegratedEarlgreyPlicIrqIdAdcCtrlAonMatchPending = 155, /**< adc_ctrl_aon_match_pending */
  kTopIntegratedEarlgreyPlicIrqIdAonTimerAonWkupTimerExpired = 156, /**< aon_timer_aon_wkup_timer_expired */
  kTopIntegratedEarlgreyPlicIrqIdAonTimerAonWdogTimerBark = 157, /**< aon_timer_aon_wdog_timer_bark */
  kTopIntegratedEarlgreyPlicIrqIdMailboxDoorbell = 158, /**< mailbox_doorbell */
  kTopIntegratedEarlgreyPlicIrqIdMailboxCompletion = 159, /**< mailbox_completion */
  kTopIntegratedEarlgreyPlicIrqIdSensorCtrlAonIoStatusChange = 160, /**< sensor_ctrl_aon_io_status_change */
  kTopIntegratedEarlgreyPlicIrqIdSensorCtrlAonInitStatusChange = 161, /**< sensor_ctrl_aon_init_status_change */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlProgEmpty = 162, /**< flash_ctrl_prog_empty */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlProgLvl = 163, /**< flash_ctrl_prog_lvl */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlRdFull = 164, /**< flash_ctrl_rd_full */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlRdLvl = 165, /**< flash_ctrl_rd_lvl */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlOpDone = 166, /**< flash_ctrl_op_done */
  kTopIntegratedEarlgreyPlicIrqIdFlashCtrlCorrErr = 167, /**< flash_ctrl_corr_err */
  kTopIntegratedEarlgreyPlicIrqIdHmacHmacDone = 168, /**< hmac_hmac_done */
  kTopIntegratedEarlgreyPlicIrqIdHmacFifoEmpty = 169, /**< hmac_fifo_empty */
  kTopIntegratedEarlgreyPlicIrqIdHmacHmacErr = 170, /**< hmac_hmac_err */
  kTopIntegratedEarlgreyPlicIrqIdKmacKmacDone = 171, /**< kmac_kmac_done */
  kTopIntegratedEarlgreyPlicIrqIdKmacFifoEmpty = 172, /**< kmac_fifo_empty */
  kTopIntegratedEarlgreyPlicIrqIdKmacKmacErr = 173, /**< kmac_kmac_err */
  kTopIntegratedEarlgreyPlicIrqIdOtbnDone = 174, /**< otbn_done */
  kTopIntegratedEarlgreyPlicIrqIdKeymgrOpDone = 175, /**< keymgr_op_done */
  kTopIntegratedEarlgreyPlicIrqIdCsrngCsCmdReqDone = 176, /**< csrng_cs_cmd_req_done */
  kTopIntegratedEarlgreyPlicIrqIdCsrngCsEntropyReq = 177, /**< csrng_cs_entropy_req */
  kTopIntegratedEarlgreyPlicIrqIdCsrngCsHwInstExc = 178, /**< csrng_cs_hw_inst_exc */
  kTopIntegratedEarlgreyPlicIrqIdCsrngCsFatalErr = 179, /**< csrng_cs_fatal_err */
  kTopIntegratedEarlgreyPlicIrqIdEntropySrcEsEntropyValid = 180, /**< entropy_src_es_entropy_valid */
  kTopIntegratedEarlgreyPlicIrqIdEntropySrcEsHealthTestFailed = 181, /**< entropy_src_es_health_test_failed */
  kTopIntegratedEarlgreyPlicIrqIdEntropySrcEsObserveFifoReady = 182, /**< entropy_src_es_observe_fifo_ready */
  kTopIntegratedEarlgreyPlicIrqIdEntropySrcEsFatalErr = 183, /**< entropy_src_es_fatal_err */
  kTopIntegratedEarlgreyPlicIrqIdEdn0EdnCmdReqDone = 184, /**< edn0_edn_cmd_req_done */
  kTopIntegratedEarlgreyPlicIrqIdEdn0EdnFatalErr = 185, /**< edn0_edn_fatal_err */
  kTopIntegratedEarlgreyPlicIrqIdEdn1EdnCmdReqDone = 186, /**< edn1_edn_cmd_req_done */
  kTopIntegratedEarlgreyPlicIrqIdEdn1EdnFatalErr = 187, /**< edn1_edn_fatal_err */
  kTopIntegratedEarlgreyPlicIrqIdLast = 187, /**< \internal The Last Valid Interrupt ID. */
} top_integrated_earlgrey_plic_irq_id_t;

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_integrated_earlgrey_plic_irq_id_t` to
 * `top_integrated_earlgrey_plic_peripheral_t`.
 */
extern const top_integrated_earlgrey_plic_peripheral_t
    top_integrated_earlgrey_plic_interrupt_for_peripheral[188];

/**
 * PLIC Interrupt Target.
 *
 * Enumeration used to determine which set of IE, CC, threshold registers to
 * access for a given interrupt target.
 */
typedef enum top_integrated_earlgrey_plic_target {
  kTopIntegratedEarlgreyPlicTargetIbex0 = 0, /**< Ibex Core 0 */
  kTopIntegratedEarlgreyPlicTargetLast = 0, /**< \internal Final PLIC target */
} top_integrated_earlgrey_plic_target_t;


/**
 * Alert Handler Source Peripheral.
 *
 * Enumeration used to determine which peripheral asserted the corresponding
 * alert.
 */
typedef enum top_integrated_earlgrey_alert_peripheral {
  kTopIntegratedEarlgreyAlertPeripheralExternal = 0, /**< External Peripheral */
  kTopIntegratedEarlgreyAlertPeripheralUart0 = 1, /**< uart0 */
  kTopIntegratedEarlgreyAlertPeripheralUart1 = 2, /**< uart1 */
  kTopIntegratedEarlgreyAlertPeripheralUart2 = 3, /**< uart2 */
  kTopIntegratedEarlgreyAlertPeripheralUart3 = 4, /**< uart3 */
  kTopIntegratedEarlgreyAlertPeripheralGpio = 5, /**< gpio */
  kTopIntegratedEarlgreyAlertPeripheralSpiDevice = 6, /**< spi_device */
  kTopIntegratedEarlgreyAlertPeripheralI2c0 = 7, /**< i2c0 */
  kTopIntegratedEarlgreyAlertPeripheralI2c1 = 8, /**< i2c1 */
  kTopIntegratedEarlgreyAlertPeripheralI2c2 = 9, /**< i2c2 */
  kTopIntegratedEarlgreyAlertPeripheralPattgen = 10, /**< pattgen */
  kTopIntegratedEarlgreyAlertPeripheralRvTimer = 11, /**< rv_timer */
  kTopIntegratedEarlgreyAlertPeripheralOtpCtrl = 12, /**< otp_ctrl */
  kTopIntegratedEarlgreyAlertPeripheralLcCtrl = 13, /**< lc_ctrl */
  kTopIntegratedEarlgreyAlertPeripheralSpiHost0 = 14, /**< spi_host0 */
  kTopIntegratedEarlgreyAlertPeripheralSpiHost1 = 15, /**< spi_host1 */
  kTopIntegratedEarlgreyAlertPeripheralUsbdev = 16, /**< usbdev */
  kTopIntegratedEarlgreyAlertPeripheralPwrmgrAon = 17, /**< pwrmgr_aon */
  kTopIntegratedEarlgreyAlertPeripheralRstmgrAon = 18, /**< rstmgr_aon */
  kTopIntegratedEarlgreyAlertPeripheralClkmgrAon = 19, /**< clkmgr_aon */
  kTopIntegratedEarlgreyAlertPeripheralSysrstCtrlAon = 20, /**< sysrst_ctrl_aon */
  kTopIntegratedEarlgreyAlertPeripheralAdcCtrlAon = 21, /**< adc_ctrl_aon */
  kTopIntegratedEarlgreyAlertPeripheralPwmAon = 22, /**< pwm_aon */
  kTopIntegratedEarlgreyAlertPeripheralPinmuxAon = 23, /**< pinmux_aon */
  kTopIntegratedEarlgreyAlertPeripheralAonTimerAon = 24, /**< aon_timer_aon */
  kTopIntegratedEarlgreyAlertPeripheralMailbox = 25, /**< mailbox */
  kTopIntegratedEarlgreyAlertPeripheralSensorCtrlAon = 26, /**< sensor_ctrl_aon */
  kTopIntegratedEarlgreyAlertPeripheralSramCtrlRetAon = 27, /**< sram_ctrl_ret_aon */
  kTopIntegratedEarlgreyAlertPeripheralFlashCtrl = 28, /**< flash_ctrl */
  kTopIntegratedEarlgreyAlertPeripheralRvDm = 29, /**< rv_dm */
  kTopIntegratedEarlgreyAlertPeripheralRvPlic = 30, /**< rv_plic */
  kTopIntegratedEarlgreyAlertPeripheralAes = 31, /**< aes */
  kTopIntegratedEarlgreyAlertPeripheralHmac = 32, /**< hmac */
  kTopIntegratedEarlgreyAlertPeripheralKmac = 33, /**< kmac */
  kTopIntegratedEarlgreyAlertPeripheralOtbn = 34, /**< otbn */
  kTopIntegratedEarlgreyAlertPeripheralKeymgr = 35, /**< keymgr */
  kTopIntegratedEarlgreyAlertPeripheralCsrng = 36, /**< csrng */
  kTopIntegratedEarlgreyAlertPeripheralEntropySrc = 37, /**< entropy_src */
  kTopIntegratedEarlgreyAlertPeripheralEdn0 = 38, /**< edn0 */
  kTopIntegratedEarlgreyAlertPeripheralEdn1 = 39, /**< edn1 */
  kTopIntegratedEarlgreyAlertPeripheralSramCtrlMain = 40, /**< sram_ctrl_main */
  kTopIntegratedEarlgreyAlertPeripheralRomCtrl = 41, /**< rom_ctrl */
  kTopIntegratedEarlgreyAlertPeripheralRvCoreIbex = 42, /**< rv_core_ibex */
  kTopIntegratedEarlgreyAlertPeripheralLast = 42, /**< \internal Final Alert peripheral */
} top_integrated_earlgrey_alert_peripheral_t;

/**
 * Alert Handler Alert Source.
 *
 * Enumeration of all Alert Handler Alert Sources. The alert sources belonging to
 * the same peripheral are guaranteed to be consecutive.
 */
typedef enum top_integrated_earlgrey_alert_id {
  kTopIntegratedEarlgreyAlertIdUart0FatalFault = 0, /**< uart0_fatal_fault */
  kTopIntegratedEarlgreyAlertIdUart1FatalFault = 1, /**< uart1_fatal_fault */
  kTopIntegratedEarlgreyAlertIdUart2FatalFault = 2, /**< uart2_fatal_fault */
  kTopIntegratedEarlgreyAlertIdUart3FatalFault = 3, /**< uart3_fatal_fault */
  kTopIntegratedEarlgreyAlertIdGpioFatalFault = 4, /**< gpio_fatal_fault */
  kTopIntegratedEarlgreyAlertIdSpiDeviceFatalFault = 5, /**< spi_device_fatal_fault */
  kTopIntegratedEarlgreyAlertIdI2c0FatalFault = 6, /**< i2c0_fatal_fault */
  kTopIntegratedEarlgreyAlertIdI2c1FatalFault = 7, /**< i2c1_fatal_fault */
  kTopIntegratedEarlgreyAlertIdI2c2FatalFault = 8, /**< i2c2_fatal_fault */
  kTopIntegratedEarlgreyAlertIdPattgenFatalFault = 9, /**< pattgen_fatal_fault */
  kTopIntegratedEarlgreyAlertIdRvTimerFatalFault = 10, /**< rv_timer_fatal_fault */
  kTopIntegratedEarlgreyAlertIdOtpCtrlFatalMacroError = 11, /**< otp_ctrl_fatal_macro_error */
  kTopIntegratedEarlgreyAlertIdOtpCtrlFatalCheckError = 12, /**< otp_ctrl_fatal_check_error */
  kTopIntegratedEarlgreyAlertIdOtpCtrlFatalBusIntegError = 13, /**< otp_ctrl_fatal_bus_integ_error */
  kTopIntegratedEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert = 14, /**< otp_ctrl_fatal_prim_otp_alert */
  kTopIntegratedEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert = 15, /**< otp_ctrl_recov_prim_otp_alert */
  kTopIntegratedEarlgreyAlertIdLcCtrlFatalProgError = 16, /**< lc_ctrl_fatal_prog_error */
  kTopIntegratedEarlgreyAlertIdLcCtrlFatalStateError = 17, /**< lc_ctrl_fatal_state_error */
  kTopIntegratedEarlgreyAlertIdLcCtrlFatalBusIntegError = 18, /**< lc_ctrl_fatal_bus_integ_error */
  kTopIntegratedEarlgreyAlertIdSpiHost0FatalFault = 19, /**< spi_host0_fatal_fault */
  kTopIntegratedEarlgreyAlertIdSpiHost1FatalFault = 20, /**< spi_host1_fatal_fault */
  kTopIntegratedEarlgreyAlertIdUsbdevFatalFault = 21, /**< usbdev_fatal_fault */
  kTopIntegratedEarlgreyAlertIdPwrmgrAonFatalFault = 22, /**< pwrmgr_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdRstmgrAonFatalFault = 23, /**< rstmgr_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdRstmgrAonFatalCnstyFault = 24, /**< rstmgr_aon_fatal_cnsty_fault */
  kTopIntegratedEarlgreyAlertIdClkmgrAonRecovFault = 25, /**< clkmgr_aon_recov_fault */
  kTopIntegratedEarlgreyAlertIdClkmgrAonFatalFault = 26, /**< clkmgr_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdSysrstCtrlAonFatalFault = 27, /**< sysrst_ctrl_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdAdcCtrlAonFatalFault = 28, /**< adc_ctrl_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdPwmAonFatalFault = 29, /**< pwm_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdPinmuxAonFatalFault = 30, /**< pinmux_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdAonTimerAonFatalFault = 31, /**< aon_timer_aon_fatal_fault */
  kTopIntegratedEarlgreyAlertIdMailboxFatalFault = 32, /**< mailbox_fatal_fault */
  kTopIntegratedEarlgreyAlertIdSensorCtrlAonRecovAlert = 33, /**< sensor_ctrl_aon_recov_alert */
  kTopIntegratedEarlgreyAlertIdSensorCtrlAonFatalAlert = 34, /**< sensor_ctrl_aon_fatal_alert */
  kTopIntegratedEarlgreyAlertIdSramCtrlRetAonFatalError = 35, /**< sram_ctrl_ret_aon_fatal_error */
  kTopIntegratedEarlgreyAlertIdFlashCtrlRecovErr = 36, /**< flash_ctrl_recov_err */
  kTopIntegratedEarlgreyAlertIdFlashCtrlFatalStdErr = 37, /**< flash_ctrl_fatal_std_err */
  kTopIntegratedEarlgreyAlertIdFlashCtrlFatalErr = 38, /**< flash_ctrl_fatal_err */
  kTopIntegratedEarlgreyAlertIdFlashCtrlFatalPrimFlashAlert = 39, /**< flash_ctrl_fatal_prim_flash_alert */
  kTopIntegratedEarlgreyAlertIdFlashCtrlRecovPrimFlashAlert = 40, /**< flash_ctrl_recov_prim_flash_alert */
  kTopIntegratedEarlgreyAlertIdRvDmFatalFault = 41, /**< rv_dm_fatal_fault */
  kTopIntegratedEarlgreyAlertIdRvPlicFatalFault = 42, /**< rv_plic_fatal_fault */
  kTopIntegratedEarlgreyAlertIdAesRecovCtrlUpdateErr = 43, /**< aes_recov_ctrl_update_err */
  kTopIntegratedEarlgreyAlertIdAesFatalFault = 44, /**< aes_fatal_fault */
  kTopIntegratedEarlgreyAlertIdHmacFatalFault = 45, /**< hmac_fatal_fault */
  kTopIntegratedEarlgreyAlertIdKmacRecovOperationErr = 46, /**< kmac_recov_operation_err */
  kTopIntegratedEarlgreyAlertIdKmacFatalFaultErr = 47, /**< kmac_fatal_fault_err */
  kTopIntegratedEarlgreyAlertIdOtbnFatal = 48, /**< otbn_fatal */
  kTopIntegratedEarlgreyAlertIdOtbnRecov = 49, /**< otbn_recov */
  kTopIntegratedEarlgreyAlertIdKeymgrRecovOperationErr = 50, /**< keymgr_recov_operation_err */
  kTopIntegratedEarlgreyAlertIdKeymgrFatalFaultErr = 51, /**< keymgr_fatal_fault_err */
  kTopIntegratedEarlgreyAlertIdCsrngRecovAlert = 52, /**< csrng_recov_alert */
  kTopIntegratedEarlgreyAlertIdCsrngFatalAlert = 53, /**< csrng_fatal_alert */
  kTopIntegratedEarlgreyAlertIdEntropySrcRecovAlert = 54, /**< entropy_src_recov_alert */
  kTopIntegratedEarlgreyAlertIdEntropySrcFatalAlert = 55, /**< entropy_src_fatal_alert */
  kTopIntegratedEarlgreyAlertIdEdn0RecovAlert = 56, /**< edn0_recov_alert */
  kTopIntegratedEarlgreyAlertIdEdn0FatalAlert = 57, /**< edn0_fatal_alert */
  kTopIntegratedEarlgreyAlertIdEdn1RecovAlert = 58, /**< edn1_recov_alert */
  kTopIntegratedEarlgreyAlertIdEdn1FatalAlert = 59, /**< edn1_fatal_alert */
  kTopIntegratedEarlgreyAlertIdSramCtrlMainFatalError = 60, /**< sram_ctrl_main_fatal_error */
  kTopIntegratedEarlgreyAlertIdRomCtrlFatal = 61, /**< rom_ctrl_fatal */
  kTopIntegratedEarlgreyAlertIdRvCoreIbexFatalSwErr = 62, /**< rv_core_ibex_fatal_sw_err */
  kTopIntegratedEarlgreyAlertIdRvCoreIbexRecovSwErr = 63, /**< rv_core_ibex_recov_sw_err */
  kTopIntegratedEarlgreyAlertIdRvCoreIbexFatalHwErr = 64, /**< rv_core_ibex_fatal_hw_err */
  kTopIntegratedEarlgreyAlertIdRvCoreIbexRecovHwErr = 65, /**< rv_core_ibex_recov_hw_err */
  kTopIntegratedEarlgreyAlertIdLast = 65, /**< \internal The Last Valid Alert ID. */
} top_integrated_earlgrey_alert_id_t;

/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_integrated_earlgrey_alert_id_t` to
 * `top_integrated_earlgrey_alert_peripheral_t`.
 */
extern const top_integrated_earlgrey_alert_peripheral_t
    top_integrated_earlgrey_alert_for_peripheral[66];

#define PINMUX_MIO_PERIPH_INSEL_IDX_OFFSET 2

// PERIPH_INSEL ranges from 0 to NUM_MIO_PADS + 2 -1}
//  0 and 1 are tied to value 0 and 1
#define NUM_MIO_PADS 47
#define NUM_DIO_PADS 16

#define PINMUX_PERIPH_OUTSEL_IDX_OFFSET 3

/**
 * Pinmux Peripheral Input.
 */
typedef enum top_integrated_earlgrey_pinmux_peripheral_in {
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio0 = 0, /**< Peripheral Input 0 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio1 = 1, /**< Peripheral Input 1 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio2 = 2, /**< Peripheral Input 2 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio3 = 3, /**< Peripheral Input 3 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio4 = 4, /**< Peripheral Input 4 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio5 = 5, /**< Peripheral Input 5 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio6 = 6, /**< Peripheral Input 6 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio7 = 7, /**< Peripheral Input 7 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio8 = 8, /**< Peripheral Input 8 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio9 = 9, /**< Peripheral Input 9 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio10 = 10, /**< Peripheral Input 10 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio11 = 11, /**< Peripheral Input 11 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio12 = 12, /**< Peripheral Input 12 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio13 = 13, /**< Peripheral Input 13 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio14 = 14, /**< Peripheral Input 14 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio15 = 15, /**< Peripheral Input 15 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio16 = 16, /**< Peripheral Input 16 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio17 = 17, /**< Peripheral Input 17 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio18 = 18, /**< Peripheral Input 18 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio19 = 19, /**< Peripheral Input 19 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio20 = 20, /**< Peripheral Input 20 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio21 = 21, /**< Peripheral Input 21 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio22 = 22, /**< Peripheral Input 22 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio23 = 23, /**< Peripheral Input 23 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio24 = 24, /**< Peripheral Input 24 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio25 = 25, /**< Peripheral Input 25 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio26 = 26, /**< Peripheral Input 26 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio27 = 27, /**< Peripheral Input 27 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio28 = 28, /**< Peripheral Input 28 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio29 = 29, /**< Peripheral Input 29 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio30 = 30, /**< Peripheral Input 30 */
  kTopIntegratedEarlgreyPinmuxPeripheralInGpioGpio31 = 31, /**< Peripheral Input 31 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c0Sda = 32, /**< Peripheral Input 32 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c0Scl = 33, /**< Peripheral Input 33 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c1Sda = 34, /**< Peripheral Input 34 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c1Scl = 35, /**< Peripheral Input 35 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c2Sda = 36, /**< Peripheral Input 36 */
  kTopIntegratedEarlgreyPinmuxPeripheralInI2c2Scl = 37, /**< Peripheral Input 37 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSpiHost1Sd0 = 38, /**< Peripheral Input 38 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSpiHost1Sd1 = 39, /**< Peripheral Input 39 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSpiHost1Sd2 = 40, /**< Peripheral Input 40 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSpiHost1Sd3 = 41, /**< Peripheral Input 41 */
  kTopIntegratedEarlgreyPinmuxPeripheralInUart0Rx = 42, /**< Peripheral Input 42 */
  kTopIntegratedEarlgreyPinmuxPeripheralInUart1Rx = 43, /**< Peripheral Input 43 */
  kTopIntegratedEarlgreyPinmuxPeripheralInUart2Rx = 44, /**< Peripheral Input 44 */
  kTopIntegratedEarlgreyPinmuxPeripheralInUart3Rx = 45, /**< Peripheral Input 45 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSpiDeviceTpmCsb = 46, /**< Peripheral Input 46 */
  kTopIntegratedEarlgreyPinmuxPeripheralInFlashCtrlTck = 47, /**< Peripheral Input 47 */
  kTopIntegratedEarlgreyPinmuxPeripheralInFlashCtrlTms = 48, /**< Peripheral Input 48 */
  kTopIntegratedEarlgreyPinmuxPeripheralInFlashCtrlTdi = 49, /**< Peripheral Input 49 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonAcPresent = 50, /**< Peripheral Input 50 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonKey0In = 51, /**< Peripheral Input 51 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonKey1In = 52, /**< Peripheral Input 52 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonKey2In = 53, /**< Peripheral Input 53 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonPwrbIn = 54, /**< Peripheral Input 54 */
  kTopIntegratedEarlgreyPinmuxPeripheralInSysrstCtrlAonLidOpen = 55, /**< Peripheral Input 55 */
  kTopIntegratedEarlgreyPinmuxPeripheralInUsbdevSense = 56, /**< Peripheral Input 56 */
  kTopIntegratedEarlgreyPinmuxPeripheralInLast = 56, /**< \internal Last valid peripheral input */
} top_integrated_earlgrey_pinmux_peripheral_in_t;

/**
 * Pinmux MIO Input Selector.
 */
typedef enum top_integrated_earlgrey_pinmux_insel {
  kTopIntegratedEarlgreyPinmuxInselConstantZero = 0, /**< Tie constantly to zero */
  kTopIntegratedEarlgreyPinmuxInselConstantOne = 1, /**< Tie constantly to one */
  kTopIntegratedEarlgreyPinmuxInselIoa0 = 2, /**< MIO Pad 0 */
  kTopIntegratedEarlgreyPinmuxInselIoa1 = 3, /**< MIO Pad 1 */
  kTopIntegratedEarlgreyPinmuxInselIoa2 = 4, /**< MIO Pad 2 */
  kTopIntegratedEarlgreyPinmuxInselIoa3 = 5, /**< MIO Pad 3 */
  kTopIntegratedEarlgreyPinmuxInselIoa4 = 6, /**< MIO Pad 4 */
  kTopIntegratedEarlgreyPinmuxInselIoa5 = 7, /**< MIO Pad 5 */
  kTopIntegratedEarlgreyPinmuxInselIoa6 = 8, /**< MIO Pad 6 */
  kTopIntegratedEarlgreyPinmuxInselIoa7 = 9, /**< MIO Pad 7 */
  kTopIntegratedEarlgreyPinmuxInselIoa8 = 10, /**< MIO Pad 8 */
  kTopIntegratedEarlgreyPinmuxInselIob0 = 11, /**< MIO Pad 9 */
  kTopIntegratedEarlgreyPinmuxInselIob1 = 12, /**< MIO Pad 10 */
  kTopIntegratedEarlgreyPinmuxInselIob2 = 13, /**< MIO Pad 11 */
  kTopIntegratedEarlgreyPinmuxInselIob3 = 14, /**< MIO Pad 12 */
  kTopIntegratedEarlgreyPinmuxInselIob4 = 15, /**< MIO Pad 13 */
  kTopIntegratedEarlgreyPinmuxInselIob5 = 16, /**< MIO Pad 14 */
  kTopIntegratedEarlgreyPinmuxInselIob6 = 17, /**< MIO Pad 15 */
  kTopIntegratedEarlgreyPinmuxInselIob7 = 18, /**< MIO Pad 16 */
  kTopIntegratedEarlgreyPinmuxInselIob8 = 19, /**< MIO Pad 17 */
  kTopIntegratedEarlgreyPinmuxInselIob9 = 20, /**< MIO Pad 18 */
  kTopIntegratedEarlgreyPinmuxInselIob10 = 21, /**< MIO Pad 19 */
  kTopIntegratedEarlgreyPinmuxInselIob11 = 22, /**< MIO Pad 20 */
  kTopIntegratedEarlgreyPinmuxInselIob12 = 23, /**< MIO Pad 21 */
  kTopIntegratedEarlgreyPinmuxInselIoc0 = 24, /**< MIO Pad 22 */
  kTopIntegratedEarlgreyPinmuxInselIoc1 = 25, /**< MIO Pad 23 */
  kTopIntegratedEarlgreyPinmuxInselIoc2 = 26, /**< MIO Pad 24 */
  kTopIntegratedEarlgreyPinmuxInselIoc3 = 27, /**< MIO Pad 25 */
  kTopIntegratedEarlgreyPinmuxInselIoc4 = 28, /**< MIO Pad 26 */
  kTopIntegratedEarlgreyPinmuxInselIoc5 = 29, /**< MIO Pad 27 */
  kTopIntegratedEarlgreyPinmuxInselIoc6 = 30, /**< MIO Pad 28 */
  kTopIntegratedEarlgreyPinmuxInselIoc7 = 31, /**< MIO Pad 29 */
  kTopIntegratedEarlgreyPinmuxInselIoc8 = 32, /**< MIO Pad 30 */
  kTopIntegratedEarlgreyPinmuxInselIoc9 = 33, /**< MIO Pad 31 */
  kTopIntegratedEarlgreyPinmuxInselIoc10 = 34, /**< MIO Pad 32 */
  kTopIntegratedEarlgreyPinmuxInselIoc11 = 35, /**< MIO Pad 33 */
  kTopIntegratedEarlgreyPinmuxInselIoc12 = 36, /**< MIO Pad 34 */
  kTopIntegratedEarlgreyPinmuxInselIor0 = 37, /**< MIO Pad 35 */
  kTopIntegratedEarlgreyPinmuxInselIor1 = 38, /**< MIO Pad 36 */
  kTopIntegratedEarlgreyPinmuxInselIor2 = 39, /**< MIO Pad 37 */
  kTopIntegratedEarlgreyPinmuxInselIor3 = 40, /**< MIO Pad 38 */
  kTopIntegratedEarlgreyPinmuxInselIor4 = 41, /**< MIO Pad 39 */
  kTopIntegratedEarlgreyPinmuxInselIor5 = 42, /**< MIO Pad 40 */
  kTopIntegratedEarlgreyPinmuxInselIor6 = 43, /**< MIO Pad 41 */
  kTopIntegratedEarlgreyPinmuxInselIor7 = 44, /**< MIO Pad 42 */
  kTopIntegratedEarlgreyPinmuxInselIor10 = 45, /**< MIO Pad 43 */
  kTopIntegratedEarlgreyPinmuxInselIor11 = 46, /**< MIO Pad 44 */
  kTopIntegratedEarlgreyPinmuxInselIor12 = 47, /**< MIO Pad 45 */
  kTopIntegratedEarlgreyPinmuxInselIor13 = 48, /**< MIO Pad 46 */
  kTopIntegratedEarlgreyPinmuxInselLast = 48, /**< \internal Last valid insel value */
} top_integrated_earlgrey_pinmux_insel_t;

/**
 * Pinmux MIO Output.
 */
typedef enum top_integrated_earlgrey_pinmux_mio_out {
  kTopIntegratedEarlgreyPinmuxMioOutIoa0 = 0, /**< MIO Pad 0 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa1 = 1, /**< MIO Pad 1 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa2 = 2, /**< MIO Pad 2 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa3 = 3, /**< MIO Pad 3 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa4 = 4, /**< MIO Pad 4 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa5 = 5, /**< MIO Pad 5 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa6 = 6, /**< MIO Pad 6 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa7 = 7, /**< MIO Pad 7 */
  kTopIntegratedEarlgreyPinmuxMioOutIoa8 = 8, /**< MIO Pad 8 */
  kTopIntegratedEarlgreyPinmuxMioOutIob0 = 9, /**< MIO Pad 9 */
  kTopIntegratedEarlgreyPinmuxMioOutIob1 = 10, /**< MIO Pad 10 */
  kTopIntegratedEarlgreyPinmuxMioOutIob2 = 11, /**< MIO Pad 11 */
  kTopIntegratedEarlgreyPinmuxMioOutIob3 = 12, /**< MIO Pad 12 */
  kTopIntegratedEarlgreyPinmuxMioOutIob4 = 13, /**< MIO Pad 13 */
  kTopIntegratedEarlgreyPinmuxMioOutIob5 = 14, /**< MIO Pad 14 */
  kTopIntegratedEarlgreyPinmuxMioOutIob6 = 15, /**< MIO Pad 15 */
  kTopIntegratedEarlgreyPinmuxMioOutIob7 = 16, /**< MIO Pad 16 */
  kTopIntegratedEarlgreyPinmuxMioOutIob8 = 17, /**< MIO Pad 17 */
  kTopIntegratedEarlgreyPinmuxMioOutIob9 = 18, /**< MIO Pad 18 */
  kTopIntegratedEarlgreyPinmuxMioOutIob10 = 19, /**< MIO Pad 19 */
  kTopIntegratedEarlgreyPinmuxMioOutIob11 = 20, /**< MIO Pad 20 */
  kTopIntegratedEarlgreyPinmuxMioOutIob12 = 21, /**< MIO Pad 21 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc0 = 22, /**< MIO Pad 22 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc1 = 23, /**< MIO Pad 23 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc2 = 24, /**< MIO Pad 24 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc3 = 25, /**< MIO Pad 25 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc4 = 26, /**< MIO Pad 26 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc5 = 27, /**< MIO Pad 27 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc6 = 28, /**< MIO Pad 28 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc7 = 29, /**< MIO Pad 29 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc8 = 30, /**< MIO Pad 30 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc9 = 31, /**< MIO Pad 31 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc10 = 32, /**< MIO Pad 32 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc11 = 33, /**< MIO Pad 33 */
  kTopIntegratedEarlgreyPinmuxMioOutIoc12 = 34, /**< MIO Pad 34 */
  kTopIntegratedEarlgreyPinmuxMioOutIor0 = 35, /**< MIO Pad 35 */
  kTopIntegratedEarlgreyPinmuxMioOutIor1 = 36, /**< MIO Pad 36 */
  kTopIntegratedEarlgreyPinmuxMioOutIor2 = 37, /**< MIO Pad 37 */
  kTopIntegratedEarlgreyPinmuxMioOutIor3 = 38, /**< MIO Pad 38 */
  kTopIntegratedEarlgreyPinmuxMioOutIor4 = 39, /**< MIO Pad 39 */
  kTopIntegratedEarlgreyPinmuxMioOutIor5 = 40, /**< MIO Pad 40 */
  kTopIntegratedEarlgreyPinmuxMioOutIor6 = 41, /**< MIO Pad 41 */
  kTopIntegratedEarlgreyPinmuxMioOutIor7 = 42, /**< MIO Pad 42 */
  kTopIntegratedEarlgreyPinmuxMioOutIor10 = 43, /**< MIO Pad 43 */
  kTopIntegratedEarlgreyPinmuxMioOutIor11 = 44, /**< MIO Pad 44 */
  kTopIntegratedEarlgreyPinmuxMioOutIor12 = 45, /**< MIO Pad 45 */
  kTopIntegratedEarlgreyPinmuxMioOutIor13 = 46, /**< MIO Pad 46 */
  kTopIntegratedEarlgreyPinmuxMioOutLast = 46, /**< \internal Last valid mio output */
} top_integrated_earlgrey_pinmux_mio_out_t;

/**
 * Pinmux Peripheral Output Selector.
 */
typedef enum top_integrated_earlgrey_pinmux_outsel {
  kTopIntegratedEarlgreyPinmuxOutselConstantZero = 0, /**< Tie constantly to zero */
  kTopIntegratedEarlgreyPinmuxOutselConstantOne = 1, /**< Tie constantly to one */
  kTopIntegratedEarlgreyPinmuxOutselConstantHighZ = 2, /**< Tie constantly to high-Z */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio0 = 3, /**< Peripheral Output 0 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio1 = 4, /**< Peripheral Output 1 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio2 = 5, /**< Peripheral Output 2 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio3 = 6, /**< Peripheral Output 3 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio4 = 7, /**< Peripheral Output 4 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio5 = 8, /**< Peripheral Output 5 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio6 = 9, /**< Peripheral Output 6 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio7 = 10, /**< Peripheral Output 7 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio8 = 11, /**< Peripheral Output 8 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio9 = 12, /**< Peripheral Output 9 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio10 = 13, /**< Peripheral Output 10 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio11 = 14, /**< Peripheral Output 11 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio12 = 15, /**< Peripheral Output 12 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio13 = 16, /**< Peripheral Output 13 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio14 = 17, /**< Peripheral Output 14 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio15 = 18, /**< Peripheral Output 15 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio16 = 19, /**< Peripheral Output 16 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio17 = 20, /**< Peripheral Output 17 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio18 = 21, /**< Peripheral Output 18 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio19 = 22, /**< Peripheral Output 19 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio20 = 23, /**< Peripheral Output 20 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio21 = 24, /**< Peripheral Output 21 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio22 = 25, /**< Peripheral Output 22 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio23 = 26, /**< Peripheral Output 23 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio24 = 27, /**< Peripheral Output 24 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio25 = 28, /**< Peripheral Output 25 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio26 = 29, /**< Peripheral Output 26 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio27 = 30, /**< Peripheral Output 27 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio28 = 31, /**< Peripheral Output 28 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio29 = 32, /**< Peripheral Output 29 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio30 = 33, /**< Peripheral Output 30 */
  kTopIntegratedEarlgreyPinmuxOutselGpioGpio31 = 34, /**< Peripheral Output 31 */
  kTopIntegratedEarlgreyPinmuxOutselI2c0Sda = 35, /**< Peripheral Output 32 */
  kTopIntegratedEarlgreyPinmuxOutselI2c0Scl = 36, /**< Peripheral Output 33 */
  kTopIntegratedEarlgreyPinmuxOutselI2c1Sda = 37, /**< Peripheral Output 34 */
  kTopIntegratedEarlgreyPinmuxOutselI2c1Scl = 38, /**< Peripheral Output 35 */
  kTopIntegratedEarlgreyPinmuxOutselI2c2Sda = 39, /**< Peripheral Output 36 */
  kTopIntegratedEarlgreyPinmuxOutselI2c2Scl = 40, /**< Peripheral Output 37 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Sd0 = 41, /**< Peripheral Output 38 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Sd1 = 42, /**< Peripheral Output 39 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Sd2 = 43, /**< Peripheral Output 40 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Sd3 = 44, /**< Peripheral Output 41 */
  kTopIntegratedEarlgreyPinmuxOutselUart0Tx = 45, /**< Peripheral Output 42 */
  kTopIntegratedEarlgreyPinmuxOutselUart1Tx = 46, /**< Peripheral Output 43 */
  kTopIntegratedEarlgreyPinmuxOutselUart2Tx = 47, /**< Peripheral Output 44 */
  kTopIntegratedEarlgreyPinmuxOutselUart3Tx = 48, /**< Peripheral Output 45 */
  kTopIntegratedEarlgreyPinmuxOutselPattgenPda0Tx = 49, /**< Peripheral Output 46 */
  kTopIntegratedEarlgreyPinmuxOutselPattgenPcl0Tx = 50, /**< Peripheral Output 47 */
  kTopIntegratedEarlgreyPinmuxOutselPattgenPda1Tx = 51, /**< Peripheral Output 48 */
  kTopIntegratedEarlgreyPinmuxOutselPattgenPcl1Tx = 52, /**< Peripheral Output 49 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Sck = 53, /**< Peripheral Output 50 */
  kTopIntegratedEarlgreyPinmuxOutselSpiHost1Csb = 54, /**< Peripheral Output 51 */
  kTopIntegratedEarlgreyPinmuxOutselFlashCtrlTdo = 55, /**< Peripheral Output 52 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut0 = 56, /**< Peripheral Output 53 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut1 = 57, /**< Peripheral Output 54 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut2 = 58, /**< Peripheral Output 55 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut3 = 59, /**< Peripheral Output 56 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut4 = 60, /**< Peripheral Output 57 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut5 = 61, /**< Peripheral Output 58 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut6 = 62, /**< Peripheral Output 59 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut7 = 63, /**< Peripheral Output 60 */
  kTopIntegratedEarlgreyPinmuxOutselSensorCtrlAonAstDebugOut8 = 64, /**< Peripheral Output 61 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm0 = 65, /**< Peripheral Output 62 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm1 = 66, /**< Peripheral Output 63 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm2 = 67, /**< Peripheral Output 64 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm3 = 68, /**< Peripheral Output 65 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm4 = 69, /**< Peripheral Output 66 */
  kTopIntegratedEarlgreyPinmuxOutselPwmAonPwm5 = 70, /**< Peripheral Output 67 */
  kTopIntegratedEarlgreyPinmuxOutselOtpMacroTest0 = 71, /**< Peripheral Output 68 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonBatDisable = 72, /**< Peripheral Output 69 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonKey0Out = 73, /**< Peripheral Output 70 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonKey1Out = 74, /**< Peripheral Output 71 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonKey2Out = 75, /**< Peripheral Output 72 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonPwrbOut = 76, /**< Peripheral Output 73 */
  kTopIntegratedEarlgreyPinmuxOutselSysrstCtrlAonZ3Wakeup = 77, /**< Peripheral Output 74 */
  kTopIntegratedEarlgreyPinmuxOutselLast = 77, /**< \internal Last valid outsel value */
} top_integrated_earlgrey_pinmux_outsel_t;

/**
 * Dedicated Pad Selects
 */
typedef enum top_integrated_earlgrey_direct_pads {
  kTopIntegratedEarlgreyDirectPadsUsbdevUsbDp = 0, /**<  */
  kTopIntegratedEarlgreyDirectPadsUsbdevUsbDn = 1, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Sd0 = 2, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Sd1 = 3, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Sd2 = 4, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Sd3 = 5, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceSd0 = 6, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceSd1 = 7, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceSd2 = 8, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceSd3 = 9, /**<  */
  kTopIntegratedEarlgreyDirectPadsSysrstCtrlAonEcRstL = 10, /**<  */
  kTopIntegratedEarlgreyDirectPadsSysrstCtrlAonFlashWpL = 11, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceSck = 12, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiDeviceCsb = 13, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Sck = 14, /**<  */
  kTopIntegratedEarlgreyDirectPadsSpiHost0Csb = 15, /**<  */
  kTopIntegratedEarlgreyDirectPadsLast = 15, /**< \internal Last valid direct pad */
} top_integrated_earlgrey_direct_pads_t;

/**
 * Muxed Pad Selects
 */
typedef enum top_integrated_earlgrey_muxed_pads {
  kTopIntegratedEarlgreyMuxedPadsIoa0 = 0, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa1 = 1, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa2 = 2, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa3 = 3, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa4 = 4, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa5 = 5, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa6 = 6, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa7 = 7, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoa8 = 8, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob0 = 9, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob1 = 10, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob2 = 11, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob3 = 12, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob4 = 13, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob5 = 14, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob6 = 15, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob7 = 16, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob8 = 17, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob9 = 18, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob10 = 19, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob11 = 20, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIob12 = 21, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc0 = 22, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc1 = 23, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc2 = 24, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc3 = 25, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc4 = 26, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc5 = 27, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc6 = 28, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc7 = 29, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc8 = 30, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc9 = 31, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc10 = 32, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc11 = 33, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIoc12 = 34, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor0 = 35, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor1 = 36, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor2 = 37, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor3 = 38, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor4 = 39, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor5 = 40, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor6 = 41, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor7 = 42, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor10 = 43, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor11 = 44, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor12 = 45, /**<  */
  kTopIntegratedEarlgreyMuxedPadsIor13 = 46, /**<  */
  kTopIntegratedEarlgreyMuxedPadsLast = 46, /**< \internal Last valid muxed pad */
} top_integrated_earlgrey_muxed_pads_t;

/**
 * Power Manager Wakeup Signals
 */
typedef enum top_integrated_earlgrey_power_manager_wake_ups {
  kTopIntegratedEarlgreyPowerManagerWakeUpsSysrstCtrlAonWkupReq = 0, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsAdcCtrlAonWkupReq = 1, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsPinmuxAonPinWkupReq = 2, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsPinmuxAonUsbWkupReq = 3, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsAonTimerAonWkupReq = 4, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsSensorCtrlAonWkupReq = 5, /**<  */
  kTopIntegratedEarlgreyPowerManagerWakeUpsLast = 5, /**< \internal Last valid pwrmgr wakeup signal */
} top_integrated_earlgrey_power_manager_wake_ups_t;

/**
 * Reset Manager Software Controlled Resets
 */
typedef enum top_integrated_earlgrey_reset_manager_sw_resets {
  kTopIntegratedEarlgreyResetManagerSwResetsSpiDevice = 0, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsSpiHost0 = 1, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsSpiHost1 = 2, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsUsb = 3, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsUsbAon = 4, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsI2c0 = 5, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsI2c1 = 6, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsI2c2 = 7, /**<  */
  kTopIntegratedEarlgreyResetManagerSwResetsLast = 7, /**< \internal Last valid rstmgr software reset request */
} top_integrated_earlgrey_reset_manager_sw_resets_t;

/**
 * Power Manager Reset Request Signals
 */
typedef enum top_integrated_earlgrey_power_manager_reset_requests {
  kTopIntegratedEarlgreyPowerManagerResetRequestsSysrstCtrlAonRstReq = 0, /**<  */
  kTopIntegratedEarlgreyPowerManagerResetRequestsAonTimerAonAonTimerRstReq = 1, /**<  */
  kTopIntegratedEarlgreyPowerManagerResetRequestsLast = 1, /**< \internal Last valid pwrmgr reset_request signal */
} top_integrated_earlgrey_power_manager_reset_requests_t;

/**
 * Clock Manager Software-Controlled ("Gated") Clocks.
 *
 * The Software has full control over these clocks.
 */
typedef enum top_integrated_earlgrey_gateable_clocks {
  kTopIntegratedEarlgreyGateableClocksIoDiv4Peri = 0, /**< Clock clk_io_div4_peri in group peri */
  kTopIntegratedEarlgreyGateableClocksIoDiv2Peri = 1, /**< Clock clk_io_div2_peri in group peri */
  kTopIntegratedEarlgreyGateableClocksIoPeri = 2, /**< Clock clk_io_peri in group peri */
  kTopIntegratedEarlgreyGateableClocksUsbPeri = 3, /**< Clock clk_usb_peri in group peri */
  kTopIntegratedEarlgreyGateableClocksLast = 3, /**< \internal Last Valid Gateable Clock */
} top_integrated_earlgrey_gateable_clocks_t;

/**
 * Clock Manager Software-Hinted Clocks.
 *
 * The Software has partial control over these clocks. It can ask them to stop,
 * but the clock manager is in control of whether the clock actually is stopped.
 */
typedef enum top_integrated_earlgrey_hintable_clocks {
  kTopIntegratedEarlgreyHintableClocksMainAes = 0, /**< Clock clk_main_aes in group trans */
  kTopIntegratedEarlgreyHintableClocksMainHmac = 1, /**< Clock clk_main_hmac in group trans */
  kTopIntegratedEarlgreyHintableClocksMainKmac = 2, /**< Clock clk_main_kmac in group trans */
  kTopIntegratedEarlgreyHintableClocksMainOtbn = 3, /**< Clock clk_main_otbn in group trans */
  kTopIntegratedEarlgreyHintableClocksLast = 3, /**< \internal Last Valid Hintable Clock */
} top_integrated_earlgrey_hintable_clocks_t;

/**
 * MMIO Region
 *
 * MMIO region excludes any memory that is separate from the module
 * configuration space, i.e. ROM, main SRAM, and flash are excluded but
 * retention SRAM, spi_device memory, or usbdev memory are included.
 */
#define TOP_INTEGRATED_EARLGREY_MMIO_BASE_ADDR 0x40000000u
#define TOP_INTEGRATED_EARLGREY_MMIO_SIZE_BYTES 0x10000000u

// Header Extern Guard
#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // OPENTITAN_HW_TOP_INTEGRATED_EARLGREY_SW_AUTOGEN_TOP_INTEGRATED_EARLGREY_H_
