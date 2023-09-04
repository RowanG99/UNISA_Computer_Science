#include <iostream>
using namespace std;

const int NUMBER_OF_PLANTS = 4;

void inputData(int arr[], int lastPlantNumber);
//Precondition: lastPlantNumber is the declared size of the array a.
//Postcondition: for plantNumber = 1 through lastPlantNumber.
//a[plantNumber-1] equals the total production for plant number plantNumber.
/*For plantNumber equal to each of 1, 2, through lastPlantNumber do the
following:
Read in all the data for plant whose number is plantNumber.
Sum the numbers.
Set production[plantNumber −1] equal to that total.
*/
void scale(int arr[], int size);
//Precondition: a[0] through a[size-1] each has a nonnegative value.
//Postcondition: a[i] has been changed to the number of 1000s (rounded to an int) that were originally in a[i], for all i such that 0 <= 1 <= size - 1.
void graph(const  int asteriskCount[], int lastPlantNumber);
//Precondition: astriskCount[0] through astriskCount[lastPlantNumber-1]
//Postcondition: a bar graph has been displayed saying that plant number N has produced asteriskCount[N-1] 1000s of units, for each N such that 1 <= N <= lastPlantNumber
void getTotal(int& sum);
//Reads nonnegative integers from the keyboard and places their total in sum

int main()
{
    int production[NUMBER_OF_PLANTS];
    char ans;

    do
    {
        inputData(production, NUMBER_OF_PLANTS);
        cout << endl << "Total production for each number of plants 1 through 4: " << endl;
        for(int number = 1; number <= NUMBER_OF_PLANTS; number++)
        {
            cout << production[number-1] << " " << endl << "Test again? Y/N: ";
            cin >> ans;
        }
    }while((ans !='N') && (ans != 'n'));

    cout << endl;

    //inputData(production, NUMBER_OF_PLANTS);
    //scale(production, NUMBER_OF_PLANTS);
    //graph(production, NUMBER_OF_PLANTS);

    return 0;
}

void inputData(int arr[], int lastPlantNumber)
{
    for(int plantNumber = 1; plantNumber <= lastPlantNumber; plantNumber++)
    {
        cout << endl;
        cout << "Enter production data for plant number " << plantNumber << endl;
        getTotal(arr[plantNumber - 1]);
    }
}

void getTotal(int& sum)
{
    cout << "Enter number of units produced by each department." << endl << "Append a negative number to the end of the list." << endl;
    sum = 0;
    int next;
    cin >> next;
    while(next >= 0)
    {
        sum += next;
        cin >> next;
    }
    cout << "Total = " << sum << endl;
}
