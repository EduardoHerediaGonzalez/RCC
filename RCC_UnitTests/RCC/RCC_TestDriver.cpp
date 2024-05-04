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
#include "ASSERT_def.h"
extern "C"
{
/* System headers written in C */

}

/* used headers */
extern "C"
{
/* Used headers written in C */
#include "ASSERT.c"
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

TEST_GROUP(RCC_vAHB1PeripheralReset)
{
	uint8 u8Peripheral;
	sint8 s8ExpectedResult;
	sint8 s8CurrentResult;
	uint32 u32ExpectedResult;
	uint32 u32CurrentResult;

    void setup()
    {
    	/* Code intended for Test Group initializing */
    }
    void teardown()
    {
    	/* Code intended for Test Group destruction */
    	ASSERT_vResetStaticVar();
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

TEST(RCC_vAHB1PeripheralReset, Test_9)
{
	u8Peripheral = (uint8)RCC_enTotalOfAHB1Peripherals;
	s8ExpectedResult = (sint8)ASSERT_nVALUE_OUT_OF_RANGE;

	RCC_vAHB1PeripheralReset(u8Peripheral);

	s8CurrentResult = (sint8)ASSERT_s_s8Error;

	SIGNED_BYTES_EQUAL(s8ExpectedResult, s8CurrentResult);
}

TEST(RCC_vAHB1PeripheralReset, Test_10)
{
	u8Peripheral = (uint8)RCC_enGPIOH_Peripheral;
	u32ExpectedResult = (uint32)(1<<(uint32)RCC_enGPIOH_Peripheral);

	RCC_vAHB1PeripheralReset(u8Peripheral);

	u32CurrentResult = (uint32)(RCC_s_pstRegisters->AHB1RSTR & (1<<(uint32)RCC_enGPIOH_Peripheral));

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}

TEST(RCC_vAHB1PeripheralReset, Test_11)
{
	u8Peripheral = (uint8)RCC_enTotalOfAHB2Peripherals;
	s8ExpectedResult = (sint8)ASSERT_nVALUE_OUT_OF_RANGE;

	RCC_vAHB2PeripheralReset(u8Peripheral);

	s8CurrentResult = (sint8)ASSERT_s_s8Error;

	SIGNED_BYTES_EQUAL(s8ExpectedResult, s8CurrentResult);
}

TEST(RCC_vAHB1PeripheralReset, Test_12)
{
	u8Peripheral = (uint8)RCC_enOTGFS_Peripheral;
	u32ExpectedResult = (uint32)(1<<(uint32)RCC_enOTGFS_Peripheral);

	RCC_vAHB2PeripheralReset(u8Peripheral);

	u32CurrentResult = (uint32)(RCC_s_pstRegisters->AHB2RSTR & (1<<(uint32)RCC_enOTGFS_Peripheral));

	UNSIGNED_LONGS_EQUAL(u32ExpectedResult, u32CurrentResult);
}
/* EOF */
