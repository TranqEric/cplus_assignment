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
class D : public C, public B
{
	public:
		void displayD()
		{
			cout<<"\nD Class";
		}
};
main()
{
	D obj;
	obj.B::displayA();
	obj.displayB();
	obj.displayC();
	obj.displayD();
}