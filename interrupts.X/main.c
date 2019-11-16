/*
 * File:   main.c
 * Author: PC
 *
 * Created on November 1, 2019, 6:59 PM
 */


#include <xc.h>
#include "interrupts.h"
#include "leds.h"
#include "type.h"



int main(void) {

    
    Timer1InterruptEnable();

    LED_Enable(LED_LD3_BLUE );
    while(1)
    {
      if(add >= 5) LED_On(LED_LD3_BLUE);
      else 
          LED_Off(LED_LD3_BLUE);
    }
    
    return 0;
}



