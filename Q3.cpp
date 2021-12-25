//computes the smallest and the largest numbers in the next N elements of inputs

#include <iostream>
using namespace std;

int main() 
{
	int n,max,min,num,count = 1;
	cout<<"Input N Value= ";
	cin>>n;
	while (count<=n){
	cout<<"Input a Number "<<count<< ":";
	cin>>num;
	if (count==1){
	max=num;
	min=num;
	}else{
	if (num>=max){
	max= num;
}
	if (num<=min)
	{
		min= num;
	}
}
	count++;
}
cout<<"Maximum value is = "<<max<<"\n";
cout<<"Minimum value is = "<<min;

return 0;
}
