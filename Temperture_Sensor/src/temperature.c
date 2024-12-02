#include "adc.h"
#include "temperature.h"

static int Temperature_Configured=0;

void Temperature_Init(adc_config_t*config)
{
    adc_init(config);
    Temperature_Configured=1;
}
int Temperature_GetRead()
{
    if(!Temperature_Configured)
    {
        return -1; //Error Not Configured
    }
    return adc_read(); //Mock this function to return the temperature value
}