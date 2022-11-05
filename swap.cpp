#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char n1,n2,x;
	cout<<"Enter number 1=";
	cin>>n1;
	cout<<"Enter number 2=";
	cin>>n2;
	x=n1;
	n1=n2;
	n2=x;
	cout<<"\n Number 1---->"<<n1;
	cout<<"\n Number 2---->"<<n2;
}
