/*
 * Piano.c
 *
 *  Created on: Oct 11, 2022
 *      Author: duy301199
 */
#include <stdint.h>
#include "msp432p401r.h"

void Piano_Init(void){
        P5SEL0 &= ~0x07;
        P5SEL1 &= ~0x07;
        P5DIR  &=  0x07;

}

char Piano_In(void) {
    char input = (P5IN&0x07);
      return input;
}

