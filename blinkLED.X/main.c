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
#include "timer_1ms.h"
#include "leds.h"
#include "time.h"



int main(void) 
{
    LED_Enable(LED_LD3_BLUE );
    LED_Enable(LED_LD3_RED);
    
    TIMER1_Init();

    while(1)
    {

       LED_Off(LED_LD3_RED);
       delay_1ms(5000);

       LED_On(LED_LD3_RED);
       delay_1ms(5000);
     
    }
    
    return 0;
}

