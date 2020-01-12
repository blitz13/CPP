#include <iostream>
#include <string>

#define write std::cout
#define read std::cin
#define end std::endl

int main()
{
    std::string sPhrase = "Learn C";
    
    #pragma region Member Functions
    sPhrase.append(2, '+'); //Append to string (.append)
    write << sPhrase << end;

    write << sPhrase.length() << end; // Return length of string (.length())
    #pragma endregion
}