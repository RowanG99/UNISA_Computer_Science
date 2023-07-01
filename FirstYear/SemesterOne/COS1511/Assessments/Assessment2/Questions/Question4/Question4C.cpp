#include <iostream>
#include <string>

using namespace std;

void twice(int x, int y)
{
    int twiceOfX = 0, twiceOfY = 0;
    // Multiplying the paramters/ inputted values by 2
    twiceOfX = x*2;
    twiceOfY = y*2;
    // Displaying the results
    cout << "Double integer one is: " << twiceOfX << " and double integer two is: " << twiceOfY << endl;
}

int main()
{
    int first = 0, second = 0;
    // Obtaining the users input
    cout << "Please provide the first integer." << endl;
    cin >> first;
    cout << "Please provide the second integer." << endl;
    cin >> second;
    // Passing the variables into the function
    twice(first, second);
    return 0;
}
