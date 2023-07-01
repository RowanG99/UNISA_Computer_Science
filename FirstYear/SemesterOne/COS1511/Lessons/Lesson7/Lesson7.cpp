#include <iostream>
#include <string>
using namespace std;

int main()
{
    //string name = "";

    //cout << "Please enter your name: " << endl;
    //cin >> name;
    //cout << "Thank you " << name;

    /*
    int n;
    string s;
    cout << "Enter a number: ";
    cin >> n;
    cin.get();
    cout << "Enter a sentence: ";
    getline(cin, s,'\n');
    cout << "The number is " << n << endl;
    cout << "The sentence is " << s << endl;
    */

    //char letter = 'h';

    //cout << letter + 1;

    string title, firstName, surname, fullName;
    char initial;

    cout << "Enter the title: ";
    cin >> title;

    cout << "Enter the first name: ";
    cin >> initial >> firstName;
    cin.get(  );
    cout << "Enter the surname: ";
    getline(cin, surname, '\n');

    fullName = surname + ", " + title + ", " + initial + ".";
    cout << "The rearranged name is " << fullName << endl;

    return 0;
}

