#include<iostream>
using namespace std;

int main()
{
	//variables
	int num, remainder, reverse=0;
	int *nptr;
	//user input
	cout << "Enter numbers to be reversed: ";
    cin >> num;
    //assign address of num to n
    nptr = &num;
    
    
    
    //loop to reverse digits
	while (*nptr != 0)
    {
    	remainder = *nptr % 10; 	//get the last digit 
    	reverse = reverse * 10 + remainder; 
    	*nptr /= 10; //the rest of the digits
	}
	cout << "Reversed digits: " << reverse << endl;
	   
}
