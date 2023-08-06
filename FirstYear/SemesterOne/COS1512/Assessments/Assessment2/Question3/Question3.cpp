#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getAccountNumber(ifstream &originalFile);

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

    string accountNumber;
    accountNumber = getAccountNumber(inStream);
    cout << accountNumber;
//    makeNeat(fin, fout, 5, 12);
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



    return 0;
}

string getAccountNumber(ifstream &originalFile)
{
    char next;
    string accountNo;
    do
    {
        accountNo += next;
        originalFile >> next;
    }
    while(next != ' ');
    cout << "That's all folks.";

    return accountNo;
}
