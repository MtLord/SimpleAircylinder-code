/*
 * Aircylinder.hpp
 *
 *  Created on: 2018/12/17
 *      Author: —T‘¿
 */

#ifndef AIRCYLINDER_AIRCYLINDER_HPP_
#define AIRCYLINDER_AIRCYLINDER_HPP_
#include "CAN/CAN.hpp"

class Aircylinder
{
	unsigned short gpio_pin;
	GPIO_TypeDef *GPIOx;
public:
	Aircylinder(GPIO_TypeDef *_GPIOx,unsigned short _gpio_pin):GPIOx(_GPIOx),gpio_pin(_gpio_pin)
	{
		HAL_GPIO_WritePin(_GPIOx,_gpio_pin,GPIO_PIN_RESET);
	}
	void Open();
	void Close();
};



#endif /* AIRCYLINDER_AIRCYLINDER_HPP_ */
