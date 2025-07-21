/*
A
BC
DEF
GHIJ
*/

#include<iostream>
using namespace std;
int main()
{ char ch='A';
   for(int i=0;i<4;i++) 
   {
    
       for(int j=i;j>=0;j--)
       {
        
         cout<<ch;
        ch++;
       }
    cout<<endl;
   }
   return 0;
}
