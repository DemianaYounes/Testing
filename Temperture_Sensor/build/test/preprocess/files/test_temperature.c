#include "src/temperature.h"
#include "build/test/mocks/mock_adc.h"
#include "Install/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_temperature_GetReadingNotConfigured(void)

{

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((Temperature_GetRead())), (

   ((void *)0)

   ), (UNITY_UINT)(26), UNITY_DISPLAY_STYLE_INT);

}

void test_temperature_Init(void)

{

    adc_config_t expected_config={.Channel=3,

                                  .ClockRate=4000000,

                                  .SampleRate=1000

                                 };

    adc_init_CMockExpect(45, 

   ((void *)0)

   );

    adc_init_CMockIgnoreArg_config(46);

    Temperature_Init(&expected_config);

}



void test_temperature_GetReading(void)

{

    adc_read_CMockExpectAndReturn(52, 25);

    int Temp=Temperature_GetRead();

    UnityAssertEqualNumber((UNITY_INT)((25)), (UNITY_INT)((Temp)), (

   ((void *)0)

   ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_INT);

}
