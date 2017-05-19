/*****************************************************************************************

Author: Stephen Townsend
Date: 07/27/2016
Description: This ShoppingCart.hpp is a header that is used to create the class Item.  
It has two private variables (itemPtr[] and arrayEnd).  There are wo public functions 
(addItem and TotalPrice).  There is one constructor that is the default constructor.  
It is used to initialize each variable to its corresponding zero.

*****************************************************************************************/

#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include"Item.hpp"
#include <string>

using namespace std;

class ShoppingCart
{
private:
//Class variables
	Item *itemPtr[100];
	int arrayEnd;

public:
//Class member functions
	void addItem (Item*);
	double totalPrice();

//Constructor
	ShoppingCart(); //default
};
#endif