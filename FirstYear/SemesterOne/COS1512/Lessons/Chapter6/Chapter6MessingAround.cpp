#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;
//void makeNeat(ifstream &messyFile, ofstream &neatFile,int numberAfterDecimalpoint, int fieldWidth);

int main( )
{
/////////////////////
//    char character;

//    cin.get(character);
//    cout << character;

     cout << "Enter a line of input and I will echo it:\n";
     char symbol;

     do
     {
         cin.get(symbol);
         cout.put(symbol);
     }while(symbol != '\n');
     cout << "That's all folks.";
/////////////////////


//    ifstream fin;
//    ofstream fout;
//    fin.open("rawdata.dat");
//    if (fin.fail( ))
//    {
//        cout << "Input file opening failed.\n";
//        exit(1);
//    }
//    fout.open("neat.dat");
//    if (fout.fail( ))
//    {
//        cout << "Output file opening failed.\n";
//        exit(1);
//    }
//
//    makeNeat(fin, fout, 5, 12);
//    fin.close( );
//    fout.close( );
//
//    cout << "End of program.\n";
    return 0;
}


//void makeNeat(ifstream &messyFile, ofstream &neatFile,
//              int numberAfterDecimalpoint, int fieldWidth)
//{
//    neatFile.setf(ios::fixed);
//    neatFile.setf(ios::showpoint);
//    neatFile.setf(ios::showpos);
//    neatFile.precision(numberAfterDecimalpoint);
//    cout.setf(ios::fixed);
//    cout.setf(ios::showpoint);
//    cout.setf(ios::showpos);
//    cout.precision(numberAfterDecimalpoint);
//
//    double next;
//    string whiteSpace = " ";
//    while (messyFile >> next || messyFile >> whiteSpace)
//    {
//        cout << setw(fieldWidth) << next << endl;
//        neatFile << setw(fieldWidth) << next << endl;
//    }
//}
