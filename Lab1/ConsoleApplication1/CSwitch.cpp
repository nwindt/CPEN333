#include "CSwitch.h"

CSwitch::CSwitch() {
	std::cout << "CSwitch constructor being called.." << std::endl;
	state = OFF;
}

CSwitch::CSwitch(State _state) {
	std::cout << "CSwitch constructor being called.." << std::endl;
	state = _state;
}
CSwitch::~CSwitch() {
	std::cout << "CSwitch deconstructor being called.." << std::endl;
}

void CSwitch::turnoff() {
	state = OFF;
}

void CSwitch::turnon() {
	state = ON;
}

void CSwitch::print() {
	std::cout << "Switch state is: " << state << std::endl;
}

State CSwitch::getState() {
	return state;
}