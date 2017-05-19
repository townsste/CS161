/*****************************************************************************************

Author: Stephen Townsend
Date: 07/07/2016
Description: This program is used to calculate a hailstone.  The user will input a integer
and the program will test that integer.  If even then the integer will be divided by two.
If odd then the integer will be multiplied by three and one added to it.  The program will
keep performing these calculations, until it gets to 1.  Once the loop is staified, the 
function will send the counter back to the calling function.

*****************************************************************************************/
#include <iostream>
using namespace std;

int hailstone(int CarryOver); //Function Prototype

/*int main()
{
	int steps;
	int userInput;

	cout << "Enter a number: ";
	cin >> userInput;

	steps = hailstone(userInput);

	cout << steps << endl;

	cin.get();
	cout << "\nPress any key to continue";
	cin.get();
	return 0;
}*/

/*****************************************************************************************
** Description: hailstone function is used to calculate a hailstone from the user input.
** It will first test if the number is even then calculate accordingly.  Will return count
*****************************************************************************************/
int hailstone(int carryOver)
{
	int stepCounter = 0;

	//Loop until carryOver is 1
	while (carryOver != 1) 
	{
		//Test if even
		if (carryOver % 2 == 0) 
		{	
			//Formula: even number / 2
			carryOver /= 2;
		}
		else
		{	
			//Formula: odd number * 3 + 1
			carryOver *= 3; //Multiply carryOver by 3
			carryOver += 1; //Add 1 to carryOver
		}

		stepCounter++; //Loop counter
	} 

	return stepCounter; //Return counter to calling function
}