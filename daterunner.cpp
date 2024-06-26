// creating Date data members (instances)
#include <iostream>
#include "date.h"

int main() {
    // Static objects
    Date defaultDate;
    Date schoolStart(1, 9, 2024);

    std::cout << defaultDate.getShortDate() << std::endl;
    std::cout << schoolStart.getShortDate() << std::endl;
    defaultDate.setDay(31);
    std::cout << defaultDate.getShortDate() << std::endl;


    // Dynamic objects
    Date* birthday = new Date(4, 6, 2003);
    
    std::cout << birthday->getShortDate() << std::endl;
    birthday->setDay(13);
    std::cout << birthday->getShortDate() << std::endl;

    return 0;
}