#include <iostream>

using namespace std;

int main()
{
    float valueOne = 0.0, valueTwo = 0.0, valueThree = 0.0, sum = 0.0;

    cout << "Enter three values: ";
    cin >> valueOne >> valueTwo >> valueThree;

    sum = valueOne + valueTwo + valueThree;
    cout << endl << "The sum of the values are " << sum << endl;

    //Exercise 1
    float length = 0, width = 0, area = 0;

    cout << "Provide the length and width: ";
    cin >> length >> width;
    area = length * width;

    cout.setf(ios::fixed);
    cout.precision(3);

    cout << "The area is " << area;

    return 0;
}
