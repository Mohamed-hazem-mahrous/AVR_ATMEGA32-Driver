# AVR ATMEGA32 Driver

This repository contains drivers for the AVR ATMEGA32 microcontroller.

## Table of Contents

- [Overview](#overview)
- [Folder Structure](#folder-structure)
- [Usage](#usage)
- [Contributing](#contributing)
- [Author](#author)

## Overview

The AVR ATMEGA32 Driver is a collection of drivers for various peripherals of the AVR ATMEGA32 microcontroller. It includes drivers for GPIO, I2C, UART, SPI, ADC, Timer, keypad, and LCD peripherals.

## Folder Structure

The project structure is organized as follows:
### MCAl
- GPIO
- TIMER
- ADC
- UART
- SPI
- I2C


### HAL
- Keypad
- LCD

### Info

- `GPIO` contain the implementation of GPIO driver.
- `TIMER` folder contain the implementation of the Timer driver.
- `ADC` folder contain the implementation of the ADC driver.
- `I2C` folder contain the implementation of the I2C driver.
- `UART` folder contain the implementation of the UART driver.
- `SPI` folder contain the implementation of the SPI driver.
- The `inc` folder includes header files for the drivers.
- The `Keypad` folder contains the keypad driver implementation.
- The `LCD` folder contains the LCD driver implementation.

## Usage

You can use these drivers to interface with the AVR Atmega32 microcontroller peripherals.
Make sure to configure your development environment and toolchain to compile and flash this code onto your AVR Atmega32 microcontroller.

## Contributing
Contributions to this project are welcome! If you find a bug or have an enhancement in mind, please open an issue or submit a pull request.

## Author
Mohamed Hazem Yahya Mahrous Ali - Biomedical and Embedded Engineering Student