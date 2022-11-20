#include<stdio.h>
#include<iostream>
using namespace std;
char chz(char ch);
int main()
{

{
	char ch;
	cout<<"enter a character=";
	cin>>ch;
	chz(ch);
}
}
char chz(char ch)
{
	char temp=0;
	char x;
	temp=ch;
	if((ch>=96 && ch<=122 ) || (ch>=65 && ch<=90))
	{
		if((ch>=65 && ch<=90))
		{
			cout<<"character is in uper case";
			x=temp+32;
			cout<<"now in lower case="<<x;
		}
		else 
		{
			cout<<"lower character";
			x=temp-32;
			cout<<"now in upper character"<<x;
		}
	}
		else if((ch>=32 && ch<=47) || (ch>58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=126 ))
		{
			cout<<"special character";
		}
		else
		{
			cout<<"normal";
		}
	}


