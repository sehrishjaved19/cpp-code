/* write a program the explains the difference between 
prefix and postfix increment operator .*/
#include<iostream>
using namespace std;int main(){
	int a,b,x,y;
	a=b=x=y= 0;
	a++;
	b=a;
	++x;
	y=x;
	cout<<"\na = "<<a<<"\n b = "<<b<<"\n x = "<<x<<"\n y = "<<y;
	return 0;
}