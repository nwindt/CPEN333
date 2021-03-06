// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

#include "utils.h"
#include "CBulb.h"
#include "CLamp3Bulb.h"
#include "CPullLamp.h"

//int main()
//{
//	CLamp3Bulb test(100, 200, 300);
//	std::cout << "Testing turning lamp on/off" << std::endl; // Testing turning lamp on/off
//	test.print();
//	std::cout << "Power = " << test.getpower() << std::endl;
//	test.LampOn();    
//	test.print();
//	std::cout << "Power = " << test.getpower() << std::endl;
//	std::cout << "Testing exchanging light bulb 0 from 100 to 60 w" << std::endl; // Testing exchanging light bulb
//	CBulb *b1 = new CBulb(60);
//	b1 = test.exchange(b1, 0);  
//	delete b1;
//	test.print();
//	std::cout << "Power = " << test.getpower() << std::endl;
//	std::cout << "Testing copy constructor" << std::endl; //Testing copy constructor
//	CLamp3Bulb test2(test);
//	test2.print();
//	std::cout << "Power = " << test2.getpower() << std::endl;
//	test2.LampOff();
//	test2.print();
//	std::cout << "Power = " << test2.getpower() << std::endl;
//	test2.LampOn();
//	test2.print();
//	std::cout << "Power = " << test2.getpower() << std::endl;
//	std::cout << "Exchanging light bulb 1 from 200 to 100 w" << std::endl;
//	b1 = new CBulb(100);
//	b1 = test2.exchange(b1, 1);
//	delete b1;
//	test2.print();
//	std::cout << "Power = " << test2.getpower() << std::endl;
//}

int main()
{
	CPullLamp 	L1(100, 100, 100);

	L1.toggle();
	printf("Power of Lamp = %d\n", L1.getpower());	// print power

	CBulb *bulb1 = new CBulb(50);	// create new 50 watt bulb
	bulb1 = L1.exchange(bulb1, 0);	// swap bulb 0 for 50 watt bulb

	printf("Power of Lamp = %d\n", L1.getpower());	// print power
	L1.toggle();

	printf("Power of Lamp = %d\n", L1.getpower());	// print power

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
