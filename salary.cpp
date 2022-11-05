#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	 int bs=0,hr=0,da=0,pt=0,total;	//bs=basic salary ,hr=house rent ,da=dearenss allowence ,pr=professional tax
	 cout<<"Enter basic salary of employe=";
	 cin>>bs;
	 hr=bs*10/100;
	 da=bs*30/100;
	 pt=bs*5/100;
	 total=bs+hr+da-pt;
	 cout<<"total salary is amount="<<total;
	 
}
