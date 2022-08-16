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

// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D0/A0
  PA_1,   // D1/A1
  PA_2,   // D2/A2
  PA_3,   // D3/A3
  PA_4,   // D4/A4
  PA_5,   // D5/A5
  PA_6,   // D6/A6
  PA_7,   // D7/A7
  PA_8,   // D8
  PA_9,   // D9
  PA_10,  // D10
  PA_11,  // D11
  PA_12,  // D12
  PA_13,  // D13
  PA_14,  // D14
  PA_15,  // D15
  PB_0,   // D16/A8
  PB_1,   // D17/A9
  PB_2,   // D18
  PB_3,   // D19
  PB_4,   // D20
  PB_5,   // D21
  PB_6,   // D22
  PB_7,   // D23
  PB_8,   // D24
  PB_9,   // D25
  PB_10,  // D26
  PB_11,  // D27
  PB_12,  // D28/A10
  PB_13,  // D29/A11
  PB_14,  // D30/A12
  PB_15,  // D31/A13
  PC_13,  // D32
  PC_14,  // D33
  PC_15,  // D34
  PH_0,   // D35
  PH_1    // D36
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  0,  // A0,  PA0
  1,  // A1,  PA1
  2,  // A2,  PA2
  3,  // A3,  PA3
  4,  // A4,  PA4
  5,  // A5,  PA5
  6,  // A6,  PA6
  7,  // A7,  PA7
  16, // A8,  PB0
  17, // A9,  PB1
  28, // A10, PB12
  29, // A11, PB13
  30, // A12, PB14
  31  // A13, PB15
};

#endif /* ARDUINO_GENERIC_* */
