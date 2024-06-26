#include "date.h"

Date::Date() {
    day = 1;
    month = 1;
    year = 1970;
}

std::string Date::getShortDate() const {
    return std::to_string(day) + ". " + std::to_string(month) + ". " + std::to_string(year);
}


