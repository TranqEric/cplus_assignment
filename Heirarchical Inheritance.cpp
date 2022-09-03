#include<iostream>
using namespace std;
class A //grand-parent class
{
	public:
		void displayA()
		{
			cout<<"\nA Class";
		}
};
class B : public A  // Parent class
{
	public:
		void displayB()
		{
			cout<<"\nB Class";
		}
};
class C : public A
{
	public:
		void displayC()
		{
			cout<<"\nC Class";
		}
};
main()
{
	B obj;
	obj.displayA();
	obj.displayB();
	
	C c;
	c.displayA();
	c.displayC();
}