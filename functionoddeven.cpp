#include<stdio.h>
#include<iostream>
using namespace std;
int even(int);
int main()
{
	int n;
	cout<<"enter number=";
	cin>>n;
	even(n);
}
int even(int n)
{
	if(n%2==0)
	cout<<"even";
	else
	cout<<"odd";
}
	

