#include<iostream>
using namespace std;

int main()
{
	//variables
    int a,b,c; 
    int *p1,*p2,*p3; //pointers
    
    //user inputs
    cout << "Enter 1st Number: ";
    cin >> a;
	cout << "Enter 2nd Number: ";
    cin >> b;
    cout << "Enter 3rd Number: ";
    cin >> c;
	
	//assign addresses of user inputs
    p1 = &a;
    p2 = &b;
    p3 = &c;
    
    //greatest value
    if (*p1 > *p2)
	{
		if (*p1 > *p3)
		{
			cout << "Greatest:  " << *p1 << endl;
		}
		else
		{
			cout << "Greatest:  " << *p3 << endl;
		}
	}
	else
	{
		if (*p2 > *p3)
		{
			cout << "Greatest:  " << *p2 << endl;
		}
		else
		{
			cout << "Greatest:  " << *p3 << endl;
		}
		
	} 
	
	//smallest value
	if ( *p1 < *p2 && *p1 < *p3 ) 
	{
		cout << "Smallest:  " << *p1 << endl;
	}
	if ( *p2 < *p1 && *p2 < *p3 ) 
	{
		cout << "Smallest:  " << *p2 << endl;
	}
	if ( *p3 < *p1 && *p3 < *p1 ) 
	{
		cout << "Smallest:  " << *p3 << endl;
	}
   
    return 0;
}
