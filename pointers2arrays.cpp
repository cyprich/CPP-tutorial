#include <iostream>

int main()
{
    int arr[] = {3, 6, 9};
    int *x = arr;
    int *y = &arr[0];

    std::cout << arr + 1 << std::endl;
    std::cout << &arr[1] << std::endl;

    // arr == &arr[0];
    // arr+1 == &arr[1];

    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << std::endl;
        std::cout << *arr + i << std::endl << std::endl;
    }

    return 0;
}