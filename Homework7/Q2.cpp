//Airline Seats booking system
#include<iostream>
using namespace std;

int main()
{
	//array which handles reservation of seats
	int seats[10];
	
	//for loop assign value=0 for each element of the array all seats are empty
	for(int i=0;i<10;i++)
	{
		seats[i]=0;
	}		
	//variables for the reservation of seats
	int fst=0,eco=5;
	//the while loop executes continuously until both the sections are full
	
	while(fst<5||eco<10)	
	{
		cout<<"===Welcome to ABC Airlines==="<<endl;
		
		int choice=0;//default value of choice
		
		cout<<"\n"<<"Press 1 for first class"<<endl;
		cout<<"Press 2 for economy class"<<endl;
		cin>>choice;
		cout<<endl;
		
		while(!cin||!(choice>=1&& choice<=2))
		{
			cout<<"Invalid section number,please select desired section again"<<endl;
			cout<<"Press 1 for first class"<<endl;
			cout<<"Press 2 for economy class"<<endl;
			cin.clear();
			cin.ignore();
			cin>>choice;
			cout<<endl;
		
		}
			//first class seat reservations
			if(choice==1)
			{
				if(fst<5)
				{
					cout<<"Boarding Pass"<<endl;
					cout<<"Seat Number:"<<(fst+1)<<endl;
					cout<<"Section:first class"<<endl;
					seats[fst]=1;
					fst++;
				}
			
				else if(eco<10)
				{
					char choice1='\0';//null character assigned for choice1
					
					while(!(choice1=='Y'||choice1=='y'||choice1=='N'||choice1=='n'))
					{
						cout<<"First class is full,Are you okay with a seat in economy section?"<<endl;
						cout<<"If yes,type Y/if no type N: ";
						cin>>choice1;
				
						if(!(choice1=='Y'||choice1=='y'||choice1=='N'||choice1=='n'))
						{
							cout<<"Invalid response,please enter response again"<<endl;
						}
					}
					cout<<endl;
					
					if(choice1=='Y'||choice1=='y')
					{
						cout<<"Boarding Pass"<<endl;
						cout<<"Seat Number:"<<(eco+1)<<endl;
						cout<<"Section:economy"<<endl;
						seats[eco]=1;
						eco++;
					}
					else if(choice1=='N'||choice1=='n'){
						cout<<"Next flight leaves in 3 hours"<<endl;
					}
				}
			}
		//economy class seat reservation
		if(choice==2)
		{
			if(eco<10){
				cout<<"Boarding Pass"<<endl;
				cout<<"Seat Number:"<<(fst+1)<<endl;
				cout<<"Section:economy"<<endl;
				seats[eco]=1;
				eco++;
			}
			else if(fst<5){
				char choice1='\0';//null character assigned for choice1
				
				while(!(choice1=='Y'||choice1=='y'||choice1=='N'||choice1=='n')){
					cout<<"economy is full,Are you okay with a seat in first class?"<<endl;
					cout<<"If yes,type Y/if no type N: ";
					cin>>choice1;
					
					if(!(choice1=='Y'||choice1=='y'||choice1=='N'||choice1=='n'))
					{
						cout<<"Invalid response,please enter response again"<<endl;
					}
				}
				cout<<endl;
				
				if(choice1=='Y'||choice1=='y')
				{
					cout<<"Boarding Pass"<<endl;
					cout<<"Seat Number:"<<(fst+1)<<endl;
					cout<<"Section:first class"<<endl;
					seats[fst]=1;
					fst++;
				}
				else if(choice1=='N'||choice1=='n'){
					cout<<"Next flight leaves in 3 hours"<<endl;
				}
			}
		}
		//Print that seats are full
		cout<<endl;
		cout<<"All seats full,sorry for the inconvenience"<<endl;
		cout<<"Next flight leaves in 3 hours"<<endl;
		cout<<endl;
		return 0;	
	}
}

