#include "CLamp3Bulb.h"

CLamp3Bulb::CLamp3Bulb(int w1, int w2, int w3) {
	std::cout << "CLamp constructor being called.." << std::endl;
	myBulbs[0] = new CBulb(w1);
	myBulbs[1] = new CBulb(w2);
	myBulbs[2] = new CBulb(w3);
	mySwitch = new CSwitch;
}

CLamp3Bulb::~CLamp3Bulb() {
	std::cout << "CLamp deconstructor being called.." << std::endl;
	delete myBulbs[0];
	delete myBulbs[1];
	delete myBulbs[2];
	delete mySwitch;
}

CLamp3Bulb::CLamp3Bulb(const CLamp3Bulb      &LampToCopy)
{
	// create a switch and 3 new bulbs based on the state and values of
	// the LampToCopy object. Now copy their individual states to the new lamp

	std::cout << "CLamp copy constructor being called.." << std::endl;
	State s = LampToCopy.mySwitch->getState();
	myBulbs[0] = new CBulb(LampToCopy.myBulbs[0]->getpower(), s);
	myBulbs[1] = new CBulb(LampToCopy.myBulbs[1]->getpower(), s);
	myBulbs[2] = new CBulb(LampToCopy.myBulbs[2]->getpower(), s);
	mySwitch = new CSwitch(s);
}


void CLamp3Bulb::LampOn() {
	myBulbs[0]->on();
	myBulbs[1]->on();
	myBulbs[2]->on();
	mySwitch->turnon();
}

void CLamp3Bulb::LampOff() {
	myBulbs[0]->off();
	myBulbs[1]->off();
	myBulbs[2]->off();
	mySwitch->turnoff();
}

void CLamp3Bulb::print() {
	mySwitch->print();
}

State CLamp3Bulb::getState() {
	return mySwitch->getState();
}

int CLamp3Bulb::getpower() {
	return myBulbs[0]->getpower() + myBulbs[1]->getpower() + myBulbs[2]->getpower();
}

CBulb* CLamp3Bulb::exchange(CBulb *newBulb, int bulbNumber) {
	CBulb* oldbulb = myBulbs[bulbNumber];
	myBulbs[bulbNumber] = newBulb;
	if (getState())
		myBulbs[bulbNumber]->on();
	return oldbulb;
}
