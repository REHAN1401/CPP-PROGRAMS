#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int sinfunc(int);
int cosin(int);
int	logfunc(int);
int powerf(int,int);
int squarefunc(int);

int main()										//main function
{
	int ch,n,n2;
	cout<<"----enter your choice----\n";
	cout<<"1.(sine) \n 2.(cosin) \n 3.(log) \n 4.(Ex) \n 5.(square root) \n 6.(exit) \n"; 
	cin>>ch;
	
	switch(ch)									//switch
	{
		case 1:cout<<"enter a number=";
		cin>>n;
		sinfunc(n);
		break;
		
		case 2:cout<<"enter a number=";
		cin>>n;
		cosin(n);
		break;
		
		case 3:cout<<"enter a number=";
		cin>>n;
		logfunc(n);
		break;
		
		case 4:cout<<"enter a number=\n ";
		cout<<"enter power=";
		cin>>n>>n2;
		powerf(n,n2);
		break;
		
		case 5:cout<<"enter a number=";
		cin>>n;
		squarefunc(n);
		break;
		
		case 6:exit(0);
	}
}


	int sinfunc(int n)							//sin function
	{
	double x;
    double result;

    result = sin(n);
    cout<<"sin="<< result;

    return 0;
    
	}



    int cosin(int n)							//cosin function
	{

	double result;
    n = (n * 3.14) / 180;
    result = cos(n);

    cout<<"cos="<< result;

    return 0;
    
    }
    
  
  
    int logfunc(int n)								//log function
    {
    
    double result;
    result = log(n);

    cout<<"Logarithm="<<result;

    return 0;
	}
	
	
	int powerf(int n,int n2)						//power function
	{
		int result;
		result=pow(n,n2);
		cout<<"result is="<<result;
		
		return 0;
	}


	
	int squarefunc(int n)	
	{						//squareroot dunction
	double squareRoot;

    squareRoot = sqrt(n);

    cout<<"Square root ="<< squareRoot;

    return 0;
	}
    

