/*****************************************************************************************

Author: Stephen Townsend
Date: 07/06/2016
Description: This program is used to calculate the distance an object falls in meters.
The program will accept time in seconds.  The time will be sent to a function 
(fallDistance) that will calculate the distance the object has fallen in meters. The 
function will return back the distance it calculated.

*****************************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

const double GRAVITY = 9.8; //Constant for gravity in meters

double fallDistance(double fallingTime); //Function prototype
 
/*int main()
{
	double time;
	double distance;

	cout << "Enter falling time in seconds: ";
	cin >> time;

	distance = fallDistance(time); //Calling the fallDistance function

	cout << "Falling Distance is: " << distance << endl;

	return 0;
}*/

/*****************************************************************************************
** Description: Calulate the distance that an object falls given the variable
**  passing to it.  This will return distance.
*****************************************************************************************/
double fallDistance(double fallingTime)
{
	double fallingDistance;

	fallingDistance = (((1.0 / 2.0)*GRAVITY)*(pow(fallingTime, 2))); //Calculate falling distance (d = 1/2gt^2)

	return fallingDistance; //return distance to calling function
}