/*
 * Copyright (c) 2021, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef CORTEX_X2_H
#define CORTEX_X2_H

#define CORTEX_X2_MIDR						U(0x410FD480)

/*******************************************************************************
 * CPU Extended Control register specific definitions
 ******************************************************************************/
#define CORTEX_X2_CPUECTLR_EL1					S3_0_C15_C1_4

/*******************************************************************************
 * CPU Extended Control register 2 specific definitions
 ******************************************************************************/
#define CORTEX_X2_CPUECTLR2_EL1					S3_0_C15_C1_5

#define CORTEX_X2_CPUECTLR2_EL1_PF_MODE_SHIFT			U(11)
#define CORTEX_X2_CPUECTLR2_EL1_PF_MODE_WIDTH			U(4)
#define CORTEX_X2_CPUECTLR2_EL1_PF_MODE_CNSRV			ULL(0x9)

/*******************************************************************************
 * CPU Power Control register specific definitions
 ******************************************************************************/
#define CORTEX_X2_CPUPWRCTLR_EL1				S3_0_C15_C2_7
#define CORTEX_X2_CPUPWRCTLR_EL1_CORE_PWRDN_BIT			U(1)

/*******************************************************************************
 * CPU Auxiliary Control Register 5 definitions
 ******************************************************************************/
#define CORTEX_X2_CPUACTLR5_EL1					S3_0_C15_C8_0

#endif /* CORTEX_X2_H */
