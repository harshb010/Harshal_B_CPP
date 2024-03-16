/*Write a program that would print the information 
(name, year of joining, salary, address) of three employees by creating a class 
named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat*/
#include<iostream>
using namespace std;
class Employee{

	private:
		int yoj;
		char name[30], add[30];
		
	public:
		void get()
		{
			
			cout<<"\nEnter the Year of joining, Name and Address : ";
			cin>>yoj>>name>>add;
			
		}
		void set()
		{
				
				cout<<yoj<<"           "<<name<<"            "<<add<<"\n";
			
		}
};
main()
{
	Employee e1,e2,e3;
	e1.get();
	e2.get();
	e3.get();
	cout<<"\n\nEmployee Information :";
	cout<<"\n\n";
	cout<<"\nYear of Join      Name           Address   ";
	cout<<"\n-------------------------------------------------\n";
	e1.set();
	e2.set();
	e3.set();

	
}