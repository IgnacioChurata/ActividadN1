#include "libADC.h"
#include "MKL2574"
void ADC_Init()
{
    SIM->SCGC6 |= SIM_SCGC6_ADC0_MASK;
    ADC0->CFG1 = ADC_CFG1_MODE(3) | ADC_CFG1_ADICLK(1) | ADC_CFG1_ADIV(0);
}
int ADC_Convertion(int channel);
{
    SIM->SCGC6 |= SIM_SCGC6_ADC0_MASK;
    ADC0->SC1[0] = ADC_SC1_ADCH(channel);
    float val = ADC0_R[0];
    float val2 = 3.3 * val / 1023.0;
    return val2;
}