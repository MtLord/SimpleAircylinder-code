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
	void DebugLed()
	{
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_1);
		HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_0);
		HAL_Delay(500);
	}
	void DebugAircylinder(int num)
	{
		switch(num)
		{
		case 1:
				 A1.Close();
				 HAL_Delay(500);
				 A1.Open();
				 HAL_Delay(500);
				 break;
		case 2:
			 A2.Close();
			 HAL_Delay(500);
			 A2.Open();
			 HAL_Delay(500);
			 break;
		case 3:
			 A3.Close();
			HAL_Delay(500);
			A3.Open();
			HAL_Delay(500);
			break;
		case 4:
			A4.Close();
			HAL_Delay(500);
			A4.Open();
			HAL_Delay(500);
			break;
		case 5:
			A5.Close();
			HAL_Delay(500);
			A5.Open();
			HAL_Delay(500);
			break;
		case 6:
			A6.Close();
			HAL_Delay(500);
			A6.Open();
			HAL_Delay(500);
			break;
		case 7:
			A7.Close();
			HAL_Delay(500);
			A7.Open();
			HAL_Delay(500);
			break;
		case 8:
			A8.Close();
			HAL_Delay(500);
			A8.Open();
			HAL_Delay(500);
			break;

		}
	}
};



#endif /* INC_LOWLAYERHANDEL_HPP_ */
