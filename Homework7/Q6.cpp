#include <iostream>
using namespace std;

int main() 
{
	//Define a 2D array for the distances
	int distance[4][4]={{0,78,124,113},{78,0,184,38},{124,184,0,222},{113,38,222,0} };
	int curloc; //Current Location
	int dest;	//Destination
	int totd;	//Total Trip Distance
	
	//User Interface
	cout<<"----Welcome to Trip Advisor----"<<endl;
	cout<<"==============================="<<endl;
	
	cout<<"Enter 1 for select Colombo"<<endl;
	cout<<"Enter 2 for select Gampaha"<<endl;
	cout<<"Enter 3 for select Galle"<<endl;
	cout<<"Enter 4 for select Kandy"<<endl<<endl;
	
	cout<<"\n"<<"Please enter your current location :";
	cin>>curloc;
	
	curloc -=1;
	cout<<"Please enter destination :";
	cin>>dest;
	
	dest -=1;
	
	while(!(0<=curloc && curloc<=3 && 0<=dest && dest<=3))
	{
		cout<<"Please enter your current location :";
		cin>>curloc;
		curloc -=1;
		cout<<"Please enter destination :";
		cin>>dest;
		dest -=1;
	}
	
	totd = distance[curloc][dest];
	
	char resp; //User Response
	cout<<endl;
	cout<<"Do you want to continue? If yes, Press 'Y'. If no, press 'N' :";
	cin>>resp;
	
	while(!(resp=='y'||resp=='Y'||resp=='n'||resp=='N'))	//Check the validity of the input
	{
		cout<<"Invalid Response. Please enter response again!"<<endl;
		cout<<"Do you want to continue? If yes, Press 'Y'. If no, press 'N' :";
		cin>>resp;
	}
	
	while(resp=='Y' || resp=='y')
	{
		curloc = dest;
		cout<<"Enter the next destination :";
		cin>>dest;
		dest-=1;
		
		totd += distance[curloc][dest];	//Count Total Distance
	
		cout<<"Do you want to continue? If yes, Press 'Y'. If no, press 'N' :";
		cin>>resp;
	}
	
	cout<<endl;
	cout<<"Total distance is :"<<totd<<endl;
	return 0;
}
