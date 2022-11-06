#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	 int l,b,h,ta,wl,wb,dl,db,tw,td,side,x;
	 cout<<"enter lenght , breadth & height=";    //total surface area of room
	 cin>>l>>b>>h;
	 ta=2*(l*b+b*h+h*l);
	 cout<<"\n enter length  & breadth of window=";
	 cin>>wl>>wb;
	 cout<<"\n enter length & breadth of door=";
	 cin>>dl>>db;									
	               
	tw=2*wl*wb;			   						  //total area of window
   	td=dl*db; 									  //total area of door
	  
	side=l*b;
	x=ta-tw-td-side;
	cout<<"total area="<<x;                                       
	 
}
