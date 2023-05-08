/*
 * Sound.c
 *
 *  Created on: Oct 12, 2022
 *      Author: duy301199
 */
#include <stdint.h>
#include "DAC.h"
#include "msp432p401r.h"
#include "Sound.h"
#include "SysTickInts.h"
const uint8_t Sinewave[32] = { 8,9,11,12,13,14,14,15,15,15,14,
                               14,13,12,11,9,8,7,5,4,3,2,
                               2,1,1,1,2,2,3,4,5,7};
extern uint32_t Index;
uint32_t Index = 0;

void Sound_Init() {

    DAC_Init();
    SysTick_Init(1);

}

void Sound_Play(void){
//


   DAC_Out(Sinewave[Index]);
   /*
   uint32_t input = P5IN&0x07;
   if (input != 0x00) {
       Index = (Index + 1)& 0x1F;
      return;
   }
   */
  Index++;
  if(Index > 31) {
     Index = 0;
  }
}


