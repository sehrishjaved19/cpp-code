#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		public:
			void in()
			{
				cout<<"enter a  number;";
				cin>>n;
			}
			void out()
			{
				cout<<n;
			}
			
};
int main()
{
	Test obj;
	obj.in();
	obj.out();
	return 0;
}