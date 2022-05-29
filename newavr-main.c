/*
 * File:   newavr-main.c
 * Author: peter
 *
 * Created on May 20, 2022, 11:03 PM
 */

#define ON 1
#define OFF 0

#include <avr/io.h>
#include "MDIO.h"

//unsigned char IsBuzz(unsigned char BTN_NO);

int main(void) {
    /* Replace with your application code */



    _delay_ms(500);
    PORTC |= (1 << LED1);
    _delay_ms(500);
    PORTD |= (1 << LED2);
    _delay_ms(500);
    //PORTC &= ~(1<<LED0);
    //_delay_ms(500);
    while (1) {
        LEDs_init();
        BTNs_init();
        //setLED(LED0,ON );
       setLED(LED2, IsPressed(BTN2));
       setLED(LED0, IsPressed(BTN0));
        //IsBuzz(BTN1);
        //PORTA |= (1<<BUZ);
       StartUp(BTN1);
    }
        
}



/*unsigned char IsBuzz(unsigned char BTN_NO){
    if(PIND &(1 << BTN1)){
        PORTA |= (1 << BUZ);
        _delay_ms(1000);
    }
    else{
        PORTA &= ~(1 << BUZ);
    }
}*/