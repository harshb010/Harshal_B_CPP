/*Write a program to calculate the average height of all the students of a class. 
The number of students and their heights are entered by the user.*/
#include<iostream>
using namespace std;
main()
{
	int height[30];
	int n,i,summ=0;
	float avg;
	cout<<"\nEnter the number of students :";
	cin>>n;
	cout<<"\nEnter the Height of "<<n<<" Students :";
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the height :";
		cin>>height[i];
		summ=summ+height[i];
	}
	avg=summ/n;
	cout<<"\n Average Height of Students in Class:"<<avg;
}