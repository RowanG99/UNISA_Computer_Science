#include <iostream>
using namespace std;

int main()
{
    int lightBulbsWatts = 0, lifeExpectancy = 0;
    cout << "Average life expectancy (in hours) of a lightbulb based on the bulb’s wattage." << endl;
    cout << "Please provide the light bulb's wattage." << endl;
    // Obtain the users input
    cin >> lightBulbsWatts;

    // Switch statement to assign correct values
    switch(lightBulbsWatts)
    {
    case 25:
        lifeExpectancy = 25000;
        break;
    case 40:
    case 60:
        lifeExpectancy = 1000;
        break;
    case 75:
    case 100:
        lifeExpectancy = 750;
        break;
    default:
        lifeExpectancy = 0;
         cout << "There was an error";
    }
    // Display output
    cout << "The average life expectancy (in hours) of the lightbulb you provided; " << lightBulbsWatts << " watts: " << lifeExpectancy << endl;


    return 0;
}
