/*
3.1  Write a program to find the multiplication values and the cubic values using inline function
*/

#include<iostream>
using namespace std;

class value
{
	int n;
	
	
	public : 
		value(int m)
		{
			n=m;
		}
		void printvalue()
		{
			cout<<"\n\n\t Multiplication = "<<n*n;
			cout<<"\n\n\t Cube = "<<n*n*n;
		}
		
};

main()
{
	value V(5);

	
	V.printvalue();
	
}