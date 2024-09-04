#ifndef UART_H
#define UART_H

#include "stm32f4xx_hal.h"

// Function prototypes
void UART_Init(void);
void UART_SendString(char *str);

#endif // UART_H
