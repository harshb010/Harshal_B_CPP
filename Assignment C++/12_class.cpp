/*Write a program to print the name, salary and date of joining of 10 employees 
in a company. Use array of objects*/
#include<iostream>
using namespace std;
class Employee{
	private :
		char name[50], date[50];
		int salary;
	public :
		void set()
		{
			cout<<"\nEnter the Name, Salary and Date of Joining of Employee : ";
			cin>>name>>salary>>date;
		}
		void get()
		{
			cout<<"\n          "<<name<<"              "<<salary<<"             "<<date<<"\n";
		}
	
};
main()
{
	int i;
	Employee e1[10];
	for(i=0;i<10;i++)
	{
		e1[i].set();
	}
		cout<<"\nEmployee Details : \n";
			cout<<"\n         Name             Salary              Date of Joining ";
			
			cout<<"\n-----------------------------------------------------------";
			
			
	for(i=0;i<10;i++)
	{
		e1[i].get();
	}
	
}