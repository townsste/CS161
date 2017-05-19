/*****************************************************************************************

Author: Stephen Townsend
Date: 07/17/2016
Description: This is the Point.cpp that contains the function definitions for the
point header. Each class member has a function.  Both constructor functions (Point)
are used to initialize each variable through the set method.  The default constructor 
initializes to zero.  The two parameter constructor initializes coords based on the points
in main.  
The distanceTo function is used to calculate the distance between two diagonal points.  
The coords are subtracted from eachother and squared.  The result is squarooted 
and the distance is returned.

*****************************************************************************************/

#include "Point.hpp"
#include <cmath>

/*****************************************************************************************
**										Point(Defualt)
** Used to initialize each point variable to zero through the set method
*****************************************************************************************/
Point::Point()
{
	setXCoord(0.0);
	setYCoord(0.0);
}

/*****************************************************************************************
**										Point(Two parameter)
** Used to initialize each point variable from main through the set method
*****************************************************************************************/
Point::Point(double xValue, double yValue)
{
	setXCoord(xValue);
	setYCoord(yValue);
}

/*****************************************************************************************
**										setXCoord
** Sets xCoord value from constructor
*****************************************************************************************/
void Point::setXCoord(double xValue)
{
	xCoord = xValue;
}

/*****************************************************************************************
**										setYCoord
** Sets yCoord value from constructor
*****************************************************************************************/
void Point::setYCoord(double yValue)
{
	yCoord = yValue;
}

/*****************************************************************************************
**										getXCoord
** Returns xCoord value
*****************************************************************************************/
double Point::getXCoord()
{
	return xCoord;
}

/*****************************************************************************************
**										getYCoord
** Returns yCoord value
*****************************************************************************************/
double Point::getYCoord()
{
	return yCoord;	
}

/*****************************************************************************************
**										distanceTo
** Used to calulate the distance of two coordinates
*****************************************************************************************/
double Point::distanceTo(const Point &secondCoord)
{
	//Formula: distance = Sqrt((x2-x1)^2 + (y2-y1)^2)
	
	double  x1;
	double  x2; 
	double  y1;
	double  y2;
	double distance;
			
	x1 = xCoord;				//p1 xCoord
	x2 = secondCoord.xCoord;	//p2 xCoord
	y1 = yCoord;				//p1 yCoord
	y2 = secondCoord.yCoord;	//p2 yCoord

	//(x1 - x2)^2 + (y1 - y2)^2
   distance = pow((x2-x1), 2) + pow((y2-y1), 2);
	//Sqrt(distance)
   distance = sqrt(distance);
 
   return distance;
}

