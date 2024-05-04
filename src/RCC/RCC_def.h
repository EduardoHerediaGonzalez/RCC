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

typedef enum RCC_AHB2Peripherals
{
	RCC_enOTGFS_Peripheral = 7,
	RCC_enTotalOfAHB2Peripherals
}RCC_tenAHB2Peripherals;

typedef enum RCC_APB1Peripherals
{
	RCC_enTIM2_Peripheral = 0,
	RCC_enTIM3_Peripheral,
	RCC_enTIM4_Peripheral,
	RCC_enTIM5_Peripheral,
	RCC_enWWDG_Peripheral = 11,
	RCC_enSPI2_Peripheral = 14,
	RCC_enSPI3_Peripheral,
	RCC_enUSART2_Peripheral = 17,
	RCC_enI2C1_Peripheral = 21,
	RCC_enI2C2_Peripheral,
	RCC_enI2C3_Peripheral,
	RCC_enPWR_Peripheral = 28,
	RCC_enTotalOfAPB1Peripherals
}RCC_tenAPB1Peripherals;

typedef enum RCC_APB2Peripherals
{
	RCC_enTIM1_Peripheral = 0,
	RCC_enUSART1_Peripheral = 4,
	RCC_enUSART6_Peripheral,
	RCC_enADC1_Peripheral = 8,
	RCC_enSDIO_Peripheral = 11,
	RCC_enSPI1_Peripheral,
	RCC_enSPI4_Peripheral,
	RCC_enSYSCFG_Peripheral,
	RCC_enTIM9_Peripheral = 16,
	RCC_enTIM10_Peripheral,
	RCC_enTIM11_Peripheral,
	RCC_enTotalOfAPB2Peripherals
}RCC_tenAPB2Peripherals;

#endif /* RCC_def_H_ */
