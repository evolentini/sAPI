/* Copyright 2015-2017, Eric Pernia.
 * All rights reserved.
 *
 * This file is part sAPI library for microcontrollers.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/* Date: 2015-09-23 */

#ifndef _SAPI_CIAA_NXP_V1_BOARD_MAP_H_
#define _SAPI_CIAA_NXP_V1_BOARD_MAP_H_

/*==================[inclusions]=============================================*/

#include "sapi_datatypes.h"

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

/*==================[typedef]================================================*/
/*
typedef enum{*/
 /* 46     47     48     49     50     51     52     53 */
/*   DI0,   DI1,   DI2,   DI3,   DI4,   DI5,   DI6,   DI7,*/
 /* 54     55     56     57     58     59     60     61 */
/*   DO0,   DO1,   DO2,   DO3,   DO4,   DO5,   DO6,   DO7
} gpioBoardMap_t;

typedef enum{*/
/* 62         63       64        65       */
/*   AI3 = 62, AI2 = 63, AI1 = 64, AI0 = 65
} adcBoardMap_t;

typedef enum{*/
/* 66 */
/*   AO = 66
} dacBoardMap_t;

typedef enum{
   UART_USB, UART_232, UART_485
} uartBoardMap_t;

typedef enum{
   TIMER0, TIMER1, TIMER2, TIMER3
} timerBoardMap_t;
*/
/*Defined for sapi_i2c.h*/
/* Comment because already defined in "i2c_18xx_43xx.h"*/
/*
typedef enum{
   I2C0 // TODO: Add support for I2C1
} i2cBoardMap_t;
*/
/*
typedef uint8_t i2cMap_t;

typedef enum{
   SPI0
} spiBoardMap_t;
*/
/*==================[external data declaration]==============================*/

/*==================[external functions declaration]=========================*/

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* #ifndef _SAPI_CIAA_NXP_V1_BOARD_MAP_H_ */