#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
 char op;
 int n1,n2;
 cout<<"ENTER NUMBER 1:";
 cin>>n1;
 cout<<"ENTER OPERAND FROM FOLLOWING OPTIONS:- +,-,/,*:";
 cin>>op;
 cout<<"ENTER NUMBER 2:";
 cin>>n2;
 switch(op)
 {
 	case '+':cout<<"Ans="<<n1+n2; 
 	break;
 	
 	case '-':if(n1<n2)
 				{
 					cout<<"****number 1 should be greater than number 2****";
 	    	     }
			 	else
					{
		 				cout<<"Ans="<<n1-n2;
		    		 }
 			break;
 	
 	case '/':if(n1==0)
 	 			{
 	 				cout<<"****number 1 should be greater than 0****";
					}
					 else
		   				{
	        				cout<<"Ans="<<n1/n2; 
	       				 }
       		break;
 	
 	case '*':cout<<"Ans="<<n1*n2; 
 	break;
 }
}

