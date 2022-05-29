/* 
 * File:   LCD.h
 * Author: peter
 *
 * Created on May 28, 2022, 10:13 PM
 */

#ifndef LCD_H
#define	LCD_H

#define LCD_DATA PORTA
#define LCD_DATA_DIR DDRA
#define LCD_CONTROL PORTB
#define LCD_CONTROL DDRB 

void init_LCD();
void LCD_send(unsigned char);
void LCD_send_str(unsigned char*);
void LCD_send_num(int);
//Commands
void LCD_cmd(unsigned char);
void LCD_clear();
void LCD_enable();
#endif	/* LCD_H */

