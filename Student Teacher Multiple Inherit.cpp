#include<iostream>
using namespace std;
class person
{
	char name[20];
	int age;
	
	public:
	void naam()
	{
		cout<<"\nEnter your Name: ";
		cin>>name;
		cout<<"Enter your Age: ";
		cin>>age;
		cout<<"\n";
	}
		
};
class student : public person
{
	int marks[5], i ,total = 0, perc;
	
	public:
		void percentage()
		{
			for(i=0;i<=4;i++)
			{
				cout<<"Enter your subject "<<i+1<<" marks: ";
				cin>>marks[i];
				total = total + marks[i];
			}
			cout<<"\nTotal Marks: "<<total;
			perc = total/5;
			cout<<"\nPercentage: "<<perc;
		}
};
class teacher : public person
{
	int sal, daily;
	
	public:
		void salary()
		{
			cout<<"Enter your Salary: ";
			cin>>sal;
			daily = sal/30;
			cout<<"Your daily wage is: "<<daily;
		}	
};
main()
{
	int n;
	char c;
	
	cout<<"\t\tWELCOME!!";
	cout<<"\nAre you a Student or a Teacher?";
	again:
	cout<<"\nIf you are a student please enter 1.";
	cout<<"\nIf you are a teacher please enter 2.";
	cin>>n;

	student a;
	teacher b;

	switch(n)
	{
		case 1:
			a.naam();
			a.percentage();
		break;
		case 2:
			b.naam();
			b.salary();
		break;
		default:
			cout<<"\nPlease enter a valid input!";
	}
	
	cout<<"\n\nDo you want to check or perform another action or try again?";
	cin>>c;
	
	if(c == 'y' || c == 'Y')
	{
		goto again;
	}
	else
	{
		cout<<"\n\t\tThankyou For Using My Program!";
	}
		
}