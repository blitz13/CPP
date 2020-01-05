#include <iostream>

static void sPrint(char letter) // "Static" can only be used in this file(Static.cpp)
{
	letter = 'C';
	std::cout << letter << std::endl;
}

void Print(char letter)
{
	std::cout << letter << std::endl;
}