/*****************************************************************************************

Author: Stephen Townsend
Date: 07/11/2016
Description: This is the box.cpp that contains the function definitions for the box header.
Each setter and getter has a function.  The default constructor function (Box) is used to 
default each variable to 1.  The get volume function is used to calculate the volume of 
the box.  The get surface area function is used to calculate the surface area of the box.

*****************************************************************************************/

#include"Box.hpp"


/*****************************************************************************************
**										Box (Default)
** Used to default each variable to 1
*****************************************************************************************/
Box::Box()
{
	height = 1;
	width = 1;
	length = 1;
}

/*****************************************************************************************
**									Box (Three Parameter)
**
*****************************************************************************************/
Box::Box(double height, double width, double length)
{
setHeight(height);
setWidth(width);
setLength(length);
}

/*****************************************************************************************
**									setHeight
**
*****************************************************************************************/
void Box::setHeight(double hei)
{
	height = hei;
}

/*****************************************************************************************
**									setWidth
**
*****************************************************************************************/
void Box::setWidth(double wid)
{
	width = wid;
}

/*****************************************************************************************
**									setLength
**
*****************************************************************************************/
void Box::setLength(double len)
{
	length = len;
}

/*****************************************************************************************
**									getVolume

** Formula: V = length x width x height
*****************************************************************************************/
double Box::getVolume()
{
	double volume = 0;

	volume = length*width*height;
	
	return volume;
}

/*****************************************************************************************
**									getSurfaceArea

** Formula: SA = 2lw + 2lh + 2wh
*****************************************************************************************/
double Box::getSurfaceArea()
{
	double surfaceArea = 0;

	surfaceArea = 2 * (length * width) + 2 * (length*height) + 2 * (width*height);
		
	return surfaceArea;
}