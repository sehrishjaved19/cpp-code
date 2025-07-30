/*
AAAA
 BBB 
  CC
   D*/
#include<iostream>
using namespace std;
int main()
{char ch ='A';
	int i,j,n;
	n=4;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
	for(j=0;j<n-i;j++){
		cout<<ch;
	}ch++;
    	cout<<endl;
	}
	return 0;
}