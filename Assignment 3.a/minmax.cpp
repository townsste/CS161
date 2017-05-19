/*****************************************************************************************

Author: Stephen Townsend
Date: 06/30/2016
Description: This program is used to calculate the minimum and maximum of the integers
that the user inputted.  The progeam will accept how many integers the user would like
to enter.  Then there will be a prompt to enter that many integers.  Once all of the
inputs satisfy the counter then the program will output the minimum and maximum of
the inputed integers.

*****************************************************************************************/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int integerMax = -2147483647, //To set the max range low enough to capture all negative integers
		integerMin = 2147483647; //To set the min range high enough to capture all positive integers

	int numberOfIntegers, //Users integer amount
		userInputs = 0, //Holds the users integer inputs
		counter = 0;

	cout << "How many integers would you like to enter? " << endl;
	cin >> numberOfIntegers;

	cout << "Please enter " << numberOfIntegers << " integers" << endl;

	while (numberOfIntegers > counter) //Allows for inputs up to the users interger amount
	{
			cin >> userInputs;
			counter++; //Counts integer inputs to get to users amount

			//Compare the input with current min and max	
		if (userInputs < integerMin)
				integerMin = userInputs;
	
		if (userInputs > integerMax)
				integerMax = userInputs;
	}

	cout << "min: " << integerMin << endl;
	cout << "max: " << integerMax << endl;

	return 0;
}
