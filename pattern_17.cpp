/*write a program that displays the following shape using nested loops.
The outer loop should be for loop and inner loop should be while loop.

*******
******
*****
****
***
**
*

*/
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	for(a=1;a<=7;a++)
	{
		b=a;
		while(b<=7)
		{
			cout<<"*";
			b++;
			
		}
		cout<<endl;
	}
	return 0;
	
}