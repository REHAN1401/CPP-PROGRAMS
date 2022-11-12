//Accept two integers x and y and calculate the sum of all integers between x and y (both inclusive)
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int x,y,add,i,j;
	cout<<"enter value of X & Y=";
	cin>>x>>y;
	while(x<y)
	{
		add=add+x;
		x++;
	}
	cout<<"sum="<<add;
}
