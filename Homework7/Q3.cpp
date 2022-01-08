//Program for Output the line in uppercase letters and in lowercase letters

using namespace std;
#include<iostream>
#include<cstring>

int main()
{
    char s[100];
	
	cout<<"input text line "<<endl;
	cin.getline(s,100);
	cout<<endl<<endl;
	
	int length=strlen(s);
	cout<<"text in upper letters : ";
	
	//Convert String into Upper chartactors.
	for(int i=0;i<length;i++){
		if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
	cout<<s<<endl<<endl;
	
	//Convert String into Lower chartactors.
	cout<<"text in lower letters : ";
	for(int i=0;i<length;i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
		}
	}
	cout<<s<<endl<<endl;
	
}
