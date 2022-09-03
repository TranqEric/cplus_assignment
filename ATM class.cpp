#include<iostream>
#include<string.h>
using namespace std;
class A
{
	char name[20], acctype;
	double accno, bal;
	int with, dep;
	
	public:
	void assign()
	{
		cout<<"\nWelcome To ATM!";
		cout<<"\nPlease Enter your name: ";
		cin>>name;
		cout<<"\nPlease Enter your Account Number: ";
		cin>>accno;
		cout<<"\nPlease Enter your Account Type: ";
		fflush(stdin);
		cin>>acctype;
		cout<<"\nPlease Enter your current Balance: ";
		fflush(stdin);
		cin>>bal;
	}
	
	void withdraw()
	{
		cout<<"\nEnter an amount to withdraw: ";
		cin>>with;
		if(bal>with)
		{
			bal = bal-with;
			cout<<"\nCurrent balance is: "<<bal;
		}
		else
		{
			cout<<"\nInsufficient Balance!";
		}
		
	}
	
	void deposit()
	{
		cout<<"\nPlease Enter an Amount to deposit: ";
		cin>>dep;
		bal = bal + dep;
		cout<<"\nYour Total Balance is: "<<bal;
	}
	
	void display()
	{
		cout<<"\nYour Name is:" << name << "\n\nCurrent Balance is" << bal;
	}
};
main()
{
	int n,a;
	char c;
	
	A c1,c2,c3;
	c1.assign();
	c2.assign();
	c3.assign();
	
	cout<<"\nEnter User Number: ";
	cin>>n;
	
	switch(n)
	{
		case 1:
			user1:
			cout<<"\nSelect An operation to perform: ";
			cout<<"\n1. Withdraw \n2. Deposit \n3. Display Balance and Account name";
			cin>>a;
			
			switch(a)
			{
				case 1:
					c1.withdraw();
					break;
				
				case 2:
					c1.deposit();
					break;
					
				case 3:
					c1.display();
					break;
					
				default:
					cout<<"Enter A valid Input!";
			}
			cout<<"\n\nDo you want to perform Another Operation";
			fflush(stdin);
			cin>>c;
			if(c == 'y' || c== 'Y')
			{
				goto user1;
			}
			break;
			
			case 2:
			user2:
			cout<<"\nSelect An operation to perform: ";
			cout<<"\n1. Withdraw \n2. Deposit \n3. Display Balance and Account name";
			cin>>a;
			
			switch(a)
			{
				case 1:
					c2.withdraw();
					break;
				
				case 2:
					c2.deposit();
					break;
					
				case 3:
					c2.display();
					break;
				
				default:
					cout<<"Enter A valid Input!";
			}
			cout<<"\n\nDo you want to perform Another Operation";
			cin>>c;
			if(c == 'y' || c== 'Y')
			{
				goto user2;
			}
			break;
			
			case 3:
			user3:
			cout<<"\nSelect An operation to perform: ";
			cout<<"\n1. Withdraw \n2. Deposit \n3. Display Balance and Account name";
			cin>>a;
			
			switch(a)
			{
				case 1:
					c3.withdraw();
					break;
				
				case 2:
					c3.deposit();
					break;
					
				case 3:
					c3.display();
					break;
					
				default:
					cout<<"Enter A valid Input!";	
			}
			cout<<"\n\nDo you want to perform Another Operation (Y / N)";
			cin>>c;
			if(c == 'y' || c== 'Y')
			{
				goto user3;
			}
			break;
		default:
			cout<<"Enter a Valid Input!";
	}
	
}