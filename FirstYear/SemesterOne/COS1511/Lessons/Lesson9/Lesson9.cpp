#include <iostream>

using namespace std;

int main()
{
    float price, temp;

    cout << "Enter the price of the first item: ";
    cin >> price;
    temp = price;
    while (price != 0.0)
    {
        cout << "Enter a price: ";
        cin >> price;
        temp += price;
    }

    cout << "The sum of prices is: " << temp;

    return 0;
}
