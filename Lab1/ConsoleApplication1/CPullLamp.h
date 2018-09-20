#pragma once
#ifndef   __CPullLamp__
#define   __CPullLamp__
#include <iostream>
#include "utils.h"
#include "CLamp3Bulb.h"

class CPullLamp : public CLamp3Bulb
{
	// public and private variables and functions for the new lamp
public:
	CPullLamp(int w1, int w2, int w3);
	void toggle();
private:
	//void LampOn() { }		// empty private function
	//void LampOff() { }		// empty private function
};

#endif