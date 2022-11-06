#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	 int n;
	 cout<<"enter number=";
	 cin>>n;
	 if(n%5==0 && n%7==0)
	 {
	 	cout<<"it is divisible by both";
	 }
	 else if(n%5==0)
	 {
	  cout<<"divisbile by 5";
	 }
	 else if(n%7==0)
	 {
	 	cout<<"divisible by 7";
	 }
	 else
	 {
	 	cout<<"not divisible by any";
	 }
}
