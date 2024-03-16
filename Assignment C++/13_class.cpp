/*Write a program to print the roll number and average marks of 8 students in 
three subjects (each out of 100). The marks are entered by the user and the 
roll numbers are automatically assigned.*/
#include<iostream>
using namespace std;

struct student
{
    char name[50];
    int roll,a,b,c;
    float average;
} s[8];

int main()
{
    cout << "\nEnter information of students: " ;
	for(int i=0; i<8;i++)
    {
        cout << "\nEnter name: ";
        cin >> s[i].name;

        cout << "Enter marks of Physics Chem and Maths ";
        cin >> s[i].a>>s[i].b>>s[i].c;
	 }
	 for(int i=0;i<8;i++)
	{
	 s[i].average = (s[i].a+s[i].b+s[i].c)/3;
 	}

    cout <<"\nInformation of Students : " ;
    cout<<"\nRoll no        Name        Average marks";
    cout<<"\n-------------------------------------------------\n";

        for(int i=0;i<8;++i)
    {
        cout<<" "<<i+1<<"          "<<s[i].name<< "           " <<s[i].average<<"\n";
    }

   
}
