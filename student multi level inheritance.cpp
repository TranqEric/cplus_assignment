#include<iostream>
using namespace std;
class student
{
	int roll_no;
	
	public:
		void roll()
		{
			cout<<"Enter your Roll Number: ";
			cin>>roll_no;	
		}	
};
class test : public student
{
	public:
		int marks[2], total = 0,i;
		void mark()
		{
			for(i=0; i<=1; i++)
			{
				cout<<"Enter marks for subject "<<i+1<<":";
				cin>>marks[i];
				total = total + marks[i];
			}
		}	
};
class res : public test
{
	public:
		void display()
		{
			cout<<"Total marks: "<<total;
		}
	
};
main()
{
	res a;
	a.roll();
	a.mark();
	a.display();
}