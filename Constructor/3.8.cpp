/*
3.8. Write a C++ program to implement a class called Student that has private member variables for name, 
class, roll number, and marks. Include member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement using of aggregation
*/
#include<iostream>
using namespace std;

class student 
{
	string name,address;
	string classname;
	int rollno, marks;
		
	public : 
		void getinfo()
		{
			cout<<"\n\n\t Enter a student name : ";
			cin>>name;
			cout<<"\n\n\t Enter a student address : ";
			cin>>address;
			cout<<"\n\n\t Enter a student classname : ";
			cin>>classname;
			cout<<"\n\n\t Enter a student rollno : ";
			cin>>rollno;
			cout<<"\n\n\t Enter a student marks : ";
			cin>>marks;
		}
		void printinfo()
		{
			cout<<"\n\n\t Student Name : "<<name;
			cout<<"\n\n\t Student Address : "<<address;
			cout<<"\n\n\t Student clssname : "<<classname;
			cout<<"\n\n\t Student roll no : "<<rollno;
			cout<<"\n\n\t Student Marks :  "<<marks;
		}
		void gread()
		{
			if(marks>90)
			{
				cout<<"\n\n\t gread A ";
			}
			else if(marks>80)
			{
				cout<<"\n\n\t gread B ";
			}
			else if(marks>70)
			{
				cout<<"\n\n\t gread C ";
			}
			else if(marks>50)
			{
				cout<<"\n\n\t gread D ";
			}
			else 
			{
				cout<<"\n\n\t Fail ";
			}
		}
};

main()
{
	student S;
	
	S.getinfo();
	S.printinfo();
	S.gread();
}