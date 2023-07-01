#include <iostream>

using namespace std;

int main()
{
    // Exercise 1
    int fahrenheit = 0, celsius = 0;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = 5 * (fahrenheit - 32) / 9;
    cout << "Celsius = " << celsius << endl;

    // Exercise 2
    int items = 0, itemsPerBox = 0, boxes = 0, remainder = 0;
    cout << "Please enter how many items are to be packed: ";
    cin >> items;
    cout << "How many items fit in a box? ";
    cin >> itemsPerBox;
    boxes = items / itemsPerBox;
    remainder = items % itemsPerBox;
    cout << "You will need " << boxes << " boxes." << endl;
    cout << "There will be " << remainder << " items left over." << endl;


    return 0;
}
