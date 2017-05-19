/*****************************************************************************************

Author: Stephen Townsend
Date: 07/01/2016
Description: This program is used to open a file specified by name from the user.  The
program will check to see if the file is accessable.  Once the file is opened, the
program will read the data and add up the integers within.  Once all of the data is
read and the integers have been summed, the file will be closed.  The program will then
create a file called sum.txt that will only display the summed integers.

*****************************************************************************************/

#include<iostream>	
#include<fstream>
#include<string>

using namespace std;


int main()
{
	ifstream inputText; //Create the input stream
	ofstream outputText; //Creat the output stream
	string filename; //Used to capture users filename
	int sumTextInteger = 0;
	int textInteger = 0;

	cout << "Enter the filename: ";
	cin >> filename;

	//Open the input file
	inputText.open(filename.c_str());

	// Test if file opened
	if (inputText)
	{
		while (inputText >> textInteger) //If a value was read
			sumTextInteger += textInteger; //Sum the integers in the file
	}
	else
	{
		//Display Error Message
		cout << "could not access file\n";
	}
	//Close Input Test File
	inputText.close();

	//Open Output Text File
	outputText.open("sum.txt");

	//Write summed integers to sum.txt
	outputText << sumTextInteger;

	//Close Output Text File
	outputText.close();

	return 0;
}