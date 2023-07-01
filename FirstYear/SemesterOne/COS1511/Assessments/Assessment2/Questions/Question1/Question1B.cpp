#include <iostream>
using namespace std;

int main()
{
     //A
    for(int i = 1; i <= 1; i++){
        cout << "*";
    }
    cout << endl;
     //Result: *

     //B
    for(int i = 2; i >= 2; i++){
        cout << "*";
    }
    cout << endl;
     //Result: infinite loop of *

     //C
    for(int i = 1; i <= 1; i--){
        cout << "*";
    }
    cout << endl;
     //Result: infinite loop of *

     //D
    for(int i = 12; i >= 9; i--){
        cout << "*";
    }
    cout << endl;
     //Result: ****

     //E
    for(int i = 0; i <= 5; i++){
        cout << "*";
    }
    cout << endl;
     //Result: ******

     //F
    for(int i = 1; i <= 5; i++){
        cout << "*";
        i = i + 1;
    }
    cout << endl;
     //Result: ***
    return 0;
}
