//a library charges a fine for every book return late accept no of days the memeber is late compute and print fine as follows
//less than 5 days fine =10 rs  between 6-10 days fine=15rs     and above 10 days fine =100 rs
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int days,fine=0;
	cout<<"Enter number of days=";
	cin>>days;
	if(days>0 && days<=5)
	{
		fine=days*5;
		cout<<"You have to pay rs="<<fine;
	}
	else if(days>=6 && days<=10)
	{
		fine=days*10;
		cout<<"You have to pay rs="<<fine;
	}
	else if(days>=10)
	{
		fine=days*100;
		cout<<"You have to pay rs="<<fine;
	}
	else
	{
		cout<<"You have returned book on time";
	}
	
}
