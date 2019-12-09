/*
 * File:   main.c
 * Author: PC
 *
 * Created on December 9, 2019, 7:15 PM
 */


#include <xc.h>
#include "leds.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

#define DELAY 1600




int main(void) 
{
    T1CON = 0x8030; //0b1000000000110000;
    LED_Enable(LED_LD3_BLUE);
    LED_Enable(LED_LD3_GREEN);
    LED_Enable(LED_LD3_RED);
    

    
    while(1)
    {
        TMR1 = 0;
        LED_Off(LED_LD3_GREEN);
        LED_On(LED_LD3_BLUE);
        while(TMR1 < DELAY)
        {
            
        }
        
        TMR1 = 0;
        LED_Off(LED_LD3_BLUE);
        LED_On(LED_LD3_GREEN);
        while(TMR1 < DELAY)
        {
            
        }
        
        
    }
    
        
    return 0;
}
