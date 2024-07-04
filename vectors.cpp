#include <iostream>
#include <vector>

int main() {
    // create
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    /*
    // access
    std::cout << numbers[0] << std::endl;
    std::cout << numbers.front() << std::endl;  // first
    std::cout << numbers.back() << std::endl;  //second
    */

    // add 
    numbers.push_back(15);

    numbers.insert(numbers.begin(), 6);
    numbers.insert(numbers.begin() + 1, 7);
    numbers.insert(numbers.begin() + 2, 8);

    numbers.erase(numbers.begin());
    numbers.erase(numbers.begin() + 1);
    numbers.erase(numbers.begin() + 2);

    for (int i = 0; i < numbers.size(); i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    

    return 0;
}