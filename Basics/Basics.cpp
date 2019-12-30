#include <iostream>
#include <string>
using std::cout;
using std::string;

int main()
{
    // displays message in the console
    cout << "Hello World!\n";

//--------------------------------------

    // variables
    
    // character Types
    char cCharacter = 'a';
    char16_t c16Character = 'b';
    char32_t c32Character = 'c';
    wchar_t wcCharacter = 'd';
    
    // integer types (signed) can hold both negative and positive values
    short sWholeNumber = -1; 
    int iWholeNumber = -2; 
    long lWholeNumber = -3;
    long long llWholeNumber = -4;

    // integer types (unsigned) can only hold zero and positive values
    unsigned short usWholeNumber = -1;
    unsigned int uiWholeNumber = -2;
    unsigned long ulWholeNumber = -3;
    unsigned long long ullWholeNumber = -4;

    // floating-point types
    float fDecimalNumber = 1.000;
    double dDecimalNumber = 1.00000;
    long double ldDecimalNumber = 1.0000000;

    // boolean type
    bool bTrueOrFalse = true;

    // string
    string sPhrase = "Learn C++";
}