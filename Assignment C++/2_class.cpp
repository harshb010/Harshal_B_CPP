/* Assign and print the roll number, phone number 
and address of two students having names "Sam"
and "John" respectively by creating two 
objects of the class 'Student'. */
#include<iostream>
using namespace std;
class Students {
	private :
		int roll_no;
		
		char add[50],name[50],phone_no[20];
	public :
		void get()
		{
			cout<<"Enter the Roll no, Phone number, address and Name of students :\n";
			cin>>roll_no>>phone_no>>add>>name;
		}
		void show()
		{
			cout<<"\nRoll no : "<<roll_no<<"\nPhone Number : "<<phone_no<<"\nAddress : "<<add<<"\nName : "<<name;
			
		}
		
};
main()
{
	Students s1,s2;
	s1.get();
	s2.get();
	s1.show();
	cout<<"\n";
	s2.show();
	
}