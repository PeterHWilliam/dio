/* 
 * File:   MDIO.c
 * Author: peter
 *
 * Created on May 28, 2022, 10:00 PM
 */
#define F_CPU 16000000UL
#include <avr/io.h>
#include "MDIO.h"
#include <util/delay.h>

/*
 * 
 */
void LEDs_init(void) {
    DDRC |= (1 << LED0_DIR); //data dirction regestry for pinc2
    DDRC |= (1 << LED1_DIR); //data dirction regestry for pinc7
    DDRD |= (1 << LED2_DIR); //data dirction regestry for pinD3
}

void BTNs_init(void) {
    DDRB &= ~(1 << BTN0_DIR); // pinb0 as input
    DDRD &= ~(1 << BTN1_DIR); //pinD2 as input
    DDRD &= ~(1 << BTN2_DIR);
}

unsigned char IsPressed(unsigned char BTN_NO) 
{
    if (BTN_NO == BTN0){
           
        return (PINB & (1 << BTN0))? ON:OFF ;
        }
    else if (BTN_NO == BTN1){
      
        return (PIND & (1 << BTN1))? ON:OFF ;              

      }   
    else if (BTN_NO == BTN2){
        
          return (PIND & (1 << BTN2))? ON:OFF ;              
      }
    else{return OFF;}
}  
void setLED(unsigned char LED_no, unsigned char state) {
    if (state == ON) {

        if (LED_no == LED2) {
                PORTD |= (1 << LED2);
                _delay_ms(1000);
                PORTD &= ~(1<<LED2);
            } 
        if (LED_no == LED1) {
                PORTC |= (1 << LED1);
                _delay_ms(1000);
                PORTC &= ~(1<<LED1);
            }
        if (LED_no == LED0) {
                PORTC |= (1 << LED0);
                _delay_ms(1000);
                PORTC &= ~(1<<LED0);
            }
    }
    else {

        PORTC &= ~((1 << LED0) | (1 << LED1));
                PORTD &= ~(1 << LED2);
    }
}
void StartUp(unsigned char BTN_No)
{
    if(BTN_No==BTN0)
    {
        if(PINB & (1<<BTN0)){
            PORTD |= (1<<LED2);
            _delay_ms(500);
            PORTC |= (1<<LED1);
            _delay_ms(500);
            PORTC |= (1<<LED0);
            _delay_ms(500);
        }
    }
    if(BTN_No==BTN1)
    {
        if(PIND & (1<<BTN1)){
            PORTD |= (1<<LED2);
            _delay_ms(500);
            PORTC |= (1<<LED1);
            _delay_ms(500);
            PORTC |= (1<<LED0);
            _delay_ms(500);
        }
    }
    if(BTN_No==BTN2)
    {
        if(PIND & (1<<BTN2)){
            PORTD |= (1<<LED2);
            _delay_ms(500);
            PORTC |= (1<<LED1);
            _delay_ms(500);
            PORTC |= (1<<LED0);
            _delay_ms(500);
        }
    }
}

