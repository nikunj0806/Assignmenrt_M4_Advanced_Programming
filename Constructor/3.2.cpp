/*
2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
*/
#include<iostream>
using namespace std;

class calculator
{
	int a,b	;
	
	public :
		calculator(int n, int m)
		{
			a=n;
			b=m;
		}
		
		void print_val()
		{ 
			cout<<"\n\n\t Number 1 = "<<a;
			cout<<"\n\n\t Number 2 = "<<b;
			cout<<"\n\n\n\t Addition = "<<a+b;
			cout<<"\n\n\n\t Subtraction = "<<a-b;
			cout<<"\n\n\n\t Division = "<<a/b;
			cout<<"\n\n\n\t Multiplication = "<<a*b;
		}
};

main()
{
	calculator C(50,25);
	
	C.print_val();
}