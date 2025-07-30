#include<iostream>
using namespace std;
//sum of two numbers
int sum(int q,int r)
{
	int s =q +r;
	return s;
		
	}
//minimum of two numbers

int min(int a, int b)
{
	if (a<b)
	{
		return a;
		
	}
	else 
	{
		return b;
	}	
	
}	


int main()
{
	cout<<"Sum is : "<<sum(4,4)<<endl;
	
	int Minimum = min(5,9);
	cout<<Minimum<<" is minimum!"<<endl;
	return 0;
	
}