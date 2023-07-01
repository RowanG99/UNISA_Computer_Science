#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//int myAbs(int i)
//{
//    if(i < 0)
//    {
//        i *= -1;
//    }
//    return i;
//}

//float calcAreaOfTriangle(float a, float b, float c)
//{
//    float area;
//    area = (a + b + c)/2;
//    return area;
//}
//
//void printRow(int rowLength)
//{
//    int i = 0;
//    while(i < rowLength)
//    {
//        cout << '*';
//        i++;
//    }
//    cout << endl;
//}
//
//void printRightTraingle(int baseLength)
//{
//    for(int i = 1; i <= baseLength; i++)
//    {
//        for(int j = 1; j <= i; j++)
//        {
//            cout << '*';
//        }
//        cout << endl;
//    }
//
//}

void foo(int& i)
{
    i = 5;
    cout << "I: " << i << endl;
}

int main()
{
//    int secret, guess;
//    srand(time(NULL));
//    secret = rand() % 10 + 1;
//    do{
//        cout << "Provide a number between 1 and 10." << endl;
//        cin >> guess;
//        if(secret<guess) cout << "Try lower value." << endl;
//        else if(secret>guess) cout << "Try higher value." << endl;
//    }while(secret!=guess);
//    cout << "Correct!" << endl;


//    cout << myAbs(-3);
//    cout << calcAreaOfTriangle(3,4,5);
//    printRow(5);
//    printRightTraingle(5);

    int x = 3;
    foo(x);
    cout << "X: " << x << endl;
    return 0;
}
