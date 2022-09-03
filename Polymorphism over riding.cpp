#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"Method A";
		}
};
class B : public A
{
	public:
		void display()
		{
			cout<<"\nMethod B";
		}
};
main()
{
	B obj;
	obj.A::display();
	obj.display();
}