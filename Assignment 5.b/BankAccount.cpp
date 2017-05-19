/*****************************************************************************************

Author: Stephen Townsend
Date: 07/12/2016
Description: This is the BankAccount.cpp that contains the function definitions for the 
bank account header. Class member has a function.  The constructor function (bank account) 
is used to initialize each variable in private.  The get withdraw function is used to 
calculate the customer balance subtract the amount withdrawn.  The deposit function is 
used to calculate the customer balance plus the amount deposited.

*****************************************************************************************/

#include"BankAccount.hpp"
#include<string>


/*****************************************************************************************
**										BankAccount(Three parameter)
** Used to initialize each variable in private
*****************************************************************************************/
BankAccount::BankAccount(string name, string ID, double balance)
{
	customerName = name;
	customerID = ID;
	customerBalance = balance;
}

/*****************************************************************************************
**										getCustomerName
** 
*****************************************************************************************/
string BankAccount::getCustomerName()
{
	return customerName;
}

/*****************************************************************************************
**										getCustomerID
**
*****************************************************************************************/
string BankAccount::getCustomerID()
{
	return customerID;
}

/*****************************************************************************************
**										getCustomerBalance
** 
*****************************************************************************************/
double BankAccount::getCustomerBalance()
{
	return customerBalance;
}

/*****************************************************************************************
**										withdraw
** Calculates the customer balance subtract the amount withdrawn
*****************************************************************************************/
double BankAccount::withdraw(double c_Withdraw)
{
	customerBalance -= c_Withdraw;

	return customerBalance;
}

/*****************************************************************************************
**										deposit
** Calculates the customer balance plus the amount deposited
*****************************************************************************************/
double BankAccount::deposit(double c_Deposit)
{
	customerBalance += c_Deposit;

	return customerBalance;
}