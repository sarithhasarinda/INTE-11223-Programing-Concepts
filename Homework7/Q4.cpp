//program to print a number which is entered from keyboard using pointer

#include<iostream>
using namespace std;

int main()
{
	int num;
	int *nptr;
	
	cout<<"Enter the number:";
	cin>>num;
	
	nptr= &num;
	
	cout<<"Entered Number:"<<*nptr<<endl;
	return 0;	
	
}
