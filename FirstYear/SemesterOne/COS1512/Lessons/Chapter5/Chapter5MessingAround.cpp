#include <iostream>

void initialScreen();
double fahrenheitToCelsius(double fahrenheit);
void showResults(double fahrenheit, double celsius);

int main()
{
    using namespace std;
    double fTemperature = 0, cTemperature = 0;

    initialScreen();
    cout << "I will convert a Fahrenheit tempreature to Celsius." << endl;
    cin >> fTemperature;
    cTemperature = fahrenheitToCelsius(fTemperature);
    showResults(fTemperature, cTemperature);

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
