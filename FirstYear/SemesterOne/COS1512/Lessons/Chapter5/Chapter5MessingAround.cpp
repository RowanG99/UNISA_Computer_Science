#include <iostream>

void initialScreen();
double fahrenheitToCelsius(double fahrenheit);
void showResults(double fahrenheit, double celsius);
void getInput(double& fVariable);
void getNumbers(int& input1, int& input2);
void swapValues(int& value1, int& value2);
void showResults(int output1, int output2);

int main()
{
    using namespace std;
    int firstNum = 0, secondNum = 0;
    getNumbers(firstNum, secondNum);
    swapValues(firstNum, secondNum);
    showResults(firstNum, secondNum);
//    double fTemperature = 0, cTemperature = 0;
//
//    initialScreen();
//    getInput(fTemperature);
//    cTemperature = fahrenheitToCelsius(fTemperature);
//    showResults(fTemperature, cTemperature);

    return 0;
}

void initialScreen()
{
    using namespace std;
    cout << endl;
}

double fahrenheitToCelsius(double fahrenheit)
{
    return ((5.0/9.0)*(fahrenheit - 32));
}

void showResults(double fahrenheit, double celsius)
{
    using namespace std;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << fahrenheit << " degrees Fahrehneit is equivalent to " << celsius << " degrees Celsius." << endl;
}

void getInput(double& fVariable)
{
    using namespace std;
    cout << "I will convert a Fahrenheit tempreature to Celsius. Enter a temperature in Fahrenheit:"<< endl;
    cin >> fVariable;
}

void getNumbers(int& input1, int& input2)
{
    using namespace std;
    cout << "Enter two integers: ";
    cin >> input1 >> input2;
}

void swapValues(int& value1, int& value2)
{
    int temp;
    temp = value1;
    value1 = value2;
    value2 = temp;
}

void showResults(int output1, int output2)
{
    using namespace std;
    cout << "The numbers swapped: " << output1 << " " << output2;
}
