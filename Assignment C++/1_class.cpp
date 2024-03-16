/*Create a class named 'Student' with a string variable 'name' 
and an integer variable 'roll_no'. Assign the value of 
roll_no as '2' and that of name as "John" by creating 
an object of the class Student.*/
#include<iostream>
using namespace std;
class Student {
	
	private :
	int roll_no;
	char name[50];
	public :
		void get()
		{
			cout<<"Enter the roll number and Name of students :";
			cin>>roll_no>>name;
		}
		void show()
		{
			cout<<"\nRoll No : "<<roll_no<<"\nName : "<<name;
		}
	

		
	
	
};
main()
{
	Student s1;
	s1.get();
	s1.show();
	
	
}