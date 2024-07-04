#include <iostream>

int main() {
    int a = 5;
    int *b = &a;
    int *c = NULL;

    std::cout << a << " " << &a << std::endl;
    std::cout << b << " " << &b << std::endl;
    std::cout << *b << std::endl;
    
    // a == *b
    // &a == b

    int x = 3;
    int *y = &x;
    int **z = &y;

    std::cout << *z << std::endl;    
    std::cout << *(z + 1) << std::endl;

    

    return 0;
}