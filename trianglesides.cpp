//accept three sides of a triangale input and print weather the triangle is valid or not.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int side1,side2,side3,x;
	cout<<"enter side1,side2,side3---->>";
	cin>>side1>>side2>>side3;
	if((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2))
	{
		cout<<"Triangle is correct";
	}
	else
	{
		cout<<"Triangle is not correct";
	}
	
}
