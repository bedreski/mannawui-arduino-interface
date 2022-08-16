/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
/*
 * Automatically generated from STM32F302V(B-C)Tx.xml
 * CubeMX DB release 6.0.60
 */
#if !defined(CUSTOM_PERIPHERAL_PINS)
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT1, 128);).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC1_IN1
  {PA_1,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC1_IN2
  {PA_2,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC1_IN3
  {PA_3,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC1_IN4
  {PA_4,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC2_IN1
  {PA_5,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC2_IN2
  {PA_6,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC2_IN3
  {PA_7,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC2_IN4
  {PB_2,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC2_IN12
  {PC_0,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC1_IN6
  {PC_0_ALT1, ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC2_IN6
  {PC_1,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC1_IN7
  {PC_1_ALT1, ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC2_IN7
  {PC_2,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC1_IN8
  {PC_2_ALT1, ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC2_IN8
  {PC_3,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC1_IN9
  {PC_3_ALT1, ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC2_IN9
  {PC_4,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC2_IN5
  {PC_5,      ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC2_IN11
  {PF_2,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC1_IN10
  {PF_2_ALT1, ADC2, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC2_IN10
  {PF_4,      ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC1_IN5
  {NC,        NP,   0}
};
#endif

//*** DAC ***

#ifdef HAL_DAC_MODULE_ENABLED
WEAK const PinMap PinMap_DAC[] = {
  {PA_4, DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1
  {NC,   NP,   0}
};
#endif

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PA_10, I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {PA_14, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_7,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_9,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PF_0,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PA_9,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {PA_15, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_6,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PB_8,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PF_1,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {PF_6,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C2)},
  {NC,    NP,   0}
};
#endif

//*** TIM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_TIM[] = {
  {PA_0,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PA_1,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  {PA_1_ALT1,  TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 1, 1)}, // TIM15_CH1N
  {PA_2,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PA_2_ALT1,  TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 1, 0)}, // TIM15_CH1
  {PA_3,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
  {PA_3_ALT1,  TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF9_TIM15, 2, 0)}, // TIM15_CH2
  {PA_4,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PA_5,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PA_6,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PA_6_ALT1,  TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PA_7,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_7_ALT1,  TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PA_7_ALT2,  TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1
  {PA_8,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 0)}, // TIM1_CH1
  {PA_9,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 0)}, // TIM1_CH2
  {PA_9_ALT1,  TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM2, 3, 0)}, // TIM2_CH3
  {PA_10,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 0)}, // TIM1_CH3
  {PA_10_ALT1, TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM2, 4, 0)}, // TIM2_CH4
  {PA_11,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_11_ALT1, TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF11_TIM1, 4, 0)}, // TIM1_CH4
  {PA_11_ALT2, TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 1, 0)}, // TIM4_CH1
  {PA_12,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N
  {PA_12_ALT1, TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 2, 0)}, // TIM4_CH2
  {PA_12_ALT2, TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PA_13,      TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM4, 3, 0)}, // TIM4_CH3
  {PA_13_ALT1, TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N
  {PA_15,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 1, 0)}, // TIM2_CH1
  {PB_0,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_0_ALT1,  TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  {PB_1,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_1_ALT1,  TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PB_3,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 2, 0)}, // TIM2_CH2
  {PB_4,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PB_4_ALT1,  TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PB_5,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PB_5_ALT1,  TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM17, 1, 0)}, // TIM17_CH1
  {PB_6,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
  {PB_6_ALT1,  TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 1)}, // TIM16_CH1N
  {PB_7,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF10_TIM3, 4, 0)}, // TIM3_CH4
  {PB_7_ALT1,  TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
  {PB_7_ALT2,  TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 1)}, // TIM17_CH1N
  {PB_8,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
  {PB_8_ALT1,  TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM16, 1, 0)}, // TIM16_CH1
  {PB_9,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  {PB_9_ALT1,  TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM17, 1, 0)}, // TIM17_CH1
  {PB_10,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 3, 0)}, // TIM2_CH3
  {PB_11,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM2, 4, 0)}, // TIM2_CH4
  {PB_13,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 1, 1)}, // TIM1_CH1N
  {PB_14,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_14_ALT1, TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 1, 0)}, // TIM15_CH1
  {PB_15,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_15_ALT1, TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM15, 1, 1)}, // TIM15_CH1N
  {PB_15_ALT2, TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM15, 2, 0)}, // TIM15_CH2
  {PC_6,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PC_7,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PC_8,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  {PC_9,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PC_13,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM1, 1, 1)}, // TIM1_CH1N
  {PD_3,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
  {PD_4,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2
  {PD_6,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4
  {PD_7,       TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3
  {PD_12,      TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 1, 0)}, // TIM4_CH1
  {PD_13,      TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 2, 0)}, // TIM4_CH2
  {PD_14,      TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 3, 0)}, // TIM4_CH3
  {PD_15,      TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  {PE_0,       TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM16, 1, 0)}, // TIM16_CH1
  {PE_1,       TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM17, 1, 0)}, // TIM17_CH1
  {PE_2,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 1, 0)}, // TIM3_CH1
  {PE_3,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 2, 0)}, // TIM3_CH2
  {PE_4,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 3, 0)}, // TIM3_CH3
  {PE_5,       TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM3, 4, 0)}, // TIM3_CH4
  {PE_8,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 1)}, // TIM1_CH1N
  {PE_9,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 0)}, // TIM1_CH1
  {PE_10,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 1)}, // TIM1_CH2N
  {PE_11,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 0)}, // TIM1_CH2
  {PE_12,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 1)}, // TIM1_CH3N
  {PE_13,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 0)}, // TIM1_CH3
  {PE_14,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 4, 0)}, // TIM1_CH4
  {PF_0,       TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM1, 3, 1)}, // TIM1_CH3N
  {PF_6,       TIM4,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM4, 4, 0)}, // TIM4_CH4
  {PF_9,       TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM15, 1, 0)}, // TIM15_CH1
  {PF_10,      TIM15, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF3_TIM15, 2, 0)}, // TIM15_CH2
  {NC,         NP,    0}
};
#endif

//*** UART ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_2,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_9,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_14,      USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PB_3,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PB_6,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_10,      USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_4,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PC_10,      UART4,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART4)},
  {PC_10_ALT1, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_12,      UART5,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART5)},
  {PD_5,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_8,       USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PE_0,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {NC,         NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_3,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_10,      USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_15,      USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PB_4,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PB_7,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_11,      USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PC_5,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PC_11,      UART4,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART4)},
  {PC_11_ALT1, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_2,       UART5,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_UART5)},
  {PD_6,       USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_9,       USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PE_1,       USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PE_15,      USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,         NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_12, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PB_14, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_4,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_12, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PF_6,  USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PA_11, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART1)},
  {PA_13, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PB_13, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {PD_3,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART2)},
  {PD_11, USART3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF7_USART3)},
  {NC,    NP,     0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_5,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_5_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_15,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_12,     SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_4,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_4_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_14,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_11,     SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_3,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PB_3_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_13,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PC_10,     SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PF_9,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PF_10,     SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {NC,        NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,       SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_4_ALT1,  SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PA_15,      SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI1)},
  {PA_15_ALT1, SPI3, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI3)},
  {PB_12,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
  {PD_15,      SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_SPI2)},
  {NC,         NP,   0}
};
#endif

//*** CAN ***

#if defined(HAL_CAN_MODULE_ENABLED) || defined(HAL_CAN_LEGACY_MODULE_ENABLED)
WEAK const PinMap PinMap_CAN_RD[] = {
  {PA_11, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
  {PB_8,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
  {PD_0,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_CAN)},
  {NC,    NP,   0}
};
#endif

#if defined(HAL_CAN_MODULE_ENABLED) || defined(HAL_CAN_LEGACY_MODULE_ENABLED)
WEAK const PinMap PinMap_CAN_TD[] = {
  {PA_12, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
  {PB_9,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF9_CAN)},
  {PD_1,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF7_CAN)},
  {NC,    NP,   0}
};
#endif

//*** No ETHERNET ***

//*** No QUADSPI ***

//*** USB ***

#if defined(HAL_PCD_MODULE_ENABLED) || defined(HAL_HCD_MODULE_ENABLED)
WEAK const PinMap PinMap_USB[] = {
  {PA_11, USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_USB)}, // USB_DM
  {PA_12, USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF14_USB)}, // USB_DP
  {NC,    NP,  0}
};
#endif

//*** No SD ***

#endif /* !CUSTOM_PERIPHERAL_PINS */
