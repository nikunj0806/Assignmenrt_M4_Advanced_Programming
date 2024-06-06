/*
3.4  Write a C++ program to implement a class called Bank Account that has private member variables for
account number and balance. Include member functions to deposit and withdraw money from the account.
*/

#include<iostream>
using namespace std;

class Bank
{
	int ac_num, balance;
	int deposite, deposite_balance;
	int withdraw, withdraw_balance;
	
	public : 
		 
		 void getinfo()
		 {
			cout<<"\n\n\t Enter a Bank Account Number : ";
			cin>>ac_num;
			cout<<"\n\n\t Enter a Bank Account Balance : ";
			cin>>balance; 	
			cout<<"\n\n\t Enter Deposite Amount : ";
		 	cin>>deposite;
		 	cout<<"\n\n\t Enter Withdraw amount : ";
		 	cin>>withdraw;
		 }	
		
		 
		 void depositeinfo()
		 {
		 	deposite_balance=balance+deposite;
		 	
		 }
		 
		 void withdrawinfo()
		 {
		 	withdraw_balance=deposite_balance-withdraw;
		 }
		 
		 void print()
		 {
		 	cout<<"\n\n\t Bank Account Number : "<<ac_num;
		 	cout<<"\n\n\t Bank Account Balance : "<<balance;
		 	cout<<"\n\n\t After Deposite Total Balance : "<<deposite_balance;
		 	cout<<"\n\n\t Total balance After Withdraw : "<<withdraw_balance;
		 }
};

main()
{
	Bank B;
	B.getinfo();
	B.depositeinfo();
	B.withdrawinfo();
	B.print();
}