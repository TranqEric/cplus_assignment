#include<iostream>
using namespace std;
class fib
{
	int n, i, n1 = 0, n2 = 1, n3;
	public:
	void input()
	{
		cout<<"\nEnter a number upto which you want fibonacci series: ";
		cin>>n;
	}	
	void display()
	{
		cout<<n1<<" "<<n2<<" ";
		for (i=3; i<=n; i++)
		{
			n3 = n1 + n2;
		
			n1 = n2;
			n2 = n3;
			cout<<n3<<" ";
		}
	}
};
main()
{
	fib obj;
	obj.input();
	obj.display();
	
}