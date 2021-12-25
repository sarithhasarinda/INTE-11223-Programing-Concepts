#include<iostream>
using namespace std;

int timedif(int totsec[]) //function declaration
{    
}

int main()
{
    int h; //hours
	int m; //minutes
	int s; //seconds
	int i=1;
	int time; 
    int totsec[3];

    while(i<=2)
    {
        cout<<"Enter the hours time "<<i<<":";
        cin>>h;
        if(h > 12 || h < 0)
        {
            cout<<"Invalid hours.Please Enter again hours : ";
            cin>>h;
        }
        cout<<"Enter the minutes time "<<i<<":";
        cin>>m;
        if(m > 60 || m < 0)
        {
            cout<<"Invalid minutes.Please Enter again minutes : ";
            cin>>m;
        }
        cout<<"Enter the seconds time "<<i<<":";
        cin>>s;
        if(s > 60 || s < 0)
        {
            cout<<"Invalid seconds.Please Enter again seconds : ";
            cin>>s;
        } 
        time = (h*60*60 + m*60 + s);
        totsec[i] = time;
        i++;
        
    }
    int secdif = 0; //Seconds between time 1 and 2 
    secdif = totsec[1]-totsec[2];
    if(secdif <= 0)
    {
        secdif = secdif * -1; //negative seconds turn to positive seconds
    }
    cout<<"Seconds between time 1 and 2:"<<secdif;
    
    return 0;
}

