//program to print a number which is entered from keyboard using pointer.

#include<iostream>
using namespace std;

int main()
{
	int num;	//entered value
	int *nptr;	//Pointer for entered value
	
	cout<<"Enter the value:";
	cin>>num;
	
	nptr= &num;	//Address of enterd value assigning into pointer
	
	//print the value of address of the pointer
	cout<<"Value of the adress of the Pointer:"<<*(&nptr)<<endl;
	return 0;
}
