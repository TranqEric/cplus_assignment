#include<iostream>
using namespace std;
class areas
{
	public:
		void area(double a) // circle
		{
			int w;
			w = a*a*3.14;
			cout<<"\nArea of Circle is: "<<w;
		}
		void area (float b) //square
		{
			int x;
			x = b * b;
			cout<<"\nArea of Square is: "<<x;	
		}
		void area (double c, double d) // rectangle
		{
			int y;
			y = c * d;
			cout<<"\nArea of Rectangle is: "<<y;
		}
		void area (float e, float f) // triangle
		{
			int z;
			z = 0.5*e*f;
			cout<<"\nArea of triangle is: "<<z;
		}
};
main()
{
	double a,c,d;
	int n;
	float b,e,f;
	
	cout<<"\n\t\tArea Calculator!";
	cout<<"\n\nFor Area of Circle    press 1.\nFor Area of Square    press 2.\nFor Area of Rectangle press 3.\nFor Area of Triangle  press 4.\n";
	cin>>n;
	areas p;
	switch(n)
		{
			case 1:
				cout<<"\nEnter Radius : ";
				cin>>a;
				p.area(a);
			break;
			
			case 2:
				cout<<"\nEnter Length of Square: ";
				cin>>b;
				p.area(b);
			break;
			
			case 3:
				cout<<"\nEnter Length of Rectangle: ";
				cin>>c;
				cout<<"Enter breadth of Rectangle: ";
				cin>>d;
				p.area(c,d);
			break;
			
			case 4:
				cout<<"\nEnter Length of Triangle: ";
				cin>>e;
				cout<<"Enter Breadth of Triangle: ";
				cin>>f;
				p.area(e,f);
			break;
			
			default:
				cout<<"\nINVALID INPUT!";
		}	
}