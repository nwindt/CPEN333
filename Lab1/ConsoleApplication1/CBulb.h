#pragma once
#ifndef   __CBulb__
#define   __CBulb__
#include <iostream>
#include "utils.h"

// code for your class

class CBulb
{
private:
	State state;
	int watts;
public:
	CBulb();
	CBulb(int _watts);
	CBulb(int _watts, State _state);
	~CBulb();
	void print();
	void on();
	void off();
	State getstate();
	void setwatts(int _watts);
	int getpower();

};
#endif 
