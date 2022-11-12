//Write a program to accept an integer n and display all even numbers upto n
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"ENTER A NUMBER=";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		cout<<"\n"<<i;
	
	}
	
}
