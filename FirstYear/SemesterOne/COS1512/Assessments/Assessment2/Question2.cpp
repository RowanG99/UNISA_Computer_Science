#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main()
{
    int hour, minute;
    string period;

    // Prompting user to provide required information
    cout << "Provide the hour: ";
    cin >> hour;
    // Asserting that the hour provided meets the 24 hour notation
    assert((hour >= 0) && (hour < 24));
    cout << "Provide the minute: ";
    cin >> minute;
    // Asserting that the minute provided meets the correct notation
    assert((minute >= 0) && (minute < 60));

    // Setting the correct time period
    if(hour < 12)
    {
        period = "AM";
    }
    else
    {
        period = "PM";
    }

    // Mod 12 and the remainder is the correct hour
    hour %= 12;

    // Mod 00 or 0 does not work correctly, need to accommodate for that
    if(hour == 0)
    {
        hour = 12;
    }

    // Displaying the time in 12 hour notation
    cout << "The time of day in 12-hour notation is: " << hour << ":" << minute << " " << period;


    return 0;
}
