/**
 * Copyright © 2024
 *
 * @file    VMEMORY_def.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia Gonzalez
 *        Diseñador           
 *
 * @brief   VMEMORY_def 
 * @version No oficial
 *     
 */

#ifndef VMEMORY_def_H_
#define VMEMORY_def_H_

/* system headers */

/* exported macros */
#define VMEMORY_nTWO_ELEMENTS	(2U)

/* exported types */
typedef struct
{
	uint32 CR;
	uint32 PLLCFGR;
	uint32 CFGR;
	uint32 CIR;
	uint32 AHB1RSTR;
	uint32 AHB2RSTR;
	uint32 Padding0[VMEMORY_nTWO_ELEMENTS];
	uint32 APB1RSTR;
	uint32 APB2RSTR;
	uint32 Padding1[VMEMORY_nTWO_ELEMENTS];
	uint32 AHB1ENR;
	uint32 AHB2ENR;
	uint32 Padding2[VMEMORY_nTWO_ELEMENTS];
	uint32 APB1ENR;
	uint32 APB2ENR;
	uint32 Padding3[VMEMORY_nTWO_ELEMENTS];
	uint32 AHB1LPENR;
	uint32 AHB2LPENR;
	uint32 Padding4[VMEMORY_nTWO_ELEMENTS];
	uint32 APB1LPENR;
	uint32 APB2LPENR;
	uint32 Padding5[VMEMORY_nTWO_ELEMENTS];
	uint32 BDCR;
	uint32 CSR;
	uint32 Padding6[VMEMORY_nTWO_ELEMENTS];
	uint32 SSCGR;
	uint32 PLLI2S;
	uint32 Padding7;
	uint32 DCKCFGR;
}VMEMORY_tstPeripheralRegisters;

#endif /* VMEMORY_def_H_ */
