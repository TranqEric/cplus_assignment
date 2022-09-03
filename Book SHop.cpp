#include<iostream>
#include<string.h>
using namespace std;
class library
{
	char auth[20], title[20], pub[20];
	int price;
	
	public:
		void assign()
		{
			cout<<"\nEnter Author's Name: ";
			cin>>auth;
			cout<<"Enter Title: ";
			cin>>title;
			cout<<"Enter Price: ";
			fflush(stdin);
			cin>>price;
			cout<<"Enter Publisher's Name: ";
			cin>>pub;
		}
		
		void display()
		{
			cout<<"\nAuthor's Name: "<<auth;
			cout<<"\nBook Title: "<<title;
			cout<<"\nBook Price: "<<price;
			cout<<"\nPublisher's Name: "<<pub;
		}
};
main()
{
	int t;
	char n;
	
	
	cout<<"\t\tWelcome To Book Shop!!\n";
	
	library t1,t2,t3;
	t1.assign();
	t2.assign();
	t3.assign();
//	t4.assign();
//	t5.assign();
	
	book:
	cout<<"\nEnter Number of the book: ";
	cin>>t;
	
	switch(t)
	{
		case 1:
			t1.display();
			break;
			
		case 2:
			t2.display();
			break;
		
		case 3:
			t3.display();
			break;
		
		default:
			cout<<"Invalid Input";	
	}
	
	cout<<"\n\nDo you want to check for another book? (Y / N)";
	cin>>n;
	
	if (n == 'y' || n == 'Y')
	{
		goto book;
	}
	else
	{
		cout<<"\n\tThank You for Visiting!!";
	}
	
	
}