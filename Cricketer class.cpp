#include<iostream>
using namespace std;
class cricketer
{
	public:
		int id,i;
		int runs[5];
		char name[20];
		
		void get()
		{
			cout<<"\nEnter Cricketer ID: ";
			cin>>id;
			cout<<"\nEnter Name: ";
			cin>>name;
			cout<<"\nEnter Runs: ";
			for(i=0;i<=4;i++)
			{
				cout<<"Match "<<i+1<<"=";
				cin>>runs[i];
			}
		}
		
};
class batsman : public cricketer
{
	public:
	int total_runs, avg_runs, best_per;
	int i;
	
		
		void total()
		{
			total_runs=0;
			for(i=0;i<=4;i++)
			{
				total_runs = total_runs + runs[i];
			}
			cout<<"\nTotal Run: "<<total_runs;
		}
		
		void avg()
		{
			avg_runs = total_runs/5;
			cout<<"\nAverage Runs: "<<avg_runs;
		}
		
		void output()
		{
			cout<<"\nCricketer ID: "<<id;
			cout<<"\nCricketer Name: "<<name;
			cout<<"\nTotal Runs: "<<total_runs;
			cout<<"\nAverage Runs: "<<avg_runs;
		}
};
main()
{
	batsman b;
	b.get();
	b.total();
	b.avg();
	b.output();
}
