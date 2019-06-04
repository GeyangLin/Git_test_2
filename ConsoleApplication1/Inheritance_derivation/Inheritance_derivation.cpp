// Inheritance_derivation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Ctime.h"
using namespace std;

int main()
{
	Ctime time1;
	time1.getime(1, 0, 2);
	Ctime time2(time1);
	Ctime time3;
	cout << "time3 count: " << time3.count << endl;

	Ctime time4 = time1;// using Copy constructor, deep copy
	time4.temp = 100;
	cout << endl << time1.temp << endl << endl;
	cout << time4.const_test << endl;
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

