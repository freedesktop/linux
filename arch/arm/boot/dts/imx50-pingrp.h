/*
 * Copyright (C) 2013 Freescale Semiconductor, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 */

#ifndef __DTS_IMX50_PINGRP_H
#define __DTS_IMX50_PINGRP_H

#include "imx50-pinfunc.h"

#define MX50_CSPI_PINGRP1 \
	MX50_PAD_CSPI_SCLK__CSPI_SCLK			0x00 \
	MX50_PAD_CSPI_MISO__CSPI_MISO			0x00 \
	MX50_PAD_CSPI_MOSI__CSPI_MOSI			0x00 \
	MX50_PAD_CSPI_SS0__GPIO4_11			0xc4 \
	MX50_PAD_ECSPI1_MOSI__CSPI_SS1			0xf4

#define MX50_ECSPI1_PINGRP1 \
	MX50_PAD_ECSPI1_SCLK__ECSPI1_SCLK		0x00 \
	MX50_PAD_ECSPI1_SS0__ECSPI1_SS0			0x00 \
	MX50_PAD_ECSPI1_MISO__ECSPI1_MISO		0x00 \
	MX50_PAD_ECSPI1_MOSI__ECSPI1_MOSI		0x00

#define MX50_ESDHC1_PINGRP1 \
	MX50_PAD_SD1_D0__ESDHC1_DAT0			0x1d4 \
	MX50_PAD_SD1_D1__ESDHC1_DAT1			0x1d4 \
	MX50_PAD_SD1_D2__ESDHC1_DAT2			0x1d4 \
	MX50_PAD_SD1_D3__ESDHC1_DAT3			0x1d4 \
	MX50_PAD_SD1_CMD__ESDHC1_CMD			0x1e4 \
	MX50_PAD_SD1_CLK__ESDHC1_CLK			0xd4

#define MX50_ESDHC1_PINGRP2 \
	MX50_PAD_SD1_D0__ESDHC1_DAT0			0x1d4 \
	MX50_PAD_SD1_D1__ESDHC1_DAT1			0x1d4 \
	MX50_PAD_SD1_D2__ESDHC1_DAT2			0x1d4 \
	MX50_PAD_SD1_D3__ESDHC1_DAT3			0x1d4 \
	MX50_PAD_UART3_TXD__ESDHC1_DAT4			0x1d4 \
	MX50_PAD_UART3_RXD__ESDHC1_DAT5			0x1d4 \
	MX50_PAD_UART4_TXD__ESDHC1_DAT6			0x1d4 \
	MX50_PAD_UART4_RXD__ESDHC1_DAT7			0x1d4 \
	MX50_PAD_SD1_CMD__ESDHC1_CMD			0x14 \
	MX50_PAD_SD1_CLK__ESDHC1_CLK			0xd4

#define MX50_ESDHC2_PINGRP1 \
	MX50_PAD_SD2_CMD__ESDHC2_CMD			0x1e4 \
	MX50_PAD_SD2_CLK__ESDHC2_CLK			0xd4 \
	MX50_PAD_SD2_D0__ESDHC2_DAT0			0x1d4 \
	MX50_PAD_SD2_D1__ESDHC2_DAT1			0x1d4 \
	MX50_PAD_SD2_D2__ESDHC2_DAT2			0x1d4 \
	MX50_PAD_SD2_D3__ESDHC2_DAT3			0x1d4 \
	MX50_PAD_SD2_D4__ESDHC2_DAT4			0x1d4 \
	MX50_PAD_SD2_D5__ESDHC2_DAT5			0x1d4 \
	MX50_PAD_SD2_D6__ESDHC2_DAT6			0x1d4 \
	MX50_PAD_SD2_D7__ESDHC2_DAT7			0x1d4

#define MX50_ESDHC3_PINGRP1 \
	MX50_PAD_SD3_D0__ESDHC3_DAT0			0x1d4 \
	MX50_PAD_SD3_D1__ESDHC3_DAT1			0x1d4 \
	MX50_PAD_SD3_D2__ESDHC3_DAT2			0x1d4 \
	MX50_PAD_SD3_D3__ESDHC3_DAT3			0x1d4 \
	MX50_PAD_SD3_D4__ESDHC3_DAT4			0x1d4 \
	MX50_PAD_SD3_D5__ESDHC3_DAT5			0x1d4 \
	MX50_PAD_SD3_D6__ESDHC3_DAT6			0x1d4 \
	MX50_PAD_SD3_D7__ESDHC3_DAT7			0x1d4 \
	MX50_PAD_SD3_CMD__ESDHC3_CMD			0x1e4 \
	MX50_PAD_SD3_CLK__ESDHC3_CLK			0xd4

#define MX50_FEC_PINGRP1 \
	MX50_PAD_SSI_RXFS__FEC_MDC			0x80 \
	MX50_PAD_SSI_RXC__FEC_MDIO			0x80 \
	MX50_PAD_DISP_D0__FEC_TX_CLK			0x80 \
	MX50_PAD_DISP_D1__FEC_RX_ERR			0x80 \
	MX50_PAD_DISP_D2__FEC_RX_DV			0x80 \
	MX50_PAD_DISP_D3__FEC_RDATA_1			0x80 \
	MX50_PAD_DISP_D4__FEC_RDATA_0			0x80 \
	MX50_PAD_DISP_D5__FEC_TX_EN			0x80 \
	MX50_PAD_DISP_D6__FEC_TDATA_1			0x80 \
	MX50_PAD_DISP_D7__FEC_TDATA_0			0x80

#define MX50_FEC_PINGRP2 \
	MX50_PAD_I2C3_SCL__FEC_MDC			0x80 \
	MX50_PAD_I2C3_SDA__FEC_MDIO			0x80 \
	MX50_PAD_DISP_D0__FEC_TX_CLK			0x80 \
	MX50_PAD_DISP_D10__FEC_RX_DV			0x80 \
	MX50_PAD_DISP_D11__FEC_RDATA_1			0x80 \
	MX50_PAD_DISP_D12__FEC_RDATA_0			0x80 \
	MX50_PAD_DISP_D13__FEC_TX_EN			0x80 \
	MX50_PAD_DISP_D14__FEC_TDATA_1			0x80 \
	MX50_PAD_DISP_D15__FEC_TDATA_0			0x80

#define MX50_I2C1_PINGRP1 \
	MX50_PAD_I2C1_SDA__I2C1_SDA			0x12c \
	MX50_PAD_I2C1_SCL__I2C1_SCL			0x12c

#define MX50_I2C2_PINGRP1 \
	MX50_PAD_I2C2_SDA__I2C2_SDA			0x12c \
	MX50_PAD_I2C2_SCL__I2C2_SCL			0x12c

#define MX50_I2C3_PINGRP1 \
	MX50_PAD_I2C3_SDA__I2C3_SDA			0x12c \
	MX50_PAD_I2C3_SCL__I2C3_SCL			0x12c

#define MX50_OWIRE_PINGRP1 \
	MX50_PAD_OWIRE__OWIRE_LINE			0x84

#define MX50_UART1_PINGRP1 \
	MX50_PAD_UART1_TXD__UART1_TXD_MUX		0x1e4 \
	MX50_PAD_UART1_RXD__UART1_RXD_MUX		0x1e4 \
	MX50_PAD_UART1_RTS__UART1_RTS			0x1e4 \
	MX50_PAD_UART1_CTS__UART1_CTS			0x1e4

#define MX50_UART2_PINGRP1 \
	MX50_PAD_UART2_TXD__UART2_TXD_MUX		0x1e4 \
	MX50_PAD_UART2_RXD__UART2_RXD_MUX		0x1e4 \
	MX50_PAD_UART2_RTS__UART2_RTS			0x1e4 \
	MX50_PAD_UART2_CTS__UART2_CTS			0x1e4

#define MX50_UART2_PINGRP2 \
	MX50_PAD_I2C1_SCL__UART2_TXD_MUX		0x1e4 \
	MX50_PAD_I2C1_SDA__UART2_RXD_MUX		0x1e4 \
	MX50_PAD_I2C2_SDA__UART2_RTS			0x1e4 \
	MX50_PAD_I2C2_SCL__UART2_CTS			0x1e4

#define MX50_UART3_PINGRP1 \
	MX50_PAD_UART3_TXD__UART3_TXD_MUX		0x1e4 \
	MX50_PAD_UART3_RXD__UART3_RXD_MUX		0x1e4 \
	MX50_PAD_ECSPI1_SCLK__UART3_RTS			0x1e4 \
	MX50_PAD_ECSPI1_MOSI__UART3_CTS			0x1e4

#define MX50_UART4_PINGRP1 \
	MX50_PAD_UART4_TXD__UART4_TXD_MUX		0x1e4 \
	MX50_PAD_UART4_RXD__UART4_RXD_MUX		0x1e4 \
	MX50_PAD_ECSPI1_MISO__UART4_RTS			0x1e4 \
	MX50_PAD_ECSPI1_SS0__UART4_CTS			0x1e4

#define MX50_UART5_PINGRP1 \
	MX50_PAD_ECSPI2_MISO__UART5_TXD_MUX		0x1e4 \
	MX50_PAD_ECSPI2_SS0__UART5_RXD_MUX		0x1e4 \
	MX50_PAD_ECSPI2_SCLK__UART5_RTS			0x1e4 \
	MX50_PAD_ECSPI2_MOSI__UART5_CTS			0x1e4

#endif /* __DTS_IMX50_PINGRP_H */
