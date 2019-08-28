/*
 * Application.cpp
 *
 *  Created on: 2019/05/05
 *      Author: —T‘¿
 */

#include "DefineOrder.h"
#include"Application.hpp"
extern unsigned char RxFIFO_Data[6];
extern CAN_RxHeaderTypeDef RXmsg;
extern bool CanRxFlag;

#define ORDER_BIT_Pos 6U
#define NODE_ID_Pos 2U
#define ORDER_ID ((RXmsg.ExtId>>ORDER_BIT_Pos)&0xFF)
#define NODE_ID ((RXmsg.ExtId>>NODE_ID_Pos)&0xF)

void App::Open()
{
	switch(node_id)
	{
	case 1:
		plow->A1.Open();
		break;
	case 2:
			plow->A2.Open();
			break;
	case 3:
			plow->A3.Open();
			break;
	case 4:
			plow->A4.Open();
			break;
	case 5:
			plow->A5.Open();
			break;
	case 6:
			plow->A6.Open();
			break;
	case 7:
			plow->A7.Open();
			break;
	case 8:
			plow->A8.Open();
			break;

	}
}

void App::Close()
{
	switch(node_id)
		{
		case 1:
			plow->A1.Close();
			break;
		case 2:
			plow->A2.Close();
			break;
		case 3:
			plow->A3.Close();
			break;
		case 4:
			plow->A4.Close();
			break;
		case 5:
			plow->A5.Close();
			break;
		case 6:
			plow->A6.Close();
			break;
		case 7:
			plow->A7.Close();
			break;
		case 8:
			plow->A8.Close();
			break;
		}
}



void App::TaskShift()
{
	if(CanRxFlag)
	{
		this->node_id=NODE_ID;
		if(ORDER_ID==AIR_OPEN)
		{
			this->Open();
		}
		if(ORDER_ID==AIR_CLOSE)
		{
			this->Close();
		}
		CanRxFlag=false;
	}
}

