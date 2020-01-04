#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
     // display sizes of variable types
    cout << "The size of a CHAR is " << sizeof(char) << " byte" << endl;
    cout << "The size of a SHORT INT is " << sizeof(short) << " bytes" << endl;
    cout << "The size of a INT is " << sizeof(int) << " bytes" << endl;
    cout << "The size of a LONG INT is " << sizeof(long) << " bytes" << endl;
    cout << "The size of a LONg LONG INT is " << sizeof(long long) << " bytes" << endl;
    cout << "The size of a FLOAT is " << sizeof(float) << " bytes" << endl;
    cout << "The size of a DOUBLE is " << sizeof(double) << " bytes" << endl;
    cout << "The size of a LONG DOUBLE is " << sizeof(long double) << " bytes" << endl;
    cin.get();
}