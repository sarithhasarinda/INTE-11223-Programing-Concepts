//Vending Machine							//IM number- IM/2019/066
											//Name     - G.W.S.Hasarinda
#include<iostream>
using namespace std;

int main()
{
	int price; 									//price of the product
	int pay1;  									//Initial payment made by customer
	int pay2;  									//payment of remaing amount made by customer 
	int prd;   									//product number
	int c10,c5,c2,c1;							//variables for count of customer entered coins
	int pc10=0, pc5=2, pc2=0, pc1=0; 	//count of preloaded coins
	int totpc;  								//total of preloded coins
	int ovb10, ovb5, ovb2, ovb1; 				 //Overflow bins for denominations
	int insuf;  								//insufficient amount of payment
	int bal;    								//balance
	int rem;    								//remainder
	int key;    								//Termination key
				
	cout<<"Welcome!..How may I help you? \n";
	
	do
	{
		do
		{	//Display product price list
		
			cout<<"\n"<<"========  Product Price List  =========\n";
			cout<<"\n"<<"Product No    Product      Price"<<endl;
			cout<<"\n";
			cout<<"    1        Product A     Rs.18\n";
			cout<<"    2        Product B     Rs.20\n";
			cout<<"    3        Product C     Rs.25\n";
			cout<<"    4        Product D     Rs.30\n";
			cout<<"\n"<<"Enter the desired product number:"<<endl;
			cin>>prd;		//Prompt customer to select product
			cout<<"\n";
			
			while(prd<1 || prd>4)		//Product selection proccess
			{
				cout<<"Invalid Product! Please Enter product again.";
				cin>>prd;	
			}
			while(prd>=1 && prd<=4)
			{
				switch(prd)
				{
					case 1:
						cout<<"Price is Rs.18\n";
						cout<<"Please enter the payment through the slot(Rs. 1, 2, 5,and 10 coins are only accepted)"<<endl;
						price=18;
						break;
					
					case 2:
						cout<<"Price is Rs.20\n";
						cout<<"Please enter the payment through the slot(Rs. 1, 2, 5,and 10 coins are only accepted)"<<endl;
						price=20;
						break;
					
					case 3:
						cout<<"Price is Rs.25\n";
						cout<<"Please enter the payment through the slot(Rs. 1, 2, 5,and 10 coins are only accepted)"<<endl;
						price=25;
						break;
						
					case 4:
						cout<<"Price is Rs.30\n";
						cout<<"Please enter the payment through the slot(Rs. 1, 2, 5,and 10 coins are only accepted)"<<endl;
						price=30;
						break;			
					
				}
				break;
			}
			//prompt customer to enter coins
			cout<<"Enter Rs.10 coins:";  
				cin>>c10;
				pc10+=c10;
				
				cout<<"Enter Rs.5 coins:";
				cin>>c5;
				pc5+=c5;	
				
			
				cout<<"Enter Rs.2 coins:";
				cin>>c2;
				pc2+=c2;
			
				cout<<"Enter Rs.1 coins:";
				cin>>c1;
				pc1+=c1;	
				
			
			pay1=(10*c10)+(5*c5)+(2*c2)+(1*c1); //Get the total amount of customer paid
			
			insuf=price-pay1;	//Calculate reamining insufficient amount
			cout<<"=================================================\n";
			cout<<"Your Entered Amount is:"<<pay1<<endl;
			
			while (pay1<price)  //promt user to enter remaining amount
			{
				cout<<"Payment is Insufficient...Remaining Amount is:"<<insuf<<"\n";
				cout<<"=========Please Enter Remaining Amount=========\n";
				
				cout<<"Enter Rs.10 coins:";
				cin>>c10;
				pc10+=c10;		//update preloded coin reserve
				
				
				cout<<"Enter Rs.5 coins:";
				cin>>c5;
				pc5+=c5;		//update preloded coin reserve
			
				cout<<"Enter Rs.2 coins:";
				cin>>c2;
				pc2+=c2;		//update preloded coin reserve
			
				cout<<"Enter Rs.1 coins:";
				cin>>c1;
				pc1+=c1;		//update preloded coin reserve
				
			
				pay2=(10*c10)+(5*c5)+(2*c2)+(1*c1);  //calculate total remaining amount customer paid again
				pay1+=pay2;							//update customer payment
				insuf-=pay2;						//update remainig amount
			}
			
			bal=pay1-price;			//calculate balance
			cout<<" \n";
			cout<<"Your Balance is:"<<bal<<endl;" \n";
			cout<<"===Collect your Balance== \n";
			
			c10=bal/10;rem=bal%10;		//withdraw denominations
			if(c10>0 && pc10>=c10)
				cout<<"No.of Rs.10 coins:"<<c10<<endl;
				pc10-=c10;
				
			c5=rem/5;rem=rem%5;		//withdraw denominations
			if(c5>0 && pc5>=c5 )
				cout<<"No.of Rs.5 coins:"<<c5<<endl;
				pc5-=c5;
				
				
			c2=rem/2;rem=rem%2;		//withdraw denominations
			if(c2>0 && pc2)
				cout<<"No.of Rs.2 coins:"<<c2<<endl;
				pc2-=c2;
				
			c1=rem/1;rem=rem%1;		//withdraw denominations
			if(c1>0 && pc1)
				cout<<"No.of Rs.1 coins:"<<c1<<endl;
				pc1-=c1;
			
			if(pc10>100)		//overflow bin
			{
				ovb10=pc10-100;
			}
			if(pc5>100)
			{
				ovb5=pc5-100;
			}
			if(pc2>100)
			{
				ovb2=pc2-100;
			}
			if(pc1>100)
			{
				ovb1=pc1-100;
			}
			totpc=(pc10*10)+(pc5*5)+(pc2*2)+(pc1*1);
		}
		while(bal>totpc);
		
		if(bal>totpc)			//Check availablility of coin reserves 
		{
			cout<<"Change cannot be made!!! Machine ran out of coins!!!\n";
			cout<<"Sorry! Machine will eject your coins. Collect your coins. \n";
			
			c10=pay1/10;rem=bal%10;
			if(c10!=0)
				cout<<"No.of Rs.10 coins:"<<c10<<endl;
				
			c5=rem/5;rem=rem%5;
			if(c5!=0)
				cout<<"No.of Rs.5 coins:"<<c5<<endl;
				
			c2=rem/2;rem=rem%2;
			if(c2!=0)
				cout<<"No.of Rs.2 coins:"<<c2<<endl;
				
			c1=rem/1;rem=rem%1;
			if(c1!=0)
				cout<<"No.of Rs.1 coins:"<<c1<<endl;
		}	
		cout<<"Do you want another Product press 1"<<endl;
		cout<<"If you want to end Process press ANY KEY"<<endl;
		cin>>key;	
	}
	while(key==1);
	
	cout<<"Thank you! Come again"<<endl;
}	
