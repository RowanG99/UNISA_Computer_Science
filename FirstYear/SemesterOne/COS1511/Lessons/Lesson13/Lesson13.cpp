#include <iostream>
using namespace std;

int main()
{
    float x = 0, y = 0, result = 0.0;
    char operation = 'X';

    cout << "Please provide no.1: " << endl;
    cin >> x;
    cout << "Please provide no.2: " << endl;
    cin >> y;
    cout << "Please provide an operation to perform; A, S, M or D." << endl;
    cin >> operation;

    switch(operation)
    {
    case 'A':
        result = x + y;
        break;
    case 'S':
        result = x - y;
        break;
    case 'M':
        result = x * y;
        break;
    case 'D':
        if(y == 0)
        {
            result = 0.0
        }
        else
        {
            result = x / y;
        }
        break;
    default:
        result = 0.0;
        break;
    }

    cout << "The result is " << result;

    return 0;
}
