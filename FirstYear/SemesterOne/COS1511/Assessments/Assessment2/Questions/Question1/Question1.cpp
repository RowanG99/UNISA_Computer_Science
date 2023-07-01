#include <iostream>
using namespace std;

int main()
{
    int age = 0, finalMark = 0;
    // Obtaining the age
    cout << "Enter age: ";
    cin >> age;
    // Obtaining the final mark
    cout << "Enter final mark for exam: ";
    cin >> finalMark;
    /* While loop checking whether the age is less than 30 and
       final mark is greater than 65*/
    while(age < 30 && finalMark > 65)
    {
        // Displaying and capturing results
        cout << "Successfully registered for the internship." << endl;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter final mark for exam: ";
        cin >> finalMark;
    }
    // Displaying result if condition is not met
    cout << "Unsuccessfully - unable to register for the internship." << endl;

    return 0;
}
