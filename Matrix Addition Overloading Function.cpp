#include<iostream>
using namespace std;
class Matrix
{
	int a[5], i;
	
	public:
		Matrix()
		{
			cout<<"Enter Matrix Data: \n";
			for(i=0;i<5;i++)
			{
				cout<<"["<<i+1<<"]= ";
				cin>>a[i];
			}
		}
		Matrix(Matrix obj1 , Matrix obj2)
		{
			for(i=0;i<5;i++)
			{
				a[i] = obj1.a[i] + obj2.a[i];
			}
			cout<<"\nAddtion of Matrix is:\n";
			for(i = 0; i<5; i++)
			{
				cout<<"\n["<<i+1<<"]= "<<a[i];
			}
		}
	
};
main()
{
	Matrix m1;
	Matrix m2;
	Matrix m3(m1,m2);
}