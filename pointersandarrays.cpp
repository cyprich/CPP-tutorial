#include <iostream>

int main() {
    int myArray[10];
    int *myPointer = myArray;

    std::cout << myPointer << std::endl;
    std::cout << &myArray[0] << std::endl;
    std::cout << &myArray[1] << std::endl;
    std::cout << &myArray[2] << std::endl;
    std::cout << &myArray[3] << std::endl;

    return 0;
}
