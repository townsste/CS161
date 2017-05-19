/*****************************************************************************************

Author: Stephen Townsend
Date: 07/27/2016
Description: This Item.hpp is a header that is used to create the class Item.  It has 
three private variables (name, price, and quantity).  Those variables each have an 
accessor and mutator.  There are two constructors.  One that takes three parameters
and is used to initialize each variable through the set method.  The other constructor
is a the default that is used to initialize each variable to its corresponding zero.

*****************************************************************************************/

#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>

using namespace std;

class Item
{
private:
//Class Variables
	string name;
	double price;
	int quantity;

public:
//Accessors
	string getName();
	double getPrice();
	int getQuantity();

//Mutators	
	void setName(string);
	void setPrice(double);
	void setQuantity(int);

//Constructors
	Item(string, double, int); //three parameter
	Item(); //default
};
#endif