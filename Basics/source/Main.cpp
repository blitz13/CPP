#include <iostream>

int main()
{
    //void* ptr = 0; // to aquire memory address, but zero or null is not a valid address

    int i = 4;
    //void* ptr = &i; // get the memory address of the integer variable i
    int* ptr = &i; // get the memory address of the integer variable i. also set what type of data will be stored in the memory address
    *ptr = 8; //dereferencing, read/write data in the address

    char* allocation = new char[4];// allocates 4 bytes of memory
    memset(allocation, 1, 4); //assign data(1) to the allocated address

    char** ptPtr = &allocation; // points to the pointer(allocation)
    std::cin.get();

    delete[] allocation; // removes the allocated memory
}
