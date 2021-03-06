// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "List.h"
#include <iostream>
#include <string>

int main()
{
	std::cout << "Testing with integers......." << std::endl;
	List<int> test1;
	test1.Insert(5);
	test1.Insert(6);
	test1.Insert(7);
	test1.PrintList();

	std::cout << "Getting data at index 1: " << test1.Get(1) << std::endl;
	test1.Delete();
	test1.PrintList();
	std::cout << "Testing with strings............" << std::endl;
	List <std::string> test2;
	test2.Insert("CPEN");
	test2.Insert("333");
	test2.PrintList();
	test2.Delete();
	test2.Delete();
	test2.PrintList();
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
