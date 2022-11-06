#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	 char ch;
	 cout<<"enter a character=";
	 cin>>ch;
	 if((ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'))
	 {
	 	cout<<"vowel";
	 }
	 else
	 {
	 	cout<<"consonent";
	 }
}
