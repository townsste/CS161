/*****************************************************************************************

Author: Stephen Townsend
Date: 06/26/2016
Description: This program is used to calculate the exact change that the user would 
recieve given their input.  The input will be in cents from 0 - 99.  Using the least
amount of coins, the output will display the exact change needed based on the input. 

*****************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	int centsAmount, 
		quarter, 
		dime, 
		nickel, 
		penny;

	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> centsAmount;

	// Calculate amount of Quarters
		quarter = centsAmount / 25;
			centsAmount %= 25;  //Q Remainder tracker

	// Calculate amount of Dimes
		dime = centsAmount / 10;
			centsAmount %= 10;	//D Remainder tracker

	// Calculate amount of Nickels
		nickel = centsAmount / 5;
			centsAmount %= 5;	//N Remainder tracker

	// Calculate amount of Pennies
		penny = centsAmount / 1;	//P Remainder tracker

		cout << "Your change will be:\n"
			 << "Q: " << quarter << endl
			 << "D: " << dime << endl
			 << "N: " << nickel << endl
			 << "P: " << penny << endl;

		return 0;
}