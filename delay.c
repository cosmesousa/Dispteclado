/*
 * File:   delay.c
 * Author: 20185074
 *
 * Created on 14 de Maio de 2021, 15:24
 */


#include "config.h"
#include <xc.h>
#define _XTAL_FREQ 4000000

void delay (unsigned int t)
{
    while( t )
    {
        --t;
        __delay_ms(1);
    }
}
