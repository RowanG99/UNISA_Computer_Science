#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

void readAndClean(int& n);

int main()
{
    int n;
    char ans;
    do{
        cout << "Enter an integer and press Enter: ";
        readAndClean(n);
        cout << "That string converts to the integer " << n << endl;
        cout << "Again? (yes/no): ";
        cin >> ans;
        cout << endl;
    }while((ans != 'n') && (ans != 'N'));

    // When we make the size 5, something interesting happens.
//    char someCString[6];
    // h e l l o
    // 0 1 2 3 4

//    cin >> someCString;
    //cout << someCString << endl;

    //cout << someCString[-1];

//    int index = 0;
//    while(someCString[index] != '\0')
//    {
//        someCString[index] = 'X';
//        index++;
//        cout << someCString << endl;
//    }

//    const int SIZE = 5;
//    int index = 0;
//
//    while((someCString[index] != '\0') && (index < SIZE))
//    {
//        someCString[index] = 'X';
//        index++;
//        cout << someCString << endl;
//    }

//    signed char length;
//    char target[6];
//    length = strlen(someCString);
//    if(length < 6)
//    {
//        strcpy(target, someCString);
//    }
//
//    cout << target << "The target"<< endl;
//    cout << someCString << "The original" << endl;

    return 0;
}

void readAndClean(int& n)
{
    const int ARRAY_SIZE = 6;
    char digitString[ARRAY_SIZE];

    char next;
    cin.get(next);
    int index = 0;
    while(next != '\n')
    {
        if((isdigit(next)) && (index < ARRAY_SIZE - 1))
        {
            digitString[index] = next;
            index++;
        }
        cin.get(next);
    }
    digitString[index] = '\0';
    n = atoi(digitString);
}
