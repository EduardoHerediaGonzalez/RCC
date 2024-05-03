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
TEST_GROUP(TESTING_TEMPLATE)
{
    void setup()
    {
    	/* Code intended for Test Group initializing */
    }
    void teardown()
    {
    	/* Code intended for Test Group destruction */
    }
};

TEST(TESTING_TEMPLATE, TestId)
{
	FAIL("Write tests");
}

/* EOF */
