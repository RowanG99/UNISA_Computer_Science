#include <iostream>
#include <iomanip>
using namespace std;

// Display the header message
void printHeading()
{
    cout << "***************************************************\n";
    cout << "\t\tGOLDEN SALES COMPANY\n";
    cout << " This program inputs the number of items sold by a\n";
    cout << " Salesperson and prints the amount of pay due.\n";
    cout << "***************************************************\n";
}

// calcualte the amount due
void calculatePay(int noItems)
{
    const float PRICE = 12.50;
    float amount = 0;
    amount = noItems * PRICE;

    cout << "The amount pay due is R" << fixed << setprecision(2) << amount << endl;
}
int main()
{
    float noItemsSold = 0.0;
    printHeading();
    cout << "Please input the number of items sold:" << endl;
    cin >> noItemsSold;
    calculatePay(noItemsSold);
    return 0;
}
