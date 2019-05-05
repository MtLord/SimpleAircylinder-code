/*
 * Application.hpp
 *
 *  Created on: 2019/05/05
 *      Author: —T‘¿
 */

#ifndef APPLICATION_APPLICATION_HPP_
#define APPLICATION_APPLICATION_HPP_
#include "LowlayerHandel.hpp"

class App
{
	LowlayerHandelTypedef *plow;
	void Open();
	void Close();
	unsigned short node_id=0;
public:
	App(LowlayerHandelTypedef *_plow):plow(_plow){

	}
	void TaskShift();
};



#endif /* APPLICATION_APPLICATION_HPP_ */
