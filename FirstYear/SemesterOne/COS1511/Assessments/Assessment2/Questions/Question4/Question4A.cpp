#include <iostream>
using namespace std;

int integerPower(int base, int exponent)
{
    int result = 1;
    int counter = 1;
    // while the counter is less than the exponent, multiple the result to the base
    while(counter <= exponent){
        result *= base;
        counter ++;
    }
    return result;
}

int main()
{

    int b = 0, e = 0;
    // Obtain the users input
    cout << "Provide a base:" << endl;
    cin >> b;
    cout << "Provide an exponent:" << endl;
    cin >> e;
    // Passing the base and exponent to the function
    cout << integerPower(b,e);
    return 0;
}
