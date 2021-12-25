//outputs the first N elements of the Fibonacci series.

#include<iostream>
using namespace std;

//recursive function
int recursive(int N) //First number of elements
{
    int n1=0; 	//1st number
	int n2=1; 	//2nd number
	int nxtnum; //next number in the series
	int i = 0;  //iteration

    cout<<n1<<", "<<n2;
    
    nxtnum = n1 + n2;

    while (i < N-2)
    {
        cout<<", "<<nxtnum; //hard code ","
        n1 = n2;
        n2 = nxtnum;
        nxtnum = n1 + n2;
        i++;
    }
    return 0;
}

//main function
int main()
{
    int N;
    cout<<"Enter the number : ";
    cin>>N;	//Input first number of elements of the fibonacci series
    recursive(N);
}
