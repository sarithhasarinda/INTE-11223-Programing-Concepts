//program to print the address of a variable whose value is input from user

#include<iostream>
using namespace std;

int main()
{
	int num; 	//entered value
	int *nptr;	//Pointer for entered value
	
	cout<<"Enter the value:";
	cin>>num;
	
	nptr=&num;	//Address of enterd value assigning into pointer
	
	cout<<"Address of entered value:"<<nptr<<endl; //print the address
	
	return 0;	
}

