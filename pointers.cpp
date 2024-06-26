#include <iostream>

int main() {
    int i = 10;
    int *ptr = &i;

    std::cout << i << std::endl;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 5;
    std::cout << i << std::endl;
    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl << std::endl;
    
    std::cout << *ptr << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &ptr << std::endl;

    return 0;
}