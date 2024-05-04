/**
 * Copyright © 2024 
 *
 * @file    RCC_def.h
 * @note
 *        ______________      
 *        Eduardo	          
 *        Heredia Gonzalez    
 *        Diseñador           
 *
 * @brief   RCC_def 
 * @version No oficial
 *     
 */

#ifndef RCC_def_H_
#define RCC_def_H_

/* system headers */

/* exported macros */

/* exported types */
typedef enum RCC_AHB1Peripherals
{
	RCC_enGPIOA_Peripheral = 0,
	RCC_enGPIOB_Peripheral,
	RCC_enGPIOC_Peripheral,
	RCC_enGPIOD_Peripheral,
	RCC_enGPIOE_Peripheral,
	RCC_enGPIOH_Peripheral = 7,
	RCC_enCRC_Peripheral = 12,
	RCC_enDMA1_Peripheral = 21,
	RCC_enDMA2_Peripheral,
	RCC_enTotalOfAHB1Peripherals
}RCC_tenAHB1Peripherals;

#endif /* RCC_def_H_ */
