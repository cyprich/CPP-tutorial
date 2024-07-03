#include <iostream>
#include <tuple>

int main() {
    // declare and init tuple
    std::tuple<int, std::string> person(21, "Peter");

    // access tuple value
    std::cout << std::get<0>(person) << std::endl;
    std::cout << std::get<1>(person) << " is " << std::get<0>(person) << " years old" << std::endl;

    // change tuple value
    std::get<0>(person) = 99;
    std::cout << std::get<0>(person) << std::endl;

    // first declare, then init tuple
    std::tuple<int, char, bool, float> thing;
    thing = std::make_tuple(1, 'a', true, 3.14);
    std::cout << std::get<3>(thing) << std::endl;

    // swap tuples
    // tuples have to have matching values in order to be able to swap them 
    std::tuple<int, int> t1(1, 2);
    std::tuple<int, int> t2(9, 10);
    std::cout << std::get<0>(t1) << std::endl;
    t1.swap(t2);
    std::cout << std::get<0>(t1) << std::endl;

    // decomposing tuples
    // making tuple into separate variables
    // types have to be matching ofc
    int x, y;
    std::tie(x, y) = t1;
    std::cout << x << " " << y << std::endl;

    // concatenating tuples
    // take two tuples and combine them together, into one tuple
    std::tuple t3 = std::tuple_cat(t1, t2);  // in tutorial, here he had to declare the type, otherwise he will get error, but mine seems to be working 
    std::cout << std::get<3>(t3) << std::endl;
    auto t4 = std::tuple_cat(t1, t3, t2);

    return 0;
}