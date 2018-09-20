#include "CBulb.h"
CBulb::CBulb() {
	std::cout << "CBulb Default Constructor being called.." << std::endl;
	watts = 0;
	state = OFF;
}

CBulb::CBulb(int _watts) {
	std::cout << "CBulb Constructor being called.." << std::endl;
	watts = _watts;
	state = OFF;
}

CBulb::CBulb(int _watts, State _state) {
	watts = _watts;
	state = _state;
}

CBulb::~CBulb() {
	std::cout << "CBulb destructor being called.." << std::endl;
}

void CBulb::print() {
	std::cout << "current state is:" << state << std::endl;
}

void CBulb::on() {
	state = ON;
}

void CBulb::off() {
	state = OFF;
}

State CBulb::getstate() {
	return state;
}

void CBulb::setwatts(int _watts) {
	watts = _watts;
}


int CBulb::getpower() {
	return ((state == ON) ? watts : 0);
}