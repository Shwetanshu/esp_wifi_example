# RGB Module Project

## Overview

This project uses the ESP32 microcontroller to control an RGB LED module. The goal of this project is to demonstrate how to 
interface with the RGB LED module using PlatformIO and Visual Studio Code (VSCode).

## Requirements

* ESP32 board
* RGB LED module
* Jumper wires
* Breadboard or PCB
* Power source (e.g., USB cable)
* Arduino IDE or PlatformIO (used for coding)

## Materials Needed

* 1 x ESP32 board
* 1 x RGB LED module
* 1 x Breadboard or PCB
* Jumper wires
* Power source

## Setup Instructions

### Step 1: Connect the RGB LED Module to the Breadboard or PCB

Connect the RGB LED module to the breadboard or PCB as follows:

* Connect the positive (+) leg of the RGB LED to a GPIO pin on the ESP32 board.
* Connect the negative (-) leg of the RGB LED to a GND pin on the ESP32 board.
* Connect the common leg of the RGB LED (usually marked with an 'S' or a triangle) to the SMD resistor.

### Step 2: Install PlatformIO and Visual Studio Code

1. Install PlatformIO from the official website.
2. Install VSCode from the official website.
3. Install the PlatformIO Extension for VSCode from the official repository.

## Project Structure

The project is structured as follows:

* `lib/`: This directory contains all library files used in the project.
* `src/`: This directory contains the main source code of the project.
* `platformio.ini`: This file contains platform configuration settings for PlatformIO.

## Code Explanation

The code is written in C++ and uses the ESP32 API to interact with the RGB LED module. The main function reads user input from 
the serial monitor, parses it, and sets the color of the RGB LED accordingly.

### Example Use Cases

* Turn on the red light by entering 'R' in the serial monitor.
* Turn off the green light by entering 'G' in the serial monitor.
* Change the brightness of the blue light by entering a number between 0 and 255 in the serial monitor.

## APIs Used

The following APIs are used in this project:

* `esp32.h`: Provides access to the ESP32 microcontroller's GPIO pins, SPI, I2C, and UART interfaces.
* `RGBLED.h`: A custom library for controlling the RGB LED module.

## Serial Monitor Commands

The following commands can be entered in the serial monitor:

* `R` : Turn on the red light
* `G` : Turn off the green light
* `B` : Set the brightness of the blue light (0-255)

## Troubleshooting

If you encounter any issues during development, please refer to the following troubleshooting guide:

* Check that all connections are correct and secure.
* Verify that the ESP32 board is properly flashed with the latest firmware.
* Use the serial monitor to monitor system logs and error messages.

### Important Notes
#
| Aspect             | Software update         | Hardware update        |
| ------------------ | ----------------------- | ---------------------- |
| Who updates duty   | CPU                     | LEDC peripheral        |
| Timing             | Task-dependent          | PWM-cycle synchronized |
| Jitter             | Possible                | None                   |
| CPU load           | Higher (frequent calls) | Very low               |
| Smooth transitions | Manual                  | Built-in               |
| Best for           | Simple PWM              | Fades, precise timing  |
---
Practical rule of thumb

If you just need PWM → software is fine

If you need smooth or precise timing → use hardware fade

If PWM update rate is high (>1 kHz) → hardware is strongly preferred

For more, LEDC documentation [here](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/peripherals/ledc.html)# esp_wifi_example
# esp_wifi_example
