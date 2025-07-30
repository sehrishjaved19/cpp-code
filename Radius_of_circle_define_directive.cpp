/* Write a program that inputs the radius of a circle and displays 
the circumference by using formula 2PiR . Store
THE VALUE OF pI IN A CONSTANT BY USING define DIRECTIVE.*/

#include<iostream>
#define PI 3.141
using namespace std;
int main()
{
	float R,circum ;
	cout<<"Enter radius:";
	cin>>R;
	circum =2.0*PI*R;
	cout<<"circumference = "<<circum;
	return 0;
	
}