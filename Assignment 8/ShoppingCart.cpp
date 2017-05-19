/*****************************************************************************************

Author: Stephen Townsend
Date: 07/27/2016
Description: This is the ShoppingCart.cpp that contains the function definitions for the
ShoppingCart header. The ShoppingCart constructor function is used to initialize each 
class member variable through the set method.  The addItem function is used to add 
elements to the array by pointing to the Item class.  The totalPrice function is used to 
calculate the total price by multiply the item price and item quantity.

*****************************************************************************************/

#include "ShoppingCart.hpp"


/*****************************************************************************************
**										ShoppingCart
**Used to initialize each element to NULL
*****************************************************************************************/
ShoppingCart::ShoppingCart()
{
	for(int i = 0; i < 100; i++) //less than array size of 100
	{
		itemPtr[i] = NULL; //set each array element to NULL or point to address 0
	}
	
	arrayEnd = 0; //initialize array element position holder to zero
}


/*****************************************************************************************
**										addItem
** Used to add items from main to array
*****************************************************************************************/
void ShoppingCart::addItem (Item *prodItem)
{
	itemPtr[arrayEnd] = prodItem;  //add elements to array from item pointer
	
	arrayEnd++; //array element position counter.  Increment by up
}


/*****************************************************************************************
**										totalPrice
** Used to calulate pointer price * pointer quanitity and returns total
*****************************************************************************************/
double ShoppingCart::totalPrice()
{
	double total = 0;
	
	for(int i = 0; i < arrayEnd; i++) //bounds cannot exceed arrayEnd with error.
	{
		total += itemPtr[i]->getPrice() * itemPtr[i]->getQuantity();  //points to Item class
	}
	
	return total;
}