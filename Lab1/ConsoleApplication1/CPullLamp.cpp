#include "CPullLamp.h"

CPullLamp::CPullLamp(int w1, int w2, int w3)
	: CLamp3Bulb(w1, w2, w3)		// call base class constructor with watts
{
	printf("CPullLamp constructor called…\n");
}

void CPullLamp::toggle()
{
	if (getState() == OFF)	// if lamp is off, i.e. test state of base class
		LampOn();	// turn on CPulledLamp using base class functions
	else
		LampOff();
}
