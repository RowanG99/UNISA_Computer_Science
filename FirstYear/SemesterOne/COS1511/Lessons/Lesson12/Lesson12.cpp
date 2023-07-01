#include <iostream>
using namespace std;

int main()
{
//    const float AFTERNOON_RATE = 32.50;
//    const float EVENING_RATE = 44.00;
//    float wage = 0.0;
//    int startingTime = 0, finishingTime = 0;
//
//    cout << "Wage calculation" << endl;
//    cout << "================" << endl;
//    cout << "Starting time: ";
//    cin >> startingTime;
//    cout << "Finishing time: ";
//    cin >> finishingTime;
//
//    if(startingTime < 6)
//    {
//        if(finishingTime <=6)
//        {
//            wage = (finishingTime - startingTime) * AFTERNOON_RATE;
//        }
//        else
//        {
//            wage = (6 - startingTime) * AFTERNOON_RATE + (finishingTime - 6) * EVENING_RATE;
//        }
//    }
//    else
//    {
//        wage = (finishingTime - startingTime) * EVENING_RATE;
//    }
//
//
//    cout.setf(ios::fixed);
//    cout.precision(2);
//    cout << "They payment is R " << wage << endl;
    float rate = 0.0;
    int length = 0, width = 0, thickness = 0;

    cout << "Please provide the dimensions (length width thickness): " << endl;
    cin >> length, width, thickness;

    if(length <= 235 && width <= 120 && thickness <= 5)
    {
        rate = 2.50;
    }
    else if(length <= 250 && width <= 176 && thickness <= 10)
    {
        rate = 5.00;
    }
    else if(length <= 353 && width <= 250 && thickness <= 30)
    {
        rate = 6.25;
    }
    else
    {
        rate = -1;
    }

    if(rate != -1)
    {
        cout << "The postal rate is R" << rate << endl;
    }
    else
    {
        cout << "Too large - regard as parcel" << endl;
    }

    return 0;
}
