#include <iostream>
using namespace std;

int main ()
{
    const int LIMIT = 10;
    int number = 0;
    int zeros = 0;
    int odds = 0;
    int evens = 0;

    // Obtaining the required values
    cout << "Please enter " << LIMIT << " integers, positive, negative, or zeros." << endl;
    cout << "The numbers you entered are:" << endl;

    for (int counter = 1; counter <= LIMIT; counter++)
    {
        // While looping, obtain the users input
        cin >> number;
        if(number == 0)
        {
            // If the number is equal to 0, increment both odds and evens
            zeros++;
            evens++;
        }
        else
        {
            if(number % 2)
            {
                // If there is no remainder, increment evens
                evens++;
            }
            else
            {
                // If there is a remainder, increment odds
                odds++;
            }
        }
    }

    // Display the output
    cout << endl;
    cout << "There are " << evens << " evens, which includes " << zeros << " zeros." << endl;
    cout << "The number of odd numbers is: " << odds << endl;

    return 0;
}
