/**
 * Copyright © 2024 
 *
 * @file    RCC.c
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia González
 *        Diseñador           
 *
 * @brief   RCC 
 * @version No oficial
 *     
 */
/* system headers */
#include "STM32F401xx_def.h"

/* used headers */
#include "ASSERT_def.h"
#include "ASSERT.h"
#ifdef _SWDEVELOPMENT_
#include "VMEMORY.h"
#endif

/* own headers */
#include "RCC_cfg.h"
#include "RCC_def.h"
#include "RCC.h"

/*[EXPORTED]******************************************************************/

/* public_variables */

/*[INTERNAL]******************************************************************/

/* internal__pre-processor macros */
#define RCC_s_nTWO_ELEMENTS	(2)

/* internal__types */
typedef struct
{
	uint32 CR;
	uint32 PLLCFGR;
	uint32 CFGR;
	uint32 CIR;
	uint32 AHB1RSTR;
	uint32 AHB2RSTR;
	uint32 Padding0[RCC_s_nTWO_ELEMENTS];
	uint32 APB1RSTR;
	uint32 APB2RSTR;
	uint32 Padding1[RCC_s_nTWO_ELEMENTS];
	uint32 AHB1ENR;
	uint32 AHB2ENR;
	uint32 Padding2[RCC_s_nTWO_ELEMENTS];
	uint32 APB1ENR;
	uint32 APB2ENR;
	uint32 Padding3[RCC_s_nTWO_ELEMENTS];
	uint32 AHB1LPENR;
	uint32 AHB2LPENR;
	uint32 Padding4[RCC_s_nTWO_ELEMENTS];
	uint32 APB1LPENR;
	uint32 APB2LPENR;
	uint32 Padding5[RCC_s_nTWO_ELEMENTS];
	uint32 BDCR;
	uint32 CSR;
	uint32 Padding6[RCC_s_nTWO_ELEMENTS];
	uint32 SSCGR;
	uint32 PLLI2S;
	uint32 Padding7;
	uint32 DCKCFGR;
}volatile RCC_s_tstRegisters;

/* private__variables */
#if defined _UNITTESTS_ || defined _SWDEVELOPMENT_
static RCC_s_tstRegisters* RCC_s_pstPeriphReg =
						  (RCC_s_tstRegisters*)&VMEMORY_stRegister;
#else
static RCC_s_tstRegisters* RCC_s_pstPeriphReg =
						  (RCC_s_tstRegisters*)RCC_PERIPHERAL_nBASE_ADDRESS;
#endif

/* private__functions */

/* public_functions */
void RCC_vAHB1EnaPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB1_GPIOA_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB1ENR |= (1<<u8PeriphIndex);
}

void RCC_vAHB2EnaPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB2_OTGFS_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB2ENR |= (1<<u8PeriphIndex);
}

void RCC_vAPB1EnaPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB1_TIM2_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB1ENR |= (1<<u8PeriphIndex);
}

void RCC_vAPB2EnaPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB2_TIM1_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB2ENR |= (1<<u8PeriphIndex);
}

void RCC_vAHB1DisPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB1_GPIOA_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB1ENR &= ~(1<<u8PeriphIndex);
}

void RCC_vAHB2DisPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB2_OTGFS_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB2ENR &= ~(1<<u8PeriphIndex);
}

void RCC_vAPB1DisPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB1_TIM2_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB1ENR &= ~(1<<u8PeriphIndex);
}

void RCC_vAPB2DisPeriphClk(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB2_TIM1_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB2ENR &= ~(1<<u8PeriphIndex);
}

void RCC_vAHB1ResetPeriph(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB1_GPIOA_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB1RSTR |= (1<<u8PeriphIndex);
	RCC_s_pstPeriphReg->AHB1RSTR &= ~(1<<u8PeriphIndex);
}

void RCC_vAHB2ResetPeriph(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAHB2_OTGFS_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAHB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->AHB2RSTR |= (1<<u8PeriphIndex);
	RCC_s_pstPeriphReg->AHB2RSTR &= ~(1<<u8PeriphIndex);
}

void RCC_vAPB1ResetPeriph(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB1_TIM2_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB1Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB1RSTR |= (1<<u8PeriphIndex);
	RCC_s_pstPeriphReg->APB1RSTR &= ~(1<<u8PeriphIndex);
}

void RCC_vAPB2ResetPeriph(uint8 u8PeriphIndex)
{
	ASSERT((u8PeriphIndex >= (uint8)RCC_enAPB2_TIM1_Peripheral),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);
	ASSERT((u8PeriphIndex < (uint8)RCC_enTotalAPB2Peripherals),
		   (sint8)ASSERT_nVALUE_OUT_OF_RANGE);

	RCC_s_pstPeriphReg->APB2RSTR |= (1<<u8PeriphIndex);
	RCC_s_pstPeriphReg->APB2RSTR &= ~(1<<u8PeriphIndex);
}

/* EOF */
