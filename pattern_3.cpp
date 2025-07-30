/*ABCD
  ABCD
  ABCD
  ABCD*/
#include<iostream>
using namespace std;
int main()
{
   for(int i=0;i<4;i++) //outer loop 
   {
        char ch = 'A'; //point to be noted
       for(int j=0;j<4;j++)
       {
           cout<<ch;
           ch++;
       }
     cout<<endl;
   }
   return 0;
}