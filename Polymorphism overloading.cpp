#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\nFirst Method called.";
		}
		void display(int a)
		{
			cout<<"\nSecond Method called.";
		}
		void display(char b)
		{
			cout<<"\nThird MEthod called.";
		}
		void display(int x, int y)
		{
			int z;
			z = x + y;
			cout<<"\nAddition = "<<z;
		}
};
main()
{
	A a;
	a.display();
	a.display(5);
	a.display('c');
	int p,q;
	cout<<"Enter P & Q : ";
	cin>>p>>q;
	a.display(p,q);
}