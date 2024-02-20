/**
 * Copyright © 2024 
 *
 * @file    RCC.h
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

#ifndef RCC_H_
#define RCC_H_

/* system headers */
#include "PLATFORM_TYPES_def.h"

/* own headers */

/*****************************************************************************/
/* helper macros */

/* exported variables */

/* exported functions */
/**
 * @Fn - RCC_vAHB1EnaPeriphClk
 *
 * @Brief - Interface that enable the clock of the peripheral connected to the
 *          AHB1 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAHB1_GPIOA_Peripheral,
 * 								  RCC_enTotalAHB1Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAHB1EnaPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAHB2EnaPeriphClk
 *
 * @Brief - Interface that enable the clock of the peripheral connected to the
 *          AHB2 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAHB2_OTGFS_Peripheral,
 * 								  RCC_enTotalAHB2Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAHB2EnaPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAPB1EnaPeriphClk
 *
 * @Brief - Interface that enable the clock of the peripheral connected to the
 *          APB1 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAPB1_TIM2_Peripheral,
 * 								  RCC_enTotalAPB1Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAPB1EnaPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAPB2EnaPeriphClk
 *
 * @Brief - Interface that enable the clock of the peripheral connected to the
 *          APB2 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAPB2_TIM1_Peripheral,
 * 								  RCC_enTotalAPB2Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAPB2EnaPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAHB1DisPeriphClk
 *
 * @Brief - Interface that disable the clock of the peripheral connected to the
 *          AHB1 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAHB1_GPIOA_Peripheral,
 * 								  RCC_enTotalAHB1Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAHB1DisPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAHB2DisPeriphClk
 *
 * @Brief - Interface that disable the clock of the peripheral connected to the
 *          AHB2 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAHB2_OTGFS_Peripheral,
 * 								  RCC_enTotalAHB2Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAHB2DisPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAPB1DisPeriphClk
 *
 * @Brief - Interface that disable the clock of the peripheral connected to the
 *          APB1 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAPB1_TIM2_Peripheral,
 * 								  RCC_enTotalAPB1Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAPB1DisPeriphClk(uint8 u8PeriphIndex);

/**
 * @Fn - RCC_vAPB2DisPeriphClk
 *
 * @Brief - Interface that disable the clock of the peripheral connected to the
 *          APB2 bus.
 *
 * @Param[in] - u8PeriphIndex = {[RCC_enAPB2_TIM1_Peripheral,
 * 								  RCC_enTotalAPB2Peripherals)}.
 *
 * @Return - None
 *
 */
extern void RCC_vAPB2DisPeriphClk(uint8 u8PeriphIndex);

#endif /* RCC_H_ */
