

#include <p24fj128ga204.h>
#include "interrupts.h"

volatile uint8_t add = 0;

void Timer1InterruptEnable(void)
{
     _T1IP = 4; // Ustawienie priorytetu przerwania od T1, 4 to domy?lny
    //_IP = 0;
    PR1 = PERIOD-1;
    TMR1 = 0;
    T1CON = 0x8020;
    
    _T1IF = 0;
    _T1IE = 1;   
}

void _ISR _T1Interrupt(void)
{
   
    if(add++ >= 10)
    add = 0;
       
     _T1IF = 0; 
}