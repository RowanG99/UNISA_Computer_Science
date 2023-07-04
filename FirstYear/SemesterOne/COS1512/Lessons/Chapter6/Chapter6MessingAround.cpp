#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
//    ifstream inStream;
//    ofstream outStream;
//
//    inStream.open("infile.dat");
//    outStream.open("outfile.dat");
//    int first, second, third;
//    inStream >> first >> second >> third;
//    outStream << "The sum of the first 3\n"
//              << "numbers in infile.dat\n"
//              << "is " << (first + second + third)
//              << endl;
//    inStream.close();
//    outStream.close();

    char inFileName[16], outFileName[16];
    ifstream inStream;
    ofstream outStream;

    cout << "I will sum three numbers take from an input\n"
         << "file and write the sum to an output file.\n";
    cout << "Enter the input file name (max of 15 characters):\n";
    cin >> inFileName;
    cout << "Enter the output file name (max of 15 characters):\n";
    cin >> outFileName;
    cout << "I will read numbers from the file "
         << inFileName << " and\n"
         << "place the sum in the file "
         << outFileName << endl;

    inStream.open(inFileName);
    if(inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    outStream.open(outFileName);
    if(outStream.fail())
    {
        cout << "Output file opening failed.\n";
        exit(1);
    }
    int first, second, third;

    inStream >> first >> second >> third;
    outStream << "The sum of the first 3\n"
              << "numbers in " << inFileName << endl
              << "is " << (first + second + third)
              << endl;

    inStream.close();
    outStream.close();

    cout << "End of program.\n";

    return 0;
}
