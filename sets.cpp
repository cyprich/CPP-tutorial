#include <iostream>
#include <set>

int main() {
    // create set
    std::set<char> s1 = {'D', 'C', 'D', 'D', 'C'};

    // add/insert to set
    s1.insert('F');

    // remove/earse from set
    s1.erase('D');
 
    // check whenever set does not contain value
    if (s1.find('C') == s1.end()) {
        std::cout << "element C not found" << std::endl;
    } else {
        std::cout << "C is there" << std::endl;
    }

    // iterate through set
    for (std::set<char>::iterator i = s1.begin(); i != s1.end(); i++) {
        std::cout << *i << std::endl;
    }
    

    return 0;
}