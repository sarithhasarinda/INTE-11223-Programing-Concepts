//computes only the average input items that are greater than 10

#include <iostream>
using namespace std;

int main(){

    int sum = 0;
	int input =0; 
	int num = 1;
	int n = 0;
    double Avg, 
	

    cout<< "Input number"<<endl;
    cin>>n;

    while(num <= n)
    {
        cout<<"Input Number of Values "<< num<<": ";
        cin>>input;

        if(input>10)
        {
            sum = sum + input;          
        }

        num++;
    }
    
    Avg = sum/n;
    cout << "Average is :"<<Avg;
    return 0;
}
