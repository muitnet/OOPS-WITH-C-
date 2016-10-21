/*
Show the implementation of exception handling
*/


# include <iostream>
using namespace std;
void main()
{
	int num1,num2;
	double result;
	try
	{
		cout<<"Enter 1st No : ";
		cin>>num1;
		cout<<"Enter 2nd No : ";
		cin>>num2;
		if (num2==0)
			throw "Division by zero is not allowed";
		else
			result=num1/num2;
		cout<<num1<<"/"<<num2<<" = "<<result<<endl;
	}
	catch(const char* str)
	{
		cout<<"error is "<<str<<endl;
	}

}
