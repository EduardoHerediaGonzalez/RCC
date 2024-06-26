/**
 * Copyright © 2024 
 *
 * @file    RCC.c
 * @note
 *        ______________      
 *        Eduardo	          
 *        Heredia Gonzalez    
 *        Diseñador           
 *
 * @brief   RCC 
 * @version No oficial
 *     
 */
 
/* system headers */
#include "STM32F401xx_def.h"
#include "PLATFORM_TYPES_def.h"

/* used headers */
#if defined _UNITTESTS_ || defined _SWDEVELOPMENT_
#include "VIRTUALMEM.h"
#endif

/* own headers */
#include "RCC_cfg.h"
#include "RCC_def.h"
#include "RCC.h"

/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */
#define RCC_s_nTWO_ELEMENTS				(2U)
#define RCC_s_nCR_RESET_VALUE			(0x00000081U)
#define RCC_s_nPLLCRGR_RESET_VALUE		(0x24003010U)
#define RCC_s_nAHB1LPENR_RESET_VALUE	(0x0061900FU)
#define RCC_s_nAHB2LPENR_RESET_VALUE	(0x00000080U)
#define RCC_s_nAPB1LPENR_RESET_VALUE	(0x10E2C80FU)
#define RCC_s_nAPB2LPENR_RESET_VALUE	(0x00077930U)
#define RCC_s_nCSR_RESET_VALUE			(0x0E000000U)
#define RCC_s_nPLLI2SCFGR_RESET_VALUE	(0x24003000U)

/* internal__types */
typedef struct RCC_Registers
{
	uint32 CR;
	uint32 PLLCFGR;
	uint32 CFGR;
	uint32 CIR;
	uint32 AHB1RSTR;
	uint32 AHB2RSTR;
	uint32 au32Padding0[RCC_s_nTWO_ELEMENTS];
	uint32 APB1RSTR;
	uint32 APB2RSTR;
	uint32 au32Padding1[RCC_s_nTWO_ELEMENTS];
	uint32 AHB1ENR;
	uint32 AHB2ENR;
	uint32 au32Padding2[RCC_s_nTWO_ELEMENTS];
	uint32 APB1ENR;
	uint32 APB2ENR;
	uint32 au32Padding3[RCC_s_nTWO_ELEMENTS];
	uint32 AHB1LPENR;
	uint32 AHB2LPENR;
	uint32 au32Padding4[RCC_s_nTWO_ELEMENTS];
	uint32 APB1LPENR;
	uint32 APB2LPENR;
	uint32 au32Padding5[RCC_s_nTWO_ELEMENTS];
	uint32 BDCR;
	uint32 CSR;
	uint32 au32Padding6[RCC_s_nTWO_ELEMENTS];
	uint32 SSCGR;
	uint32 PLLI2SCFGR;
	uint32 u32Padding0;
	uint32 DCKCFGR;
}RCC_s_tstRegisters;

/* private__variables */
#if defined _UNITTESTS_ || defined _SWDEVELOPMENT_
RCC_s_tstRegisters* RCC_s_pstRegisters = (RCC_s_tstRegisters*)&VIRTUALMEM_stRegisters;
#else
static RCC_s_tstRegisters* RCC_s_pstRegisters = (RCC_s_tstRegisters*)RCC_PERIPHERAL_nBASE_ADDRESS;
#endif

/* private__functions */

/* public_functions */


/* EOF */
