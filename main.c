#include "dht11.h"
#include "uart.h"
#include <stdio.h>

int main(void) {
    HAL_Init();               // Initialize the HAL library
    SystemClock_Config();      // Configure the system clock
    UART_Init();               // Initialize UART for serial communication
    DHT11_Init();              // Initialize DHT11 sensor

    char buffer[50];           // Buffer for UART output
    int temperature, humidity;

    while (1) {
        if (DHT11_Read(&temperature, &humidity) == 0) {
            // Send temperature and humidity data via UART
            sprintf(buffer, "Temperature: %d°C, Humidity: %d%%\r\n", temperature, humidity);
            UART_SendString(buffer);
        } else {
            UART_SendString("Failed to read from DHT11 sensor\r\n");
        }

        HAL_Delay(1000);  // Wait 1 second before the next reading
    }
}
