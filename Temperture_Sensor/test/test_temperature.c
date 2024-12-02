#ifdef TEST

#include "unity.h"
#include "mock_adc.h"
#include "temperature.h"


//Mocking Return Value
//Expecting Arguments
//Ignoring Arguments
//Arguments Passed by Reference 
//Expecting a Pointer Value
//Arguments Return by Reference 
//Ignoring Function Calls

void setUp(void)
{
}

void tearDown(void)
{
}

void test_temperature_GetReadingNotConfigured(void)
{
    TEST_ASSERT_EQUAL(-1,Temperature_GetRead());
}

/*void test_temperature_Init(void)
{
    adc_config_t expected_config={.Channel=3,
                                  .ClockRate=4000000,
                                  .SampleRate=1000
                                 };
    adc_init_Expect(&expected_config); //Expect a specific structure
    Temperature_Init(&expected_config); //Call the function to be test
}*/

void test_temperature_Init(void)
{
    adc_config_t expected_config={.Channel=3,
                                  .ClockRate=4000000,
                                  .SampleRate=1000
                                 };
    adc_init_Expect(NULL); //Expect a specific structure
    adc_init_IgnoreArg_config(); //Ignore the config argument
    Temperature_Init(&expected_config); //Call the function to be test
}

void test_temperature_GetReading(void)
{
    adc_read_ExpectAndReturn(25);//Expect adc read to return 25
    int Temp=Temperature_GetRead(); //Should call adc_read internally
    TEST_ASSERT_EQUAL(25,Temp); //Check that the return value is 25
}
#endif // TEST
