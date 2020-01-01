#include <iostream>
#include <string>

using std::string;

void WriteLine(string);
string Read();

int main()
{
    WriteLine("Hello " + Read());
}