#include<iostream>
#include<stdio.h>
using namespace std;
int swap(int,int);
int main()
{
	int n1,n2;
	cout<<"enter number 1 & 2=";
	cin>>n1>>n2;
	swap(n1,n2);
}

int swap(int n1,int n2)
{
	int n3;
	n3=n1;
	n1=n2;
	n2=n3;
	cout<<n1;
	cout<<n2;
}
