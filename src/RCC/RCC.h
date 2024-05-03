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

#endif /* RCC_H_ */
