//Accept a single digit from the user and display it in words. For example, if digit entered is 9,
//display Nine.
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i=0,a[100],r,n,ch,m;
    cout<<"enter a number:";
	cin>>n;
	m=n;

	while(n>0)
	{
		r=n%10;
		n=n/10;
		a[i++]=r;
	}
	for(i=i-1;i>=0;i--)
	{
	ch=a[i];
   
	switch(ch)
	{
		case 0: cout<<"zero,";
		break;
		
		case 1: cout<<"one,";
		break;
		
		case 2: cout<<"two,";
		break;
		
		case 3: cout<<"three,";
		break;
		
		case 4: cout<<"four,";
		break;
		
		case 5: cout<<"five,";
		break;
		
		case 6: cout<<"six,";
		break;
		
		case 7: cout<<"seven,";
		break;
		
		case 8: cout<<"eight,";
		break;
		
		case 9: cout<<"nine,";
		break;
		
	}
	 
}


if(m==0)
{
	cout<<"zero";
}
}
