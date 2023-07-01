#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << age << endl;

    //Exercise 1
    int first, second, third;

    cout << "Enter 3 numbers: ";
    cin >> first >> second >> third;
    cout << third << " " << second << " " << first << endl;

    //Exercise 3
    int C, F;

    cout << "Provide the F value to be converted: ";
    cin >> F;

    cout << 5 * (F - 32)/9;

    return 0;
}
