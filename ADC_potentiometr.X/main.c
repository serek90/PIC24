/*
 * File:   main.c
 * Author: PC
 *
 * Created on January 17, 2020, 4:10 PM
 */


#include "xc.h"
#include "adc.h"



int main(void) {
    
    int a;
    int potentiometer;
    //initADC();
    
    TRISCbits.TRISC5 = 0;
    TRISCbits.TRISC6 = 0;
    TRISCbits.TRISC7 = 0;
    
    
    //Enable and configure the ADC so it can sample the potentiometer.
    ADC_SetConfiguration(ADC_CONFIGURATION_DEFAULT);
    ADC_ChannelEnable(ADC_CHANNEL_POTENTIOMETER);
 
    
    while(1)
    {
       potentiometer = ADC_Read10bit(ADC_CHANNEL_POTENTIOMETER);
      // potentiometer >>= 8;
       
       LATCbits.LATC7 = 1;
       
       if(potentiometer > 100) 
       {
           LATCbits.LATC5 = 1;
           LATCbits.LATC6 = 0;
       }
       
       else 
       {
           LATCbits.LATC5 = 0;
           LATCbits.LATC6 = 1;
       }       
    }
    return 0;
}
