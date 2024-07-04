#include <iostream>
#include <map>
#include <string>

int main() {
    // create a map
    std::map<std::string, std::string> myDictionary = {
        {"apple", "jablko"},
        {"banana", "banan"},
        {"orange", "pomaranc"}
    };

    /*
    // access map value
    std::cout << myDictionary["apple"] << std::endl;
    std::cout << myDictionary["coconut"] << std::endl;

    // insert new value
    myDictionary["watermelon"] = "melon";
    myDictionary.insert(std::pair<std::string, std::string>("watermelon", "melon"));
    std::cout << myDictionary["watermelon"] << std::endl;;

    // erase pair
    myDictionary.erase("banana");
    std::cout << myDictionary["banana"] << std::endl;
    */

    // iterate through the map
    for (std::map<std::string, std::string>::iterator i = myDictionary.begin(); i != myDictionary.end(); i++)
    {
        // myDictionary.begin() gives us iterator which is a pointer
        std::cout << (*i).first << " = " << (*i).second << std::endl;
    
        std::cout << i->first << " = " << i->second << std::endl << std::endl;
    }
    
}