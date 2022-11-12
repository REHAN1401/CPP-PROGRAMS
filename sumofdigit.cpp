//Write a program to accept an integer and count the number of digits in the number.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,sum,rev=0;
	cout<<"enter the number=";
	cin>>n;
	while(n>0)
	{
		rev=n%10;
		sum=sum+rev;
		n=n/10;
	
	}
	cout<<"sum of digit is="<<sum;
}
