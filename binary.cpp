#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
  int temp=0,a[100],n,i;
  cout<<"enter number=";
  cin>>n;
  for(i=0;i>n;i++)
  {
  	a[i]=n%2;
  	n=n/2;
  }
  for(i=i-1;i>=0;i--)
  {
  	cout<<"ans="<<a[i];
  }
  
}
