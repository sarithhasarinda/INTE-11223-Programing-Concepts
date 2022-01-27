//program to Calculate the length of the string using a pointer

#include<iostream>
using namespace std;

int main()
{
	char str[1000];
	char *pstr = str; //pointed to first character of the text
	int length = 0; 
	
	cout << "Enter text: ";
    cin >> str;
    
    //loop to calculate length
	while ( *(pstr++) != '\0' ) 
    {
    	length++ ;
	}
    
    cout << "Length of the text '" << str << "' is " << length;
}

