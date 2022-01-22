
#include <xc.h>
#include "adc.h"
#include <stdint.h>
#include <stdbool.h>

/*********************************************
*Initialization ADC***************************
 ********************************************/
void initADC(void)
{
    AD1CON1bits.ADON = 1;
    

}

/**********************************************
 *function to read from ADC********************
 *********************************************/
int readADC(int ch)
{
    
}