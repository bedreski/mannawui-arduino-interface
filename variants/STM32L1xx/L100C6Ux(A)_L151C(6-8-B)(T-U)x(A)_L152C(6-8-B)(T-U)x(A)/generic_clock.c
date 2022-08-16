/*
 *******************************************************************************
 * Copyright (c) 2020-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_GENERIC_L100C6UX) || defined(ARDUINO_GENERIC_L100C6UXA) ||\
    defined(ARDUINO_GENERIC_L151C6TX) || defined(ARDUINO_GENERIC_L151C6TXA) ||\
    defined(ARDUINO_GENERIC_L151C6UX) || defined(ARDUINO_GENERIC_L151C6UXA) ||\
    defined(ARDUINO_GENERIC_L151C8TX) || defined(ARDUINO_GENERIC_L151C8TXA) ||\
    defined(ARDUINO_GENERIC_L151C8UX) || defined(ARDUINO_GENERIC_L151C8UXA) ||\
    defined(ARDUINO_GENERIC_L151CBTX) || defined(ARDUINO_GENERIC_L151CBTXA) ||\
    defined(ARDUINO_GENERIC_L151CBUX) || defined(ARDUINO_GENERIC_L151CBUXA) ||\
    defined(ARDUINO_GENERIC_L152C6TX) || defined(ARDUINO_GENERIC_L152C6TXA) ||\
    defined(ARDUINO_GENERIC_L152C6UX) || defined(ARDUINO_GENERIC_L152C6UXA) ||\
    defined(ARDUINO_GENERIC_L152C8TX) || defined(ARDUINO_GENERIC_L152C8TXA) ||\
    defined(ARDUINO_GENERIC_L152C8UX) || defined(ARDUINO_GENERIC_L152C8UXA) ||\
    defined(ARDUINO_GENERIC_L152CBTX) || defined(ARDUINO_GENERIC_L152CBTXA) ||\
    defined(ARDUINO_GENERIC_L152CBUX) || defined(ARDUINO_GENERIC_L152CBUXA)
#include "pins_arduino.h"

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};

  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL6;
  RCC_OscInitStruct.PLL.PLLDIV = RCC_PLL_DIV3;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK) {
    Error_Handler();
  }
}

#endif /* ARDUINO_GENERIC_* */
