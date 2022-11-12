// Write a program to accept a character, an integer n and display the next n characters.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int n,i;
	cout<<"enter a character--->";
	cin>>ch;
	cout<<"enter a number--->";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ch++;
		cout<<"\nnext character-->"<<ch;
	}
	
 } 
