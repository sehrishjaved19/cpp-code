/*
A
BA
CBA
DCBA
*/

#include<iostream>
using namespace std;
int main()
{
   for(int i=0;i<4;i++) 
   {
    
       for(int j=i;j>=0;j--)
       {
         char ch='A'+j;
         cout<<ch; 
       }
    cout<<endl;
   }
   return 0;
}
