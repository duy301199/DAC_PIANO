/*
 * DAC.c
 *
 *  Created on: Oct 11, 2022
 *      Author: duy301199
 */

#include <stdint.h>

#include "Sound.h"
#include "msp432p401r.h"

void DAC_Init(void) {

    P4SEL0 &= ~0x0F;
    P4SEL1 &= ~0x0F;
    P4DIR  |=  0x0F;
    //P4OUT  &= ~0x0F;

}

void DAC_Out( uint32_t data ){

    P4OUT = data;
    //data = (data+1)&0x1F;
}

