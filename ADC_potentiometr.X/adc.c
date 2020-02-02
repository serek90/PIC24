#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

//#include "adc.h"

/***************************************************************
 *Inicjalizacja ADC
 */
void intitADC( void )
{
    //pins
    ANSCbits.ANSC0 =0;   //RC0_POT

    AD1CON1 = 0;
    AD1CSSL = 0;
    AD1CON2 = 0;
    
    

    
}

/***************************************************************
 * Pobiera numer kana?u i zwraca otrzymany wynik konwersji
 */

int readADC( int ch)
{
    
}
