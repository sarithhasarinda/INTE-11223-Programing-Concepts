//compute the smallest common factor of two integers

#include<iostream>
using namespace std;

int main(){

int n1;
int n2;
int scf; //small common factor
int gcd; //greatest common divisor
int i;

cout<<"input first integer:"; //input first integer and second integer
cin>>n1;
cout<<"input second integer:";
cin>>n2;


for(i=1;i<=n1 && i<=n2;i++) 
{
 if (n1%i==0 && n2%i==0)	//calculation of gcd
 {
 	gcd=1;
 }
}
scf=(n1*n2)/gcd; //calculation of scf

cout<<"smallest common factor:"<<scf<<endl;
}

