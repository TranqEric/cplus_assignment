#include<iostream>
using namespace std;
class example
{
	public:
		int health;
		example(int h)
		{
			health=h;
		}
};
main()
{
	example character(5);
	cout<<character.health;
}