#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double ave(double n1, double n2);
double ave(double n1, double n2, double n3);

int main()
{
    // Playing around with the time function
    cout << time(0)<< " Secs " << endl;
    cout << time(0) / 60 << " Mins " << endl;
    cout << time(0) / 3600<< " Hrs " << endl;
    cout << time(0) / 86400<< " Days " << endl;
    cout << time(0) / 86400 / 365.2425<< " Years " << endl;

//    srand(1);
//    cout << rand();
    srand(time(0));
//    cout << rand();

    int die = (rand() % 6)+1;
    cout << die << endl;

    cout << 9/2 << endl;
    cout << 9/2.0 << endl;
    cout << 9.0/2.0 << endl;

    int totalCandy = 9, numberOfPeople = 2;
    double candyPerPerson = 0;
    candyPerPerson = static_cast<double>(totalCandy) / numberOfPeople;
    cout << candyPerPerson << endl;

    cout << "The average of 2.0, 2.5 and 3.0 is "
         << ave(2.0, 2.5, 3.0) << endl;

    cout << "The average of 4.5 and 5.5 is "
         << ave(4.5, 5.5);

    return 0;
}

double ave(double n1, double n2)
{
    return ((n1 + n2) / 2.0);
}

double ave(double n1, double n2, double n3)
{
    return ((n1 + n2 + n3)/3.0);
}
