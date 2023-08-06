#include <iostream>
#include <fstream>
using namespace std;

// Declaration - writeInputFile()
void writeInputFile();

int main()
{
    string inFile;
    string outFile;

    //Writing input to activity.dat
    writeInputFile();

    //Prompting the user to provide input file name
    cout << "Please enter name of input file: ";
    cin >> inFile;
    //Prompting the user to provide output file name
    cout << "Please enter name of output file: ";
    cin >> outFile;

    //Reading input file
    ifstream read(inFile);

    if (!read)
    {
        cout << inFile << "Does not exist...";
        exit(0);
    }

    //Reading each character and checking if it matches the code
    ofstream write(outFile);
    char ch;

    while (read.get(ch))
    {
        switch (ch)
        {
        case '0':
            ch = 's';
            break;

        case '1':
            ch = 'g';
            break;

        case '2':
            ch = 'o';
            break;

        case '3':
            ch = 'y';
            break;

        case '4':
            ch = 'v';
            break;

        case '5':
            ch = 'n';
            break;

        case '6':
            ch = 'f';
            break;

        case '7':
            ch = 'j';
            break;
        }
        //Reading output file
        write << ch;
    }
    return 0;
}

// Function - writeInputFile()
void writeInputFile()
{
    ofstream wrt("activity.dat");
    wrt << "We h2pe that 32u e5723ed the acti4it3. \n";
    wrt << "A6ter 32u ha4e c2mpleted the acti4it3, 0e5d 32ur re0ult t2: \n";
    wrt << "The Acti4it3 c2mpetiti25, Bett3 Da4i0 0treet 99, Auckla5d Park, \n";
    wrt << "989, a5d 0ta5d a cha5ce t2 wi5 a hamper c250i0ti51 26 c2l2uri51 \n";
    wrt << "a5d acti4it3 b22k0, c2l2uri51 pe5cil0 a5d pe50.";
    wrt.close();
}
