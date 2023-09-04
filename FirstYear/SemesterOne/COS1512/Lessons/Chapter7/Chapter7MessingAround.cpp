#include <iostream>
using namespace std;

int adjustDays(int oldDays);
void testA(int A[]);
int main()
{
//    int score[5];
//    for(int i = 0; i < 5; i++)
//    {
//        score[i] = i+1;
//        cout << score[i] << endl;
//    }

//    int i, score[5], max;
//    cout << "Enter 5 scores: " << endl;
//    cin >> score[0];
//    max = score[0];
//    for(i = 1; i < 5; i++)
//    {
//        cin >> score[i];
//        if(score[i] > max)
//        {
//            max = score[i];
//        }
//    }
//
//    cout << "The highest score is " << max << endl;
//    cout << "The score and their differences from the highest are: " << endl;
//    for(i = 0; i < 5; i++)
//    {
//        cout << score[i] << " off by " << (max - score[i]) << endl;
//    }

//    char books[6] = {'A', 'B', 'C','A', 'B', 'C'};
//    for(int i = 0; i < 6; i++)
//    {
//        cout << books[i] << endl;
//    }

//    for(int x : books)
//    {
//        cout << x << endl;
//    }

//    int arr[4] = {2,3,4,5};
//    for(int x : arr)
//    {
//        cout << x << " ";
//    }
//    cout << endl;
//    for(int& x : arr)
//    {
//        x++;
//    }
//    for(auto x : arr)
//    {
//        cout << x++ << " ";
//    }

//    const int NUMBER_OF_EMPLOYEES = 3;
//    int vacation[NUMBER_OF_EMPLOYEES], number;
//    cout << "Enter allowed vacation days for employees 1 - " << NUMBER_OF_EMPLOYEES << endl;
//    for(number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
//    {
//        cin >> vacation[number - 1];
//    }
//    for(number = 0; number < NUMBER_OF_EMPLOYEES; number++)
//    {
//        vacation[number] = adjustDays(vacation[number]);
//    }
//    cout << "The revised number of vacation  days are" << endl;
//    for(number = 1; number <= NUMBER_OF_EMPLOYEES; number++)
//    {
//        cout << "Employee number " << number << " vacation days = " << vacation[number-1] << endl;
//    }

    int a[2] = {1,2};
    cout << a[0] << endl;
    testA(a);
    cout << a[0];

    return 0;
}

//int adjustDays(int oldDays)
//{
//    return (oldDays + 5);
//}

void testA(int A[])
{
    for(int i = 0; i < 3; i++)
    {
        A[i]++;
    }
}
