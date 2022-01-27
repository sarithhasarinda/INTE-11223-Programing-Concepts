//program to print the address of the pointer to a variable whose value is input from user

#include<iostream>
using namespace std;

int main()
{
	int num;	//entered value
	int *nptr;	//Pointer for entered value
	
	cout<<"Enter the value:";
	cin>>num;
	
	nptr=&num;				//Address of enterd value assigning into pointer
	int **newptr= &nptr;	//Address of the pointer assigning into new pointer 
	
	cout<<"Address of the pointer:"<<newptr<<endl; //print the address of the pointer
	
	return 0;
}

