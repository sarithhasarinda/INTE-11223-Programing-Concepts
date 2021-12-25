//function distance that calculates the distance between two points

#include <iostream>
#include <math.h>
using namespace std;

double Distance(double,double,double,double); //declare function

int main(){


double x1, x2, y1, y2,d=0;

cout<<"Input X1 : "; //point x1
cin>>x1;

cout<<"Input Y1 : "; //point y1
cin>>y1;

cout<<"Input X2 : "; //point x2
cin>>x2;

cout<<"Input Y2 : "; //point y2
cin>>y2;

d=Distance(x1,y1,x2,y2);
cout<<"Distance Between Two Points : "<<d; //output the distance between points

return 0;
}

double Distance(double x1, double y1, double x2, double y2)  //function call
{
	
	double val;
	val=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
	return val;
}

