/**
 * @file OLED12864.h
 * @author 早上坏 (star32349@outlook.com)
 * @brief 
 * @version 1.0
 * @date 2024-05-07
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef __OLED12864_H
#define __OLED12864_H

#include "main.h"
#include "i2c.h"
void OLED_Init(void);
void WriteCmd(uint8_t IIC_Command);
void WriteDat(uint8_t IIC_Data);
void HAL_I2C_WriteByte(uint8_t addr, uint8_t data);
void SetStart(uint8_t x, uint8_t y);

void OLED_Fill(uint8_t Fill_Data);
void OLED_ON(void);
void OLED_OFF(void);
void Display_Char(uint8_t x, uint8_t y, char c);
void Display_Str(uint8_t x, uint8_t y, char *str);
void Display_IMG(const uint8_t (*img)[128],uint8_t mode);
void OLED_IMGtest(void);
void OLED_CHARtest(void);

#endif
