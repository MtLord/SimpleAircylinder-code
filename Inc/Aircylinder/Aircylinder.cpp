/*
 * Aircylinder.cpp
 *
 *  Created on: 2018/12/17
 *      Author: —T‘¿
 */

#include "Aircylinder.hpp"

#include "stm32f3xx_hal.h"

void Aircylinder::Open()
{
	HAL_GPIO_WritePin(GPIOx,gpio_pin,GPIO_PIN_SET);
}

void Aircylinder::Close()
{
	HAL_GPIO_WritePin(GPIOx,gpio_pin,GPIO_PIN_RESET);
}
