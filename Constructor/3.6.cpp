/*
3.6  Write a C++ program to implement a class called Employee that has private member variables for name,
employee ID, and salary. Include member functions to calculate and set salary based on employee performance. 
Using of constructor
*/

#include<iostream>
using namespace std;

class Employee
{
	string name;
	int id;
	int salary;
	float per=0;
	
	public : 
		
		void getdata()
		{
			cout<<"\n\n\t Enter a Employee Name : ";
			cin>>name;
			cout<<"\n\n\t Enter a Employee Id : ";
			cin>>id;
			cout<<"\n\n\t Enter a Employee Salary : ";
			cin>>salary;
			cout<<"\n\n\t Enter a Employee Performance in number than incress salary: ";
			cin>>per;
			per=per * salary;
					
		}	
		
		void printdata()
		{
			cout<<"\n\n\t Employee Name : "<<name;
			cout<<"\n\n\t Employee Id : "<<id;
			cout<<"\n\n\t Employee Salary : "<<salary;
			cout<<"\n\n\t Employee Salary with Good Performance : "<<per;
		}
};

main()
{
	Employee E;
	
	E.getdata();
	E.printdata();
}