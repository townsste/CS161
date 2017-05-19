/*****************************************************************************************

Author: Stephen Townsend
Date: 07/11/2016
Description: This header is used to create a Box class.  This will be the class
declaration.  The private variables will involve three doubles (height, weidth, & length).  
In Public there are three setters and two accessors.  Lastly there are two constructor.
A defualt that accepts no parameters and a three parameter constructor.

*****************************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

//Box class declaration
class Box
{
private:
	double height;
	double width;
	double length;

public:
	//Class members
	void setHeight(double);
	void setWidth(double);
	void setLength(double);
	double getVolume();
	double getSurfaceArea();

	//default constructor
	Box();

	//three-parameter constructor
	Box(double height, double width, double length);
};
#endif