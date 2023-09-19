#include <iostream>
#include <string>
using namespace std;

string reverseMyString(string s);
bool isPalindrome(string word);

int main()
{
//    string word;
//    cout << "Enter a word: ";
//    cin >> word;
//    cout << "The reversed word is: " << endl;
//    for(int i = word.size() - 1; i >= 0; i--)
//    {
//        cout << word[i];
//    }
//    cout << endl;
//    cout << reverseMyString(word);
//    cout << isPalindrome(word);
//    cout << endl << "==========================" << endl;
//    string idNum, year, month, day, dateOfBirth;
//    cout << "Enter an ID number: ";
//    cin >> idNum;
//    year = idNum.substr(0,2);
//    month = idNum.substr(2,2);
//    day = idNum.substr(4,2);
//    if(year < "10")
//    {
//        year = "20" + year;
//    }
//    else
//    {
//        year = "19" + year;
//    }
//
//    dateOfBirth = day + '/' + month + '/' + year;
//    cout << dateOfBirth;
    return 0;
}

string reverseMyString(string s)
{
    string ans = "";
    for(int i = 0; i < s.size(); i++)
    {
        ans = s[i] + ans;
    }
    return ans;
}

bool isPalindrome(string word)
{
    return word == reverseMyString(word);
}
