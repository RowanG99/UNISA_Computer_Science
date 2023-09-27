#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string firstName;
    string lastName;
    float salary;
public:
    // Default constructor
    Employee()
    {
        firstName = "";
        lastName = "";
        salary = 0.0;
    }
    // Overloaded constructor
    Employee(string _firstName, string _lastName, float _salary)
    {
        firstName = _firstName;
        lastName = _lastName;
        salary = _salary;
    }
    // Setters/Mutators
    void setFirstName(string _firstName)
    {
        firstName = _firstName;
    }
    void setLastName(string _lastName)
    {
        lastName = _lastName;
    }
    void setSalary(float _salary)
    {
        salary = _salary;
    }
    // Getters/Accessors
    string getFirstName()
    {
        return firstName;
    }
    string getLastName()
    {
        return lastName;
    }
    float getSalary()
    {
        return salary;
    }
    void raiseSalary()
    {
        salary *= 1.10;
    }
};

int main()
{
    // Construction of employee one and two
    Employee employeeOne("Joe", "Soap",145600.00);
    Employee employeeTwo;
    // Variable declaration
    string employeeTwoFirstName, employeeTwoSecondName;
    float employeeTwoSalary;
    // User input
    cout << "Enter employee two's first name, second name and salary: " << endl;
    cin >> employeeTwoFirstName >> employeeTwoSecondName >> employeeTwoSalary;
    // Setting input to employee two object
    employeeTwo.setFirstName(employeeTwoFirstName);
    employeeTwo.setLastName(employeeTwoSecondName);
    employeeTwo.setSalary(employeeTwoSalary);
    // Increasing the salary of the employees
    employeeOne.raiseSalary();
    employeeTwo.raiseSalary();
    // Displaying the details of the employees
    cout << "Annual salaries for employee one and employee two: " << endl;
    cout << "Employee one salaries: R" << employeeOne.getSalary() << endl;
    cout << "Employee two salaries: R" << employeeTwo.getSalary() << endl;

    return 0;
}

