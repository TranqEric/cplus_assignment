#include<iostream>
using namespace std;
class A
{
	int x,y;
	
	public:
		A()
		{
			cout<<"\nDefault constructor called.";
		}
		
		A(int a, int b)
		{
			cout<<"\nParameterised Constructor called!";
			x = a;
			y = b;
		}
		A(const A &old)
		{
			x = old.x;
			y = old.y;
			
			cout<<"\nCopy Constructor Called!\n";
		}
		void print()
		{
			cout<<x<<" "<<y<<"\n";
		}
};

main()
{
	A a;
	A obj(10,20);
	obj.print();
	A obj2(obj);
	obj2.print();
}