//program in C to sort an array using Pointer

#include <iostream>
using namespace std;

void sort(int n, int* ptr)
{
	int i, j, temp;

	for (i = 0; i < n; i++) {

		for (j = i + 1; j < n; j++) 
        {
			if (*(ptr + j) < *(ptr + i)) 
            {
				temp = *(ptr + i);
				*(ptr + i) = *(ptr + j);
				*(ptr + j) = temp;
			}
		}
	}

    cout<<"Sorted array : "<<endl;

	for (i = 0; i < n; i++)
    {
        cout<<*(ptr + i)<<endl;
    }
}

int main()
{
	int n = 5;
	int num[5];

    cout<<"Enter 5 numbers"<<endl;
    
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter Number "<<i+1<<":";
		cin>>num[i];
    }

	sort(n, num);

	return 0;
}

