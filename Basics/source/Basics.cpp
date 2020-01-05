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

void AgeStatus(int& age) 
{
    if (age >= 18) {
        std::cout << "You are an adult..." << std::endl;
    }
    else {
        std::cout << "You are a minor..." << std::endl;
    }
}

int main()
{
    int iUserAge = 18;
    std::cout << "How old are you?" << std::endl;
    std::cin >> iUserAge;
    //AgeStatus(&iUserAge); // Using pointer
    AgeStatus(iUserAge); // Reference
}