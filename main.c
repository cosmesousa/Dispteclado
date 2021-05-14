/*
 * File:   main.c
 * Author: 20185074
 *
 * Created on 14 de Maio de 2021, 15:19
 */


#include "config.h"
#include <xc.h>
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main(void) 
{
    char str[] = "Tecla:         ";
    dispLCD_init();
    teclado_init();
    
    

    while(1)
    {
        
        str[9] = teclado();
        
        if(str[9] == 0)
           str[9] = ' ';
        
        dispLCD(0,0, " COSME SOUSA " );
        dispLCD(1,0,str);
    }
}
