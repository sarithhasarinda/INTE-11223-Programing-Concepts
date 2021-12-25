//compute the greatest common divisor of two integers

#include<iostream>
using namespace std;

int main()
{
int n1; //number 1
int n2; //number 2
int x;
int GCD; //Great common divisor

cout<<"enter first integer:";
cin>>n1;

cout<<"enter second integer:";
cin>>n2;
 
 for(x=1;x<=n1 && x<=n2;++x)
{
 if(n1%x==0 && n2%x==0)
 {
 GCD=x;
}
}
cout<<"greatest common divisor:"<<GCD<<endl;
return 0;
}
