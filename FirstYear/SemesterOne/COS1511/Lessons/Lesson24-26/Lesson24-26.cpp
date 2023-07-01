#include <iostream>
using namespace std;

int main()
{
    int examMarks[10];

    for(int i = 0; i < sizeof(examMarks)/sizeof(*examMarks); i++)
    {
        cout << "Enter a mark: ";
        cin >> examMarks[i];
    }

    cout << "The marks are: " << endl;
    for(int i = 0; i < sizeof(examMarks)/sizeof(*examMarks); i++)
    {
        cout << examMarks[i] << endl;
    }

    return 0;
}
