// chapter1final.cpp : A program that asks the user for 2 numbers
// and adds them together.

#include "pch.h"
#include <iostream>
#include "io.h"

// Asks the user for a number twice with the readNumber function, 
// then adds the two together with the writeAnswer function.
int main()
{
	// Asks for a number twice because we need to add 2 different numbers.
	int x{ readNumber() };
	int y{ readNumber() };
	// Adds the 2 numbers from the user together and sends the answer
	// to writeAnswer to be printed in the console.
	writeAnswer(x + y);
	return 0;
}

