/*
1
23
456
78910
*/

#include<iostream>
using namespace std;
int main()
{ int n=1;
   for(int i=0;i<4;i++) 
   {
    
       for(int j=i;j>=0;j--)
       {
        
         cout<<n;
         n++;
       }
    cout<<endl;
   }
   return 0;
}
