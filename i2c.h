#ifndef I2C_H
#define I2C_H

#include <msp430.h>

#define LCD_ADDR 0x27  // Địa chỉ I2C của LCD (Thử 0x3F nếu không hiển thị)

// Chân I2C
#define SDA_PIN BIT7  // P1.7 - UCB0SDA
#define SCL_PIN BIT6  // P1.6 - UCB0SCL

// Khai báo các hàm I2C
void I2C_Init();
void I2C_Write(unsigned char data);
void LCD_SendCmd(unsigned char cmd);
void LCD_SendData(unsigned char data);
void LCD_Init();
void LCD_Print(char *str);

#endif
