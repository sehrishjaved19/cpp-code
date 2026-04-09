/*

*       *
 *     *
  *   *
   * *
    *
    
    */

#include <iostream>
using namespace std;
int main() 
{
    for (int i=0;i<5;i++)
	{
        for (int j=0;j<i;j++)
		{
            cout<<" ";
        }
        cout<<"*"; 
        int middleSpaces = (5-1-i)*2-1;
        if (middleSpaces>0)
		{
            for (int j=0;j<middleSpaces;j++)
			{
                cout<<" ";
            }
            cout<<"*"; 
        }
        cout << endl; 
    }
    return 0; 
}