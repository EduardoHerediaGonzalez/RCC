/**
 * Copyright © 2024 
 *
 * @file    VIRTUALMEM_def.h
 * @note
 *        ______________      
 *        Eduardo	          
 *        Heredia Gonzalez    
 *        Diseñador           
 *
 * @brief   VIRTUALMEM_def 
 * @version No oficial
 *     
 */

#ifndef VIRTUALMEM_def_H_
#define VIRTUALMEM_def_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* exported macros */

/* exported types */
typedef struct Registers
{
	uint32 CR;
	uint32 PLLCFGR;
	uint32 CFGR;
	uint32 CIR;
	uint32 AHB1RSTR;
	uint32 AHB2RSTR;
	uint32 au32Padding0[2];
	uint32 APB1RSTR;
	uint32 APB2RSTR;
	uint32 au32Padding1[2];
	uint32 AHB1ENR;
	uint32 AHB2ENR;
	uint32 au32Padding2[2];
	uint32 APB1ENR;
	uint32 APB2ENR;
	uint32 au32Padding3[2];
	uint32 AHB1LPENR;
	uint32 AHB2LPENR;
	uint32 au32Padding4[2];
	uint32 APB1LPENR;
	uint32 APB2LPENR;
	uint32 au32Padding5[2];
	uint32 BDCR;
	uint32 CSR;
	uint32 au32Padding6[2];
	uint32 SSCGR;
	uint32 PLLI2SCFGR;
	uint32 u32Padding0;
	uint32 DCKCFGR;
}VIRTUALMEM_tstRegisters;

#endif /* VIRTUALMEM_def_H_ */
