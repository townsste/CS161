/*****************************************************************************************

Author: Stephen Townsend
Date: 06/25/2016
Description: This program is used to display the Fahrenheit conversion of a Celsius
temperature.  The user will be prompted to input a Celsius temperature and the output
will be in Fahrenheit.

*****************************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	double tempF,
		tempC;

	cout << "Please enter a Celsius temperature. \n";

	cin >> tempC;

	// Convert Celsius into Fahrenheit. Formula: F = (9/5)*C + 32
	tempF = ((9.0 / 5.0)*tempC) + 32;

	// Output Fahrenheit Temp
	cout << "The equivalent Fahrenheit temperature is: \n" << tempF << endl;

	return 0;
}