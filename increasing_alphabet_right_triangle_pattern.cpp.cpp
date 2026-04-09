/*
A
AB
ABC
ABCD
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
       char ch ='A';
        for(int j=0;j<i+1;j++)
        {
            cout<<ch;
            ch++;
    
        };
    cout<<endl;
    }
    return 0;
}