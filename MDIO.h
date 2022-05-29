/* 
 * File:   MDIO.h
 * Author: peter
 *
 * Created on May 28, 2022, 9:58 PM
 */

#ifndef MDIO_H
#define	MDIO_H

#define ON 1
#define OFF 0

#define LED0_DIR DDRC2  // data direction position
#define LED0 PORTC2  //Pin position
#define LED1_DIR DDRC7  // data direction position
#define LED1 PORTC7  //Pin position
#define LED2_DIR DDRD3  // data direction position
#define LED2 PORTD3  //Pin position

#define BTN0_DIR DDRB0 //push button
#define BTN0 PORTB0
#define BTN1_DIR DDRD6 //push button
#define BTN1 PORTD6
#define BTN2_DIR DDRD2 //push button
#define BTN2 PORTD2

#define BUZ_DIR DDRA3 // buzzer
#define BUZ PORTA3


void LEDs_init(void);
void BTNs_init(void);
void setLED(unsigned char LED_no, unsigned char state);
unsigned char IsPressed(unsigned char BTN_NO);
void StartUp(unsigned char BTN_No);

#endif	/* MDIO_H */

