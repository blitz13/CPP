#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

// IO
void Write(const char* message)
{
	cout << message;
}

void WriteLine(string message)
{
	cout << message << std::endl;
}

string Read()
{
	char input[20];
	cin.getline(input, 20);
	return input;
}