#include<stdio.h>
#include<iostream>
using namespace std;
int eve(int);
int main()
{	
	int n,x;
	cout<<"enter a number=";
	cin>>n;
	eve(n);
	x=eve(n);
	if(x==1)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}

}
int eve(int n)
{
	if(n%2==0)
	{
		return 1;
		
	}
	else
	{
		return 0;
	}
}
