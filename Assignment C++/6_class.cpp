/*Write a program to print the area of a rectangle by creating a class named 'Area' 
having two functions. First function named as 'setDim' takes the length and breadth 
of the rectangle as parameters and the second function named as 'getArea' returns the 
area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
*/
#include<iostream>
using namespace std;
class Area{
	private:
		int l,b;
	public:
		void setDim()
		{
			cout<<"\nEnter the Length and Breadth of the Rectangle : ";
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
	a1.setDim();
	a1.getArea();
	a2.setDim();
	a2.getArea();
}