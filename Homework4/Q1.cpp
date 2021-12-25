/*This program that reads a value of N and then compute the average of the Next 
N elements of inputs*/

#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter count of Numbers-"<<endl;
	cin>>num;
	
	int count=1;
	int sum=0;
	int n;
	double avg; //average
	
	while(count<=num)
	{
		cout<<"Enter Number"<<count<<"-"<<endl;
		cin>>n; 	//input number
		sum=sum+n;
		count++;
	}
	
	
	avg=sum/count;
	cout<<"Average is="<<avg<<endl;
	
	return 0;	
}
