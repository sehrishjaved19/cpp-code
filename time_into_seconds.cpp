#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter first integer: ";
	cin>>num1;
	cout<<"Enter second integer: ";
	cin>>num2;
	if(num1>num2){
		cout<<num1<<" is larger."<<endl;
	}
	else if(num2>num1){
		cout<<num2<<" is larger."<<endl;
	}
	else
		cout<<"These numbers are equal."<<endl;
}