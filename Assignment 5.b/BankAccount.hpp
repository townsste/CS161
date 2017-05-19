/*****************************************************************************************

Author: Stephen Townsend
Date: 07/12/2016
Description: This header is used to create a Bank Account class.  This will be the class
declaration.  The private variables will involve two strings (customerName & customerID) 
and one double (customerBalance).  In Public there are three accessors and two double 
class members.  Lastly the constructor will accept three parameters.

*****************************************************************************************/

#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include<string>

using namespace std;

//BankAccount class declaration
class BankAccount
{
private:
	string customerName;
	string customerID;
	double customerBalance;

public:
	//Class members
	string getCustomerName();
	string getCustomerID();
	double getCustomerBalance();
	double withdraw(double);
	double deposit(double);
	
	//three-parameter constructor
	BankAccount(string, string, double);
};
#endif