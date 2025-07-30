#include<iostream>
using namespace std;
//sum of numbers from 1 to N
int sumN(int n)
{
	int sum = 0;
	for(int i=0; i<=n;i++)
	{
	sum = sum+i;	
	}
	return sum;
	
	
}
int main()
{
	int s=sumN(5);
	cout<<"The sum is: "<<s<<endl;
	
	return 0;
}