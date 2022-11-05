#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch,x;
	cout<<"Enter a charcter---->";
	cin>>x;
	ch=x;
	x++;
	cout<<"next character is---->"<<x;
	ch--;
	cout<<"\nprevious character is---->"<<ch;	
}
