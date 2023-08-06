#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Declaration - split(string sentence, char t)
vector<string> split(string sentence, char t);

int main()
{
    // Prompting the user to provide a string and a delimiter
	cout<<"Enter string : ";
	string sentence;
	cin>>sentence;
	char delimiter;
	cout<<"Enter delimiter : ";
	cin>>delimiter;
	vector<string>vectorSentence;

	// Calling - split(string s, char t)
	vectorSentence = split(sentence,delimiter);
	// Output each string produced by - split(string sentence, char t)
	for(int i=0; i<vectorSentence.size(); i++)
	{
		cout<<vectorSentence[i]<<" ";
	}

	return 0;
}

// Function - - split(string sentence, char t)
vector<string> split(string sentence, char delimiter)
{
	vector<string>vectorSentence;
	string str="";

	for(int i=0; i<sentence.length(); i++)
	{
	    // If character is the delimiter
		if(sentence[i] == delimiter)
		{
		    //Append empty string
			vectorSentence.push_back(str);
			str="";
		}
		else{
            // Concat character to string
			str += sentence[i];
		}
	}

	// Append the string
	vectorSentence.push_back(str);
	return vectorSentence;
}
