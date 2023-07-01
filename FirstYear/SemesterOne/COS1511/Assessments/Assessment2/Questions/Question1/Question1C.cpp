#include <iostream>
using namespace std;

int main()
{
//    for(int i = 0; i <= 10; i++)
//    {
//        if(i < 5 && i != 2)
//        {
//            cout << 'X';
//        }
//    }
    // Result: XXXX

    int j = 0;
    while(j <= 10)
    {
        if(j < 5 && j != 2)
        {
            cout << 'X';
        }
        j++;
    }
    // Result: XXXX

    return 0;
}
