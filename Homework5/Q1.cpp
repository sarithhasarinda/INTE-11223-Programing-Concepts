//function integerPower( base, exponent ) that returns the value of base^exponent 

#include<iostream>
using namespace std;

int intergerPower(int base, int expo); //function declaration

int main()
{
	int base; 
	int expo; //exponenet
	
	cout<<"Input base:";
	cin>>base;
	
	cout<<"Input positive Integer for Exponent:";
	cin>>expo;
	
	while(expo <= 0)
    {
        cout<<"Invalid Input, input non zero positive integer again : ";
        cin>>expo;
	}
	
	int val=1; //vallue of base^exponent
	int integerPower(int base, int expo);
	
	for(int i=1; expo>=i; i++)
	{
		val=val*base;
	}
	
	cout<<base<<"^"<<expo<<"="<<val<<endl;
	
	return 0;		
}
