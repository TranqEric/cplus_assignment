#include<iostream>
using namespace std;
class BaseClass
{
	public:
		BaseClass()
		{
			cout<<"\nThis is constructor";
		}
		~BaseClass()		//  destructor always gets called at the very end of the program.
		{
			cout<<"\nThis is Destructor";
		}
};
main()
{
	BaseClass obj;
	cout<<"\nMain method.";
}