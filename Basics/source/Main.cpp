#include <iostream>

//void AgeStatus(int* age) // Using pointer
//{
//    if (*age >= 18) {
//        std::cout << "You are an adult..." << std::endl;
//    }
//    else {
//        std::cout << "You are a minor..." << std::endl;
//    }
//}

//void AgeStatus(int& age) 
//{
//    if (age >= 18) {
//        std::cout << "You are an adult..." << std::endl;
//    }
//    else {
//        std::cout << "You are a minor..." << std::endl;
//    }
//}

int main()
{
    //int iUserAge = 18;
    //std::cout << "How old are you?" << std::endl;
    //std::cin >> iUserAge;
    ////AgeStatus(&iUserAge); // Using pointer
    //AgeStatus(iUserAge); // Reference

    // Pointer over Reference ------------------------------------------------------------
    int x = 0, y = 0;
   
    // Reference
    int& rf = x;
    rf = y; // ! NOT PPSSIBLE... cannot use one reference(rf) with two variables(x and y)
    
    // Pointer
    int* ptr = &x; // point to "x" address
    *ptr = 1; // change "x" value to 1
    ptr = &y; // point to "y" address
    *ptr = 2; // change "y" value to 2

}