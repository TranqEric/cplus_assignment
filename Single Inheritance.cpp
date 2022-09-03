#include<iostream>
using namespace std;
class A //parent class
{
	public:
		void displayA()
		{
			cout<<"\nA Class";
		}
};
class B : public A  // child class
{
	public:
		void displayB()
		{
			cout<<"\nB Class";
		}
};
main()
{
	B obj;
	obj.displayA();
	obj.displayB();
}