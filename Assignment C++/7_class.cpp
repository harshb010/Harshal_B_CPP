/*Write a program to print the area of a rectangle by creating a class named 'Area'
taking the values of its length and breadth as parameters of its constructor and 
having a function named 'returnArea' which returns the area of the rectangle. 
Length and breadth of the rectangle are entered through keyboard.*/
#include<iostream>
using namespace std;
class Area{
	private:
		int l,b;
	public:
		Area()
		{
			
			cin>>l>>b;
		}
		void getArea()
		{
			cout<<"\n The Area of the rectangle is : "<<l*b;
		}
	
};
main()
{
	Area a1,a2;
	cout<<"\nEnter the Length and Breadth of the Rectangle : ";
	a1.getArea();
	cout<<"\nEnter the Length and Breadth of the Rectangle : ";
	a2.getArea();
}