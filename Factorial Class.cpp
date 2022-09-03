#include<iostream>
using namespace std;
class fact
{
	
	int i,n, ans = 1;
	public:
	void input()
	{
		cout<<"\nEnter the Number: ";
		cin>>n;
	}
	void display()
	{
		for(i=1; i<=n; i++)
		{
			ans = ans * i;
		}
		cout<<ans;		
	}

};
main()
{
	fact obj;
	obj.input();
	obj.display();
}