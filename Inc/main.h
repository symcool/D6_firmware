/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
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
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

#define		ACTIVE_UART huart1
#define ACTIVE_CHANNEL channel_1

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
void start_us_DWT(int slot);
unsigned int get_us_DWT(int slot);
void delay_us_DWT(unsigned long uSec);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AD8307_EN_Pin GPIO_PIN_15
#define AD8307_EN_GPIO_Port GPIOC
#define ADC_Pin GPIO_PIN_3
#define ADC_GPIO_Port GPIOA
#define LEA_Pin GPIO_PIN_4
#define LEA_GPIO_Port GPIOA
#define D1_Pin GPIO_PIN_1
#define D1_GPIO_Port GPIOB
#define LE_Pin GPIO_PIN_12
#define LE_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_11
#define D2_GPIO_Port GPIOA
#define SW_Pin GPIO_PIN_12
#define SW_GPIO_Port GPIOA
#define T_Pin GPIO_PIN_6
#define T_GPIO_Port GPIOB
#define R_Pin GPIO_PIN_7
#define R_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
void Error_Handler(void);
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
