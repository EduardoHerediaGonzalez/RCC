/**
 * Copyright © 2024 
 *
 * @file    RCC_def.h
 * @note
 *        ______________      
 *        Eduardo
 *        Heredia González
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
typedef enum
{
	RCC_enAHB1_GPIOA_Peripheral = 0,
	RCC_enAHB1_GPIOB_Peripheral,
	RCC_enAHB1_GPIOC_Peripheral,
	RCC_enAHB1_GPIOD_Peripheral,
	RCC_enAHB1_GPIOE_Peripheral,
	RCC_enAHB1_GPIOH_Peripheral = 7,
	RCC_enAHB1_CRC_Peripheral = 12,
	RCC_enAHB1_DMA1_Peripheral = 21,
	RCC_enAHB1_DMA2_Peripheral = 22,
	RCC_enTotalAHB1Peripherals
}RCC_tenAHB1Peripherals;

typedef enum
{
	RCC_enAHB2_OTGFS_Peripheral = 7,
	RCC_enTotalAHB2Peripherals
}RCC_tenAHB2Peripherals;

typedef enum
{
	RCC_enAPB1_TIM2_Peripheral = 0,
	RCC_enAPB1_TIM3_Peripheral,
	RCC_enAPB1_TIM4_Peripheral,
	RCC_enAPB1_TIM5_Peripheral,
	RCC_enAPB1_WWDG_Peripheral = 11,
	RCC_enAPB1_SPI2_Peripheral = 14,
	RCC_enAPB1_SPI3_Peripheral,
	RCC_enAPB1_USART2_Peripheral = 17,
	RCC_enAPB1_I2C1_Peripheral = 21,
	RCC_enAPB1_I2C2_Peripheral,
	RCC_enAPB1_I2C3_Peripheral,
	RCC_enAPB1_PWR_Peripheral = 28,
	RCC_enTotalAPB1Peripherals
}RCC_tenAPB1Peripherals;

typedef enum
{
	RCC_enAPB2_TIM1_Peripheral = 0,
	RCC_enAPB2_USART1_Peripheral = 4,
	RCC_enAPB2_USART6_Peripheral,
	RCC_enAPB2_ADC1_Peripheral = 8,
	RCC_enAPB2_SDIO_Peripheral = 11,
	RCC_enAPB2_SPI1_Peripheral,
	RCC_enAPB2_SPI4_Peripheral,
	RCC_enAPB2_SYSCFG_Peripheral,
	RCC_enAPB2_TIM9_Peripheral = 16,
	RCC_enAPB2_TIM10_Peripheral,
	RCC_enAPB2_TIM11_Peripheral,
	RCC_enTotalAPB2Peripherals
}RCC_tenAPB2Peripherals;

#endif /* RCC_def_H_ */
