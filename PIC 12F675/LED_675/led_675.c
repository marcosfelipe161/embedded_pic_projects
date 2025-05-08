/* 
 * File:   led_675.c
 * Author: felipe
 *
 * Created on May 8, 2025, 11:54 AM
 */
#include "config.h"
#include <stdio.h>
#include <stdlib.h>

#define _XTAL_FREQ 4000000
/*
 * 
 */
int main(int argc, char** argv) {

    ANSEL  = 0x00;
    CMCON  = 0x07;
    TRISIO = 0x00;
    GPIO   = 0X00;
    
    while(1){
        
        GPIO0 = 1;
        GPIO1 = 0;
        
        __delay_ms(1000);
        
        GPIO0 = 0;
        GPIO1 = 1;
        
        __delay_ms(1000);
    }
    return (EXIT_SUCCESS);
}

