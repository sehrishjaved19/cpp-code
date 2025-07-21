#include<iostream>
using namespace std;
int main()
{
	int a, b, op,n;
	cout<<"Enter first interger: ";
	cin>>a;
	cout<<"Enter second interger: ";
	cin>>b;
	cout<<"Enter operator( CHOOSE FROM THESE:'+', '-', '*', '/', '%'):";
	cin>>op;
	if( op = '+')
	{
	cout<<"RESULT = "<<a+b<<endl;
	}
	 else if( op = '-')
	{
	cout<<"RESULT = "<<a-b<<endl;
	}
	 else if( op = '*')
	{
	cout<<"RESULT = "<<a*b<<endl;
	}
	 else if( op = '/')
	{
	cout<<"RESULT = "<<a/b<<endl;
	}
	 else if( op = '%')
	{
	cout<<"RESULT = "<<a%b<<endl;
	}
	else{
		cout<<"The choice of your operator does not match the requirement!";
	}
	return 0;
}