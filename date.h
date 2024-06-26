#include <string>

class Date {
    private:
        int day;
        int month;
        int year;

    public:
        Date();
        Date(int theDay, int theMonth, int theYear): day(theDay), month(theMonth), year(theYear) {}

        int getDay() const {return day;}
        int getMonth() const {return month;}
        int getYear() const {return year;}

        std::string getShortDate() const;

        void setDay(int day) {this->day = day;}
};