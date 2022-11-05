//write a program to accept a quardinate of a point and calculate he distance between two point
#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,y1,x2,y2,d;
	cout<<"enter value of x1 & y1=";
    cin>>x1>>y1;
    cout<<"enter value of x2 & y2=";
    cin>>x2>>y2;
    d=sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    cout<<"Ans="<<d;
    
}
