/*****************************************************************************************

Author: Stephen Townsend
Date: 07/17/2016
Description: This is the LineSegment.cpp that contains the function definitions for the
line segment header. Each class member has a function.  The constructor function
(LineSegment) is used to initialize each point variable through the set method.
The length function uses the distanceTo function to calculate the length (distance)
between two points. 
The slope function is used to calculate the slope of the line.  It subtracts the ycoords 
and divides the result with the reuslt of the xcoord subtraction.  The slope is then 
returned.

*****************************************************************************************/

#include "LineSegment.hpp"

/*****************************************************************************************
**										LineSegment(Two parameter)
** Used to initialize each point variable through the set method
*****************************************************************************************/
LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

/*****************************************************************************************
**										setEnd1
** Sets p1 value from constructor
*****************************************************************************************/
void LineSegment::setEnd1(Point firstPoint)
{
	p1 = firstPoint;
}

/*****************************************************************************************
**										setEnd2
** Sets p2 value from constructor
*****************************************************************************************/
void LineSegment::setEnd2(Point secondPoint)
{
	p2 = secondPoint;
}

/*****************************************************************************************
**										getEnd1
** Returns p1 value
*****************************************************************************************/
Point LineSegment::getEnd1()
{
	return p1;
}

/*****************************************************************************************
**										getEnd2
** Returns p2 value
*****************************************************************************************/
Point LineSegment::getEnd2()
{
	return p2;
}

/*****************************************************************************************
**										length
** Uses the distanceTo function in Point.cpp 
*****************************************************************************************/
double LineSegment::length()
{
	double length;

	//call distanceTo function in Point.cpp
	length = p1.distanceTo(p2); 

	return length;
}

/*****************************************************************************************
**										Slope
** Used to calculate the slope of the line
*****************************************************************************************/
double LineSegment::slope()
{
	//Formula: (p2 - p1) / (p2 - p1)
	double slope;
	
	slope = (p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());

	return slope;
}