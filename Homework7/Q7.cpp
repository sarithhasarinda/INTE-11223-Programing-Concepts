//program to find the factorial of a number using pointers

#include <iostream>
using namespace std;

//Function declaration
int findfactorial(int num, int *fact)
{
    *fact = 1;

    for(int i = 1; i <= num; i++)
    {
        *fact = i * *fact;
    }

    cout<<"Factorial of "<<num<<" is : "<<*fact;
}

int main()
{
    int num,fact,sum;
    cout<<"enter the number : "; //Prompt user to enter value
    cin>>num;

    findfactorial(num, &fact); //Function call
}


