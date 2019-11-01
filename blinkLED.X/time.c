#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

/* Definitions *****************************************************/
#define STOP_TIMER_IN_IDLE_MODE     0x2000
#define TIMER_SOURCE_INTERNAL       0x0000
#define TIMER_SOURCE_EXTERNAL       0x0002
#define TIMER_ON                    0x8000  //0b1000000000000000 TON
#define GATED_TIME_DISABLED         0x0000
#define TIMER_16BIT_MODE            0x0000

#define TIMER_PRESCALER_1           0x0000
#define TIMER_PRESCALER_8           0x0010
#define TIMER_PRESCALER_64          0x0020
#define TIMER_PRESCALER_256         0x0030


void TIMER1_Init(void)
{
    T1CON = (TIMER_ON | TIMER_PRESCALER_256); 
    
}
void delay_1ms(int milisec)
{   
    int i = 0;
    
    for( i = 0; i < milisec; i++)
    {   TMR1 = 0;
        while(TMR1 < 8)
        {    
        } 
    }
}

void delay_1s(int sec)
{
    int i = 0;
    
    for( i = 0; i < sec; i++)
    {   TMR1 = 0;
        while(TMR1 < 8000)
        {    
        } 
    }    
}
