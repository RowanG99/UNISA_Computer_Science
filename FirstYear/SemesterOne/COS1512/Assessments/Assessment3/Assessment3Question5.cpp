#include <iostream>
#include <string>
using namespace std;

class Date
{
public:
//constructors
    Date()
    {
        theday = 14;
        themonth = 9;
        theyear = 1752;
    };
    Date(int _day, int _month, int _year)
    {
        theday = _day;
        themonth = _month;
        theyear = _year;
    };
// Setters/Mutators
    int getDay()
    {
        return theday;
    };
    int getMonth()
    {
        return themonth;
    };
    int getYear()
    {
        return theyear;
    };
// Getters/Accessors
    void setDay(int _day)
    {
        theday = _day;
    };
    void setMonth(int _month)
    {
        themonth = _month;
    };
    void setYear(int _year)
    {
        theyear = _year;
    };
//operators to calculate next and previous days
    Date &operator++()
    {
       return *this;
    };
    Date &operator--()
    {
        return *this;
    };
    bool operator<(const Date &d)
    {
        return false;
    };
private:
//the current day month and year
    int theday;
    int themonth;
    int theyear;
//return the length of current month, taking into
//account leap years
    int monthLength();
};

int main()
{
    Date d1;
    cout << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear() << endl;
    d1.setDay(28);
    d1.setMonth(2);
    d1.setYear(2000);
    d1.setDay(1);
    d1.setMonth(1);
    d1.setYear(2002);
    cout << d1.getDay() << "/" << d1.getMonth() << "/" << d1.getYear() << endl;
    d1.setDay(31);
    d1.setMonth(12);
    d1.setYear(2002);
    return 0;
}
