//function which will take pointer and display the number on screen

#include <iostream>
using namespace std;

int printnum(int num)	//function decaration
{
    int *nptr;
    nptr = &num;
    cout<<"Output : "<<*nptr;
}

int num;

int main()
{
    int input;

    cout<<"Enter the value : ";
    cin>>num;
    printnum(num); //function call
}
