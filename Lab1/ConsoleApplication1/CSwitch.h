#pragma once
#ifndef   __CSwitch__
#define   __CSwitch__

#include <iostream>

#include "utils.h"


class CSwitch {
private:
	State state;
public:
	CSwitch();
	CSwitch(State _state);
	~CSwitch();
	void turnon();
	void turnoff();
	void print();
	State getState();

};

#endif