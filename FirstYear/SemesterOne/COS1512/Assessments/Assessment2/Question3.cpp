#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    ifstream inStream;
    ofstream outStream;

    inStream.open("monthlystatement.dat");
    outStream.open("accountstatement.dat");

    if(inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }

    if(outStream.fail())
    {
        cout << "Output file opening failed.\n";
        exit(1);
    }

    string test;

    inStream >> test;

    cout << test;



    return 0;
}
