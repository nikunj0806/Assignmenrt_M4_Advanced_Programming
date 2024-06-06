/*
3.3  Write a C++ program to create a class called Car that has private member variables for company, model, 
and year. Implement member functions to get and set these variables.
*/

#include<iostream>
using namespace std;

class car
{
	private : 
		string company;
		string model;
		int year;
		
	public : 
		
		void details()
		{
			cout<<"\n\n\t Enter a Car Company name : ";
			cin>>company;
			cout<<"\n\n\t Enter a Car model : ";
			cin>>model;
			cout<<"\n\n\t Enter a car year : ";
			cin>>year;	
		}	
		
		void print()
		{
			cout<<"\n\n\t Car Company Name : "<<company;
			cout<<"\n\n\t Car Model : "<<model;
			cout<<"\n\n\t Car Year : "<<year;
			
		}
		
};

main()
{
	car C;
	
	C.details();
	C.print();
}