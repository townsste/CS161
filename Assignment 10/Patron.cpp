/*****************************************************************************************

Author: Stephen Townsend
Date: 08/7/2016
Description: This is the Patron.cpp that contains the function definitions for the
Patron header. The Patron constructor function is used to initialize idNum, name, and 
fine amount.  There are accessors and mutators for each function.  This is used to 
retrieve information for the library Patrons.

*****************************************************************************************/

#include "Patron.hpp"

using namespace std;

/*****************************************************************************************
**										Patron
** Constructor used to initialize idNum, name, and fine amount.
******************************************************************************************/
Patron::Patron(string idn, string n)
{
	idNum = idn;
	name = n;
	fineAmount = 0;
}


/*****************************************************************************************
**										getIdNum
** 
******************************************************************************************/
string Patron::getIdNum() 
{
	return idNum;
}


/*****************************************************************************************
**										getName
** 
******************************************************************************************/
string Patron::getName()
{
	return name;
}


/*****************************************************************************************
**										getCheckedOutBooks
** A vector of pointers to Books that Patron currently has checkedOut.
******************************************************************************************/
vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}


/*****************************************************************************************
**										addBook
** Adds the specified Book to checkedOutBooks.
******************************************************************************************/
void Patron::addBook(Book *pBook)
{
	checkedOutBooks.push_back(pBook);
}


/*****************************************************************************************
**										removeBook
** Removes the specified Book from checkedOutBooks.
******************************************************************************************/
void Patron::removeBook(Book *pBook)
{
	for (int i = 0; i < 1; i++)
	{
		if (checkedOutBooks[i] == pBook)
		{
			checkedOutBooks.erase(checkedOutBooks.begin() + i);
		}
	}
}


/*****************************************************************************************
**										getFineAmount
** How much the Patron owes the Library in late fines.  This is allowed to go negative.
******************************************************************************************/
double Patron::getFineAmount()
{
	return fineAmount;
}


/*****************************************************************************************
**										amendFine
** Used to adjust the fine amount.
******************************************************************************************/
void Patron::amendFine(double amount)
{
	fineAmount += amount;
}