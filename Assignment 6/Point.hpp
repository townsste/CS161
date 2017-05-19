/*****************************************************************************************

Author: Stephen Townsend
Date: 07/17/2016
Description: This header is used to create a Point class.  This will be the class
declaration.  The private variables will involve two doubles (xCoord & yCoord).  
In Public there are two mutators, two accessors and one double class members.  
Lastly is a defult constructor and a constructor that will accept two double parameters.

*****************************************************************************************/

#ifndef POINT_HPP
#define POINT_HPP

//class definition
class Point
{
private:
//class variables
	double xCoord;
	double yCoord;

public:
//mutators
	void setXCoord(double);
	void setYCoord(double);

//accessors
	double getXCoord();
	double getYCoord();

//calculating class member
	double distanceTo (const Point&);
	
//two parameter constructor
	Point(double xValue, double yValue);

//default constructor
	Point();
};
#endif