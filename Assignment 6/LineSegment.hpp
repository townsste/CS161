/*****************************************************************************************

Author: Stephen Townsend
Date: 07/17/2016
Description: This header is used to create a Line Segment class.  This will be the class
declaration.  The private variables will involve two points (referencing the point class) 
(p1 & p2).
In Public there are two mutators, two accessors and one double class members.
Lastly is a defult constructor and a constructor that will accept two double parameters.

*****************************************************************************************/

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP
#include "Point.hpp"

//class definition
class LineSegment
{
private:
//class variables
	Point p1;
	Point p2;
public:	
//mutators
	void setEnd1(Point);
	void setEnd2(Point);

//accessors
	Point getEnd1();
	Point getEnd2();

//calculating class members
	double length();
	double slope();

//two parameter constructor
	LineSegment(Point, Point);
};
#endif