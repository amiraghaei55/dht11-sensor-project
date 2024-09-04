#ifndef DHT11_H
#define DHT11_H

#include "stm32f4xx_hal.h"

// Function prototypes
void DHT11_Init(void);
int DHT11_Read(int *temperature, int *humidity);

#endif // DHT11_H
