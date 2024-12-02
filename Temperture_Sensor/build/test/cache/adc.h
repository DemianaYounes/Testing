





typedef struct

{

    int Channel;

    int ClockRate;

    int SampleRate;

}adc_config_t;



void adc_init(adc_config_t*config);

int adc_read(void);
