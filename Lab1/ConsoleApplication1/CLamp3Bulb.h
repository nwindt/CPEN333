#pragma once
#ifndef __CLamp3Bulb__
#define __CLamp3Bulb__
#include <iostream>
#include "utils.h"
#include "CBulb.h"
#include "CSwitch.h" 


class CLamp3Bulb {
private:
	CBulb		*myBulbs[3];
	CSwitch 	*mySwitch;
public:
	CLamp3Bulb(int w1, int w2, int w3);
	CLamp3Bulb(const CLamp3Bulb &LampToCopy);
	~CLamp3Bulb();
	void LampOn();
	void LampOff();
	State getState();
	void print();
	int getpower();
	CBulb *exchange(CBulb *newBulb, int bulbNumber);
};

#endif // !__CLamp3Bulb__
