/* Write a program to print the area of two rectangles having 
sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' 
with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor.*/
#include<iostream>
using namespace std;
class Rectangle{
	private:
		int a,b,area;
	public:
		int Area(int x, int z)
		{
			a=x;
			b=z;
			area=a*b;
			return(area);
		}
		
		
	
};
main()
{
	Rectangle r1,r2;
	cout<<"Area of 1st Rectangle : "<<r1.Area(4,5);

	cout<<"\nArea of 2nd Rectangle : "<<r2.Area(5,8);
	
	
}