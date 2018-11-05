// io.cpp: Contains all the functions required for this solution to work.

#include "pch.h"
#include <iostream>

//Asks the user for a number and returns it
int readNumber()
{
	int userNumber{};
	std::cout << "Enter a number: ";
	std::cin >> userNumber;
	return userNumber;
}

//Writes the inputted number to the console.
void writeAnswer(int x)
{
	std::cout << "The answer is: " << x << std::endl;
}