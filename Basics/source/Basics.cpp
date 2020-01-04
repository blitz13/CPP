#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    unsigned short usUserAge = 18;
    
    cout << "How old are you?" << endl;
    cin >> usUserAge;

    if (usUserAge >= 18) {
        cout << "You can now access mature content." << endl;
    }
    else {
        cout << "You're too young for this." << endl;

        if ((18 - usUserAge) == 1) {
            cout << "Come back after " << (18 - usUserAge) << " year." << endl;
        }
        else {
            cout << "Come back after " << (18 - usUserAge) << " years." << endl;
        }
    }
}