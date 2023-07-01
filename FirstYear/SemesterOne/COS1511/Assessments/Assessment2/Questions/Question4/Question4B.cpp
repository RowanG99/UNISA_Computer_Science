#include <iostream>
#include <string>

using namespace std;

// isEqual will return a string TRUE or false if the characters are equal
string isEqual(char firstChar, char secondChar)
{
    if(firstChar == secondChar)
    {
        return "TRUE";
    }
    else
    {
        return "FALSE";
    }
}

int main()
{
    char first = ' ', second = ' ';
    // Obtaining the users input
    cout << "Please provide the first character: " << endl;
    cin >> first;
    cout << "Please provide the second character: " << endl;
    cin >> second;
    // Passing through the first and second characters
    cout << isEqual(first, second);
    return 0;
}
