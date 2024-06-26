#include <iostream>

int main()
{
    // Dynamic array
    int *score = new int[10]{4, 10, 21, 7};
    for (int i = 0; i < 10; i++)
    {
        std::cout << score[i] << " ";
    }

    std::cout << std::endl;

    // Static array
    int score2[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << score2[i] << " ";
    }

    int *ptr1, *ptr2;
    ptr1 = new int;
    ptr2 = ptr1;

    std::cout << ptr1 << std::endl
              << ptr2 << std::endl; // we can see the same address here

    delete ptr1;
    delete ptr2; // we got error here

    return 0;
}