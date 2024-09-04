# DHT11 Temperature and Humidity Sensor with UART

This project reads data from a DHT11 temperature and humidity sensor using a microcontroller (STM32) and sends the data via UART to a PC, where it can be monitored on a serial terminal.

## Features
- Reads temperature and humidity values from a DHT11 sensor.
- Transmits sensor data over UART (serial communication) to a PC.
- Displays the data on a serial terminal in real-time.

## Requirements
- Microcontroller (STM32)
- DHT11 sensor
- USB-UART cable
- Jumper wires for connections

## How to Build and Run (for STM32)
1. Flash the code to your STM32 microcontroller using an IDE like STM32CubeIDE.
2. Connect the DHT11 sensor to the appropriate GPIO pin.
3. Open a serial terminal (e.g., PuTTY, TeraTerm) on your PC with the baud rate set to 9600.
4. View the temperature and humidity data being transmitted.

## Circuit Diagram
Connect the DHT11 sensor to the following pins:
- VCC: 5V (or 3.3V if needed)
- GND: Ground
- DATA: GPIO PA0 (STM32)


