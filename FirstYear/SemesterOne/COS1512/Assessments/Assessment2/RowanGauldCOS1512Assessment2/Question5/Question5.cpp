#include <iostream>
#include <cstring>
using namespace std;

// Declaration - void toLowerCase(char word[])
void toLowerCase(char word[]);

int main(void){
	char inputString[60];
	char words[10][20];
	int i,j=0,counter=0;
	// Prompting the user to provide a string
	cout << "Enter the person's name in the following format: first name, then middle name or initial, and then last name:\n";
	gets(inputString);

	// For the length of the provided string
	for(i=0;i<=(strlen(inputString));i++){
        // Check if input string contains an ' ' or ending character - \0
		if(inputString[i]==' '||inputString[i]=='\0'){
			words[counter][j]='\0';
			counter++;
			j=0;
		}
		else
		{
			words[counter][j]=inputString[i];
			j++;
		}
	}

	if(counter==3){
		toLowerCase(words[2]);
		toLowerCase(words[0]);
		words[1][0]=toupper(words[1][0]);
		printf("%s, %s %c.\n",words[2],words[0],words[1][0]);
	}else if(counter==2){
		toLowerCase(words[1]);
		toLowerCase(words[0]);
		printf("%s, %s\n",words[1],words[0]);
	}else if(counter==1){
		toLowerCase(words[0]);
		printf("%s\n",words[0]);
	}else{
		printf("Wrong input data.\n\n");
	}
	return 0;
}

// Function - void toLowerCase(char word[])
void toLowerCase(char word[]){
	word[0]=toupper(word[0]);
   for(int i=1; word[i]!='\0'; i++)
   {
      word[i]=tolower(word[i]);
   }
}
