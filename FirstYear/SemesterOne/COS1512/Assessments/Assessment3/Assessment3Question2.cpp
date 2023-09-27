#include <iostream>
#include <string>
using namespace std;

class Module
{
private:
    string moduleCode;
    string moduleName;
    float assignmentMark;
    float yearMark;
    float finalMark;
public:
    // Default constructor
    Module()
    {
        moduleCode = "";
        moduleName = "";
        assignmentMark = 0.0;
        yearMark = 0.0;
        finalMark = 0.0;
    }
    // Overloaded constructor
    Module(string _moduleCode, string _moduleName, float _assignmentMark, float _yearMark)
    {
        moduleCode = _moduleCode;
        moduleName = _moduleName;
        assignmentMark = _assignmentMark;
        yearMark = _yearMark;
        finalMark = 0.0;
    }
    // Setters/Mutators
    void setModuleCode(string _moduleCode)
    {
        moduleCode = _moduleCode;
    }
    void setModuleName(string _moduleName)
    {
        moduleName = _moduleName;
    }
    void setAssignmentMark(float _assignmentMark)
    {
        assignmentMark = _assignmentMark;
    }
    void setYearMark(float _yearMark)
    {
        yearMark = _yearMark;
    }
    void setFinalMark(float _finalMark)
    {
        finalMark = _finalMark;
    }
    // Getters/Accessors
    string getModuleCode()
    {
        return moduleCode;
    }
    string getModuleName()
    {
        return moduleName;
    }
    float getAssignmentMark()
    {
        return assignmentMark;
    }
    float getYearMark()
    {
        return yearMark;
    }
    float getFinalMark()
    {
        return finalMark;
    }
    void CalculateFinalMark()
    {
        finalMark = (assignmentMark+yearMark)/2;
    }
};

int main()
{
    // Construction of employee one and two
    Module COS1512("COS1512", "Introduction to Programming II", 95.00, 80);
    // Calculating Final Mark
    COS1512.CalculateFinalMark();
    // Displaying the details of the module
    cout << "Module Code: " << COS1512.getModuleCode()
    << " " << endl
    << "Module Name: " << COS1512.getModuleName()
    << " " << endl
    << "Assignment Mark: " << COS1512.getAssignmentMark()
    << " " << endl
    << "Year Mark: " << COS1512.getYearMark()
    << " " << endl
    << "Final Mark: " << COS1512.getFinalMark();

    return 0;
}
