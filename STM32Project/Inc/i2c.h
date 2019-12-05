/**
  ******************************************************************************
  * File Name          : I2C.h
  * Description        : This file provides code for the configuration
  *                      of the I2C instances.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __i2c_H
#define __i2c_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void MX_I2C1_Init(void);

/* USER CODE BEGIN Prototypes */

//write an 8-bit value to specified slave and register
void i2c_write(uint8_t slave_addr, uint8_t reg_addr, uint8_t data);
//read n bytes from slave, with start address
void i2c_read_n(uint8_t slave_addr, uint8_t reg_addr, uint8_t* buffer, uint8_t n);
//optimized for reading 6 bytes into 3 int16 variables, automatically converts endian (swaps bytes)
void i2c_read3_int16(uint8_t slave_addr, uint8_t register_addr, uint8_t* buffer);
//reads an int16 value to the address pointed to by buffer
void i2c_read_int16(uint8_t slave_addr, uint8_t register_addr, uint8_t* buffer);
/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ i2c_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
