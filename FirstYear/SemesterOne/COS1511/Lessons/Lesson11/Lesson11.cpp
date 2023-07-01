#include <iostream>
using namespace std;

int main()
{
//    int value = 0;
//
//    while(value < 10 || value > 20){
//        cout << "Please provide a value between 10 and 20." << endl;
//        cin >> value;
//    }
//
//    cout << "The value is " << value;

//    int i = 2;
//    cin >> i;
//    cout << "i < 10 is " << (i < 10) << endl;

//    if(i){
//        cout << "True" << endl;
//    }
//    else{
//        cout << "False" << endl;
//    }

//    if(i != 0){
//        cout << "True" << endl;
//    }
//    else{
//        cout << "False" << endl;
//    }

//    int x = 0, y = 0, z = 0;
//    cout << "Enter to numbers to determine if the first is a factor of the second." << endl;
//    cin >> x >> y;
//
//    z = y % x;
//
//    if(z == 0){
//        cout << x << " is a factor of " << y << endl;
//    }
//    else{
//        cout << x << " is not a factor of " << y << endl;
//    }


//    int n1, n2;
//    cout << "Enter two integers: ";
//    cin >> n1 >> n2;
//    if (n1 > n2)
//        cout << n1 << " is greater than " << n2 << endl;
//    else
//        cout << n1 << " is not greater than " << n2 << endl;

    int x, y;

    bool factorFound = false;

    cout << "Enter a positive integer: ";
    cin >> y;
    x = 2;
    while(x != y && !factorFound){
        if(y % x == 0){
            factorFound = true;
        }
    x++;
    }
    if(x == y){
        cout << y << " is a prime!" << endl;
    }
    else{
        cout << y << " is not a prime!" << endl;
    }

    return 0;
}
