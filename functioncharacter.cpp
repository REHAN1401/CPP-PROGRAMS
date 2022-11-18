#include<stdio.h>
#include<iostream>
using namespace std;
char chz(char);
int main()
{
	char x;
	cout<<"enter character=";
	cin>>x;
	chz(x);
}
char chz(char x)
{
	char ch;
	ch=x;
	x++;
	cout<<"next character="<<x;
	ch--;
	cout<<"\n";
	cout<<"previous character="<<ch;
	
}
