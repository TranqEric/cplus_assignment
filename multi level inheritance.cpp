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
class C : public B// child class
{
	public:
		void displayC()
		{
			cout<<"\nC Class";
		}
};
main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
}