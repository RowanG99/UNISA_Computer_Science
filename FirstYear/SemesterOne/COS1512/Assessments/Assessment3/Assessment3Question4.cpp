#include <iostream>
using namespace std;

/*
    Incorrect Code: request for member module, date and time which is of non-class type ExamType[12]
    - These members are private and we are not using any functions that get the values.
    - The constructors do not create anything
*/
//class ExamType
//{
//public:
//    ExamType();
//    ExamType(string m, string v, int t, string d);
//private:
//    string module;
//    string venue;
//    int time;
//    string date;
//};
//int main()
//{
//    ExamType exams[12];
//    for (int i = 0; i < 12; i++)
//        if (exams.module[i] == "COS1512")
//            cout << "COS1512 will be written on "
//                 << exams.date << " at " << exams.time;
//    return 0;
//}

/*
    Correct Code:
*/
class ExamType
{
public:
    ExamType()
    {
        module = "COS1512";
        venue = "Home";
        time = 23;
        date = "20230821";
    };
    ExamType(string _module,string _venue, int _time,string _date)
    {
        module = _module;
        venue = _venue;
        time = _time;
        date = _date;
    };
    string getModule()
    {
        return module;
    };
    string getDate()
    {
        return date;
    };
    int getTime()
    {
        return time;
    };
    string getVenue()
    {
        return venue;
    }
private:
    string module;
    string venue;
    int time;
    string date;
};


int main()
{
    ExamType exams[12];
    for(int i=0; i<12; i++)
    {
        if(exams[i].getModule()=="COS1512")
            cout<<"COS1512 will be written on "
                <<exams[i].getDate()<<" at "<<exams[i].getTime() << endl;
    }
    return 0;
}
