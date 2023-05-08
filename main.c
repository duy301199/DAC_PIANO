#include <stdint.h>
#include "msp432p401r.h"

#include "Piano.h"
#include "Sound.h"
#include "SysTickInts.h"


void main(void){

    char note;
    Piano_Init();
    Sound_Init();

    while(1){


       note = Piano_In();
        if(note == 1)
          {
               SysTick->LOAD = (357); //C

           }
        else if(note == 2)
           {
               SysTick->LOAD = (318); //D
           }
        else if(note == 4)
          {
               SysTick->LOAD = (284); //E
           }
        else SysTick->LOAD = (0);

    }
}
