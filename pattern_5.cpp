/*ABC
  CDE
  FGH*/
#include<iostream>
using namespace std;
int main()
{
    char ch = 'A';//point to be noted
    for(int i=0;i<3;i++)
    {
      
        for(int j=1;j<=3;j++)
        {
        cout<<ch;
        ch++;
        }
        cout<<endl;
    }
    return 0;
}