/*Print the average of three numbers entered by the user by creating a 
class named 'Average' having a function to calculate and print the average 
without creating any object of the Average class.*/
#include<iostream>
using namespace std;
class Average{
	private:
		int a,b,c;
	protected:
	float avg;	
		
	public:
		void set()
		{
			cout<<"Enter the Three Numbers : ";
			cin>>a>>b>>c;
		}
		
		void get()
		{
			avg=(a+b+c)/3;
			cout<<" Average of the Three numbers is : "<<avg;
		}
		
};
class b : public Average
{
	
};
main()
{
	b obj;
	obj.set();
	obj.get();
	
}