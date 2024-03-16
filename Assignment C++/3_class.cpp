/*Write a program to print the area and perimeter 
of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function 
to print the area and perimeter. */
#include<iostream>
using namespace std;
class Triangle{
	private:
		int a=3,b=4,c=5,perimeter,area;
	public:
		void get()
		{
			area = (a*b)/2;
			perimeter=a+b+c;
			cout<<"Area : "<<area;
			cout<<"\nPeriemter : "<<perimeter;
		}
};
main()
{
	Triangle t1;
	t1.get();
}
