/**
 * Copyright © 2024 
 *
 * @file    RCC.h
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

#ifndef RCC_H_
#define RCC_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* own headers */

/*****************************************************************************/
/* helper macros */

/* exported variables */

/* exported functions */
/*
 * @Fn - RCC_vInit
 *
 * @Brief - Interface that initialize some registers with a reset value specified
 * 			in the reference manual of the microcontroller.
 *
 * @Param - None
 *
 * @return - None
 */
extern void RCC_vInit(void);

/*
 * @Fn - RCC_vAHB1PeripheralReset
 *
 * @Brief - Interface that reset the peripheral "u8Peripheral" connected to the
 * 			bus AHB1.
 *
 * @Param[in] - u8Peripheral = {[RCC_enGPIOA_Peripheral, RCC_enTotalOfAHB1Peripherals)}
 *
 * @return - None
 */
extern void RCC_vAHB1PeripheralReset(uint8 u8Peripheral);

/*
 * @Fn - RCC_vAHB2PeripheralReset
 *
 * @Brief - Interface that reset the peripheral "u8Peripheral" connected to the
 * 			bus AHB2.
 *
 * @Param[in] - u8Peripheral = {[RCC_enOTGFS_Peripheral, RCC_enTotalOfAHB2Peripherals)}
 *
 * @return - None
 */
extern void RCC_vAHB2PeripheralReset(uint8 u8Peripheral);

/*
 * @Fn - RCC_vAPB1PeripheralReset
 *
 * @Brief - Interface that reset the peripheral "u8Peripheral" connected to the
 * 			bus APB1.
 *
 * @Param[in] - u8Peripheral = {[RCC_enTIM2_Peripheral, RCC_enTotalOfAPB1Peripherals)}
 *
 * @return - None
 */
extern void RCC_vAPB1PeripheralReset(uint8 u8Peripheral);

/*
 * @Fn - RCC_vAPB2PeripheralReset
 *
 * @Brief - Interface that reset the peripheral "u8Peripheral" connected to the
 * 			bus APB2.
 *
 * @Param[in] - u8Peripheral = {[RCC_enTIM1_Peripheral, RCC_enTotalOfAPB2Peripherals)}
 *
 * @return - None
 */
extern void RCC_vAPB2PeripheralReset(uint8 u8Peripheral);

#endif /* RCC_H_ */
