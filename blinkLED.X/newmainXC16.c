/*
 * File:   newmainXC16.c
 * Author: PC
 *
 * Created on October 30, 2019, 6:53 PM
 */

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

#include "leds.h"

int main(void) {
    
TRISAbits.TRISA9 = OUTPUT;
LATAbits.LATA9 = LED_ON;
TRISCbits.TRISC6 = OUTPUT;
LATCbits.LATC6 = LED_ON;

    return 0;
}
