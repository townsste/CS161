/*****************************************************************************************

Author: Stephen Townsend
Date: 06/25/2016
Description: This program is used to display the average of 5 numbers of the users
choice.  The user will input 5 real numbers.  The program will then inform the user 
the average of their 5 numbers.

*****************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	double numberOne,
		numberTwo,
		numberThree,
		numberFour,
		numberFive;
	double numberSum,
		averageNumber;

	cout << "Please Enter Five Number" << endl;

	// User will input 5 numbers
	cin >> numberOne;
	cin >> numberTwo;
	cin >> numberThree;
	cin >> numberFour;
	cin >> numberFive;

	cout << "The Average of those numbers is: \n";

	// Sum the numbers
	numberSum = (numberOne + numberTwo + numberThree + numberFour + numberFive);

	// Calculate the average of 5 numbers from sum
	averageNumber = numberSum / 5;

	// Output Average
	cout << averageNumber << endl;

	return 0;
}