/*****************************************************************************************

Author: Stephen Townsend
Date: 07/06/2016
Description: This program is used to sort three numbers from smallest to largest.
The user will enter three integers.  The program will then use the function smallSort
when called and sort the integers at their memory location by reference.  The program 
will then output the sorted integers from smallest to largest.

*****************************************************************************************/
#include<iostream>

using namespace std;

void smallSort(int &refNum1, int &refNum2, int &refNum3); //Function prototype by reference

/*int main()
{
	int num1, num2, num3;

	cout << "Enter Three" << endl;
	cin >> num1 >> num2 >> num3;

	smallSort(num1, num2, num3);

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}*/

/*****************************************************************************************
** Description: SmallSort is used to sort three integers by reference from smallest
** to largest when called. It uses a while loop untill the sort is complete.
*****************************************************************************************/
void smallSort(int &refNum1, int &refNum2, int &refNum3)
{
	int temp; //Integer holder while sorting
		
	while (refNum1 > refNum2 || refNum2 > refNum3) //Loop untill smallest to largest
	{
		if (refNum1 > refNum2) //Flip integer 1 and integer 2 if true
		{
			temp = refNum1;
			refNum1 = refNum2;
			refNum2 = temp;
		}

		if (refNum2 > refNum3) //Flip integer 2 and integer 3 if true
		{
			temp = refNum2;
			refNum2 = refNum3;
			refNum3 = temp;
		}
	}
}