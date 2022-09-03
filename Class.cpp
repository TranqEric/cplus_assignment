#include<iostream>
using namespace std;
class A
{
	int a,b,ans;
	public:
	void input()
	{
		cout<<"Enter A: ";
		cin>>a;
		
		cout<<"Enter B: ";
		cin>>b;
	}
	
	void add()
	{
		ans = a+b;
	}
	
	void sub()
	{
		ans = a - b;
	}
	
	void mul()
	{
		ans = a * b;
		
	}
	void div()
	{
		ans = a/b;
	}
	void display()
	{
		cout<<"\nOutput: "<<ans;
	}
};
main()
{
	A obj;
	obj.input();
	obj.add();
	obj.display();
	obj.sub();
	obj.display();
	
	A a;
	a.input();
	a.mul();
	a.display();
	a.div();
	a.display();
}

