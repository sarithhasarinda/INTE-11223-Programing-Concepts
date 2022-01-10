//program to count the number of vowels and consonants in a string using a pointer

#include<iostream>
using namespace std;

int main()
{
	char str[200];
	char *pstr = str; //pointed to first character
	int length = 0; 
	int vow=0,con=0; //Voweles and Constants
	
	cout << "Enter text: ";
    cin >> str;
    
    //loop to calculate length
	while ( *(pstr++) != '\0' ) 	//runs until all the next elements doesn't meet NULL character
    {
    	if(*pstr=='a' || *pstr=='A' || *pstr=='e' || *pstr=='E' || *pstr=='i' || *pstr=='I' || *pstr=='o' || *pstr=='O' || *pstr=='u' || *pstr=='U')
    	{
    		vow++;
		}
		else
		{
			con++;			
		}
    	length++ ;
	}
    
    cout << "Number of vowels in the text '" << str << "' is " << vow << endl;
    cout << "Number of constants in the text '" << str << "' is " << con << endl;
}
