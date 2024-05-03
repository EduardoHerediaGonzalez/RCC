/**
 * @file    RCC_TestDriver.cpp
 *
 * @brief   Código de ensayos para el componente RCC.
 *
 * @note
 *        ______________
 *        Eduardo
 *        Heredia Gonzalez
 *        Encargado de
 *	      ensayos
 *
 * @version
 * - Eduardo Heredia Gonzalez -- 05/04/2024 -- Actual
 * 	- Versión inicial.
 *
 */


/* system headers */
#include "CppUTest/TestHarness.h"
extern "C"
{
/* System headers written in C */

}

/* used headers */
extern "C"
{
/* Used headers written in C */
#include "VIRTUALMEM.c"
}

/******************** Start of Code Under Test ********************/
extern "C"
{
#include "RCC.c"
}
/******************** End of Code Under Test ********************/


/*[EXPORTED]****************************************************************************/

/* public_variables */

/*[INTERNAL]****************************************************************************/

/* internal__pre-processor macros */


/* internal__types */


/* private__variables */


/* private__functions */


/* public_functions */
TEST_GROUP(RCC_vInit)
{
	uint32 u32ExpectedResult;
	uint32 u32CurrentResult;

    void setup()
    {
    	/* Code intended for Test Group initializing */
    }
    void teardown()
    {
    	/* Code intended for Test Group destruction */
    }
};

TEST(RCC_vInit, Test_1)
{
	u32ExpectedResult = (uint32)RCC_s_nCR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->CR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_2)
{
	u32ExpectedResult = (uint32)RCC_s_nPLLCRGR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->PLLCFGR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_3)
{
	u32ExpectedResult = (uint32)RCC_s_nAHB1LPENR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->AHB1LPENR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_4)
{
	u32ExpectedResult = (uint32)RCC_s_nAHB2LPENR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->AHB2LPENR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_5)
{
	u32ExpectedResult = (uint32)RCC_s_nAPB1LPENR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->APB1LPENR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_6)
{
	u32ExpectedResult = (uint32)RCC_s_nAPB2LPENR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->APB2LPENR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_7)
{
	u32ExpectedResult = (uint32)RCC_s_nCSR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->CSR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vInit, Test_8)
{
	u32ExpectedResult = (uint32)RCC_s_nPLLI2SCFGR_RESET_VALUE;

	RCC_vInit();

	u32CurrentResult = (uint32)RCC_s_pstRegisters->PLLI2SCFGR;

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

/* EOF */
