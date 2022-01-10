//program that uses function strcmp to compare two strings input

#include <iostream>
#include <string.h>

using namespace std;

int main() 
{
	char str1[100], str2[100];
	 
	cout<<"Input string 1 : ";
	cin.getline(str1, 100);
	 
	cout<<"Input string 2 : ";
	cin.getline(str2, 100);
	 
	int compare = strcmp(str1, str2);
	cout<<endl;
	 
	if(compare==0)
	{
		cout<<"String are equal!"<<endl;
	}
	else if(compare==1)
	{
		cout<<"String 1 is greater than string 2!"<<endl;
	}
	 else if(compare==-1)
	{
		cout<<"String 1 is less than string 2!"<<endl;
	}
	return 0;
}
