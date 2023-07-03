#include <iostream>
using namespace std;

// Declaration - calcFees(int nModules, double moduleFees)
double calcFees(int nModules, double moduleFees);
// Declaration - calcFees(int nModules, double moduleFees, int nRepeatingModules, double repeatingModuleFees)
double calcFees(int nModules, double moduleFees, int nRepeatingModules, double repeatingModuleFees);

int main()
{
    bool repeatingModules;
    int nModules, nRepeatingModules;
    double moduleFees, repeatingModuleFees, totalFeesDue;

    // Prompting user to provide required information regardless if they are repeating or not
    cout << "Are you repeating any modules? Enter 1 for yes and 0 for no." << endl;
    cin >> repeatingModules;
    cout << "Please provide the number of modules you are taking for the first time/NOT repeating." << endl;
    cin >> nModules;
    cout << "Please provide the fees of your modules - they are the same price." << endl;
    cin >> moduleFees;

    if(repeatingModules)
    {
        // If the user is repeating, prompt them to provide the required information
        cout << "Please provide the number of modules you are repeating." << endl;
        cin >> nRepeatingModules;
        cout << "Please provide the fees of your repeating modules - they are the same price." << endl;
        cin >> repeatingModuleFees;

        // Calling - calcFees(int nModules, double moduleFees, int nRepeatingModules, double repeatingModuleFees)
        totalFeesDue = calcFees(nModules, moduleFees, nRepeatingModules, repeatingModuleFees);
    }
    else
    {
         // Calling - calcFees(int nModules, double moduleFees)
        totalFeesDue = calcFees(nModules, moduleFees);
    }

    // Displaying payable fees
    cout << "The total amount of fees due by you are: R" << totalFeesDue;

    return 0;
}

// Function - calcFees(int nModules, double moduleFees)
double calcFees(int nModules, double moduleFees)
{
    return nModules*moduleFees;
}
// Function - calcFees(int nModules, double moduleFees, int nRepeatingModules, double repeatingModuleFees)
double calcFees(int nModules, double moduleFees, int nRepeatingModules, double repeatingModuleFees)
{
    return (nModules*moduleFees) + (nRepeatingModules*repeatingModuleFees);
}
