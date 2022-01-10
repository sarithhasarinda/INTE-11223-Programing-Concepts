//Program for count the total number of words in a Text
using namespace std;
#include <iostream>
#include <cstring>

int main() 
{
	char S[100], *token; //Variable declaration
	int count = 0;

	//Input the string
	cout << "Enter a string :";
	cin.getline(S, 100);

 	token = strtok(S, " ");

 	//Count the word 
 	while(NULL != token)
 	{
 		count++;
 		token = strtok(NULL, " ");
 	}

 	cout << "Word Count : "<<count;
 	return 0;
}
