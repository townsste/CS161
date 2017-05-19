/*****************************************************************************************

Author: Stephen Townsend
Date: 07/27/2016
Description: This is the Item.cpp that contains the function definitions for the
Item header. Each class member has a accessor and mutator function.  The two constructor
functions are used to initialize each class member variable through the set method.

*****************************************************************************************/

#include "Item.hpp"
#include <string>


/*****************************************************************************************
**										Item (Three parameter)
**Used to initialize each variable through the set method
*****************************************************************************************/
Item::Item(string name, double price, int quantity)
{
	setName(name);
	setPrice(price);
	setQuantity(quantity);
}


/*****************************************************************************************
**										Item
**Used to initialize each variable through the set method to corresponding zero
*****************************************************************************************/
Item::Item()
{
	setName("");
	setPrice(0.0);
	setQuantity(0);
}


/*****************************************************************************************
**										setName
** Sets name value from constructor
*****************************************************************************************/
void Item::setName(string product)
{
	name = product;
}
	

/*****************************************************************************************
**										setPrice
** Sets price value from constructor
*****************************************************************************************/
void Item::setPrice(double prodPrice)
{
	price = prodPrice;
}


/*****************************************************************************************
**										setQuantity
** Sets quantity value from constructor
*****************************************************************************************/
void Item::setQuantity(int prodQuantity)
{
	quantity = prodQuantity;
}


/*****************************************************************************************
**										getName
** Returns name
*****************************************************************************************/
string Item::getName()
{
	return name;	
}


/*****************************************************************************************
**										getPrice
** Returns price
*****************************************************************************************/
double Item::getPrice()
{
	return price;
}


/*****************************************************************************************
**										getQuantity
** Returns quanity
*****************************************************************************************/
int Item::getQuantity()
{
	return quantity;	
}