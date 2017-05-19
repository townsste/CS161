/*****************************************************************************************

Author: Stephen Townsend
Date: 07/21/2016
Description: This program is used to find the mode(s) in an array.  The program will be 
going through the findMode (two paramter) function.  From there the program will be 
directed to sort the array.  The sorted array will be sent to the findMode (three parameter) 
function.  This function will call the getFreuency function to find the maximum frequency 
of integers in the array.  Once the frequency is found, findMode will then find the mode 
in the array based on the frequency and push it into a vector.  The vector is created and 
stored in the findMode (two parameter) function.  The vector will be returned to the 
calling function (main.cpp).

*****************************************************************************************/

#include <vector> //needed to create a vector
#include <algorithm> //used by sort function

using namespace std;


/*****************************************************************************************
**										findMode (Two parameter)
**Returns a vector with the mode(s) from an array.
*****************************************************************************************/
vector<int> findMode(int mainArray[], int size)
{
//Vector
	vector<int> results;

//Prototypes
	void sortArray(int[], int);

	void findMode(int[], int, vector<int> &);

//Call Functions
	sortArray(mainArray, size);

	findMode(mainArray, size, results);

	return results;
}



/*****************************************************************************************
**										sortArray
**
*****************************************************************************************/
void sortArray(int arrayMemLocat[], int size)
{
	sort(arrayMemLocat, arrayMemLocat + size);
}



/*****************************************************************************************
**										findMode (Three parameter)
**Iterate through array to find the arrays mode.  Vector passed by reference
*****************************************************************************************/
//
void findMode(int mode[], int size, vector<int> &results)
{
		
	int getFrequency(int[], int, int); //getFrequency Prototype
	
	int pushNumber = mode[0]; //set to check first element
	int maxFrequency = 0;
	int currentCount = 0;

	maxFrequency = getFrequency(mode, size, maxFrequency); //getFrequency call

	for (int i = 0; i < size; i++) //iterate through array for mode
	{	
		if (mode[i] == pushNumber || maxFrequency == 1) //test if same number|| all integers are modes 
			currentCount++;
		else
		{
			pushNumber = mode[i]; //set new element to test
			currentCount = 1; //reset counter. One new element encounted
		}
		
		if (currentCount == maxFrequency) //test counter against maxFrequency
		{
			results.push_back(mode[i]); //push mode into vector
			currentCount = 0; //reset counter. No new elements encountered
		}
	}
}



/*****************************************************************************************
**										getFrequency
** Iterate through the array to find the max frequency. Return the max frequency
*****************************************************************************************/
int getFrequency(int mode[], int size, int frequency)
{
	int compNumber = mode[0]; //set to check first element
	int currentFrequency = 0;
	int maxFrequency = 0;

	for (int count = 0; count < (size); count++) //iterate through array for max frequency
	{
		if (mode[count] == compNumber) //test if same number; add to frequency
			currentFrequency++;
		else
		{
			if (maxFrequency < currentFrequency) //test if max frequency
				maxFrequency = currentFrequency;

			currentFrequency = 1; //reset frequency. One new element encounted
			compNumber = mode[count]; //set new element to test
		}
		
		if (currentFrequency == size) //if all elements are the same
			maxFrequency = currentFrequency; 
	}
	return frequency = maxFrequency;
}