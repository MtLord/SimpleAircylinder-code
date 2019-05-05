/*
 * LowlayerHandel.hpp
 *
 *  Created on: 2019/05/01
 *      Author: —T‘¿
 */

#ifndef INC_LOWLAYERHANDEL_HPP_
#define INC_LOWLAYERHANDEL_HPP_

#include "CAN/CAN.hpp"
#include "stm32f303x8.h"
#include "Aircylinder/Aircylinder.hpp"
#include "main.h"
class LowlayerHandelTypedef
{
public:
	Aircylinder A1,A2,A3,A4,A5,A6,A7,A8;
	CanBus extcan;
	LowlayerHandelTypedef():
	A1(GPIOB,GPIO_PIN_4),
	A2(GPIOB,GPIO_PIN_3),
	A3(GPIOA,GPIO_PIN_10),
	A4(GPIOA,GPIO_PIN_9),
	A5(GPIOA,GPIO_PIN_8),
	A6(GPIOB,GPIO_PIN_5),
	A7(GPIOB,GPIO_PIN_6),
	A8(GPIOB,GPIO_PIN_7),
	extcan(CAN_ID_EXT,CAN_RTR_DATA)
	{

	}
};



#endif /* INC_LOWLAYERHANDEL_HPP_ */
