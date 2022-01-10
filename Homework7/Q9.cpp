//program to store n elements in an array and print the elements using pointer

#include<iostream>
using namespace std;

int main()
{
	int n;
	int arr[n];
	int *pointer=arr;
	
	cout << "Enter size of the Array: ";
    cin >> n;
    
    //prompt user to Enter inputs for array
    for (int i=0; i<n; i++)
    {
    	cout << "Enter element: ";
    	cin >> arr[i];
	}
	
	//Print array
	cout<<"Elements of the array:";
    for (int j=0; j<n; j++)
    {
    	cout <<" "<< *pointer; 	//print value poined by the pointer
    	pointer++ ;		
	}	
}
