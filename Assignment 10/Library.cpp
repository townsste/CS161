/*****************************************************************************************

Author: Stephen Townsend
Date: 08/7/2016
Description: This is the Lirary.cpp that contains the function definitions for the
Library header. The Library constructor function is used to initialize currentDate to 
zero.  This is file is where Patrons and Books are added into their coresponding vectors.
Librbay.cpp is where functions for checking out, returning, requesting books, and pay 
fines reside.

*****************************************************************************************/

#include "Library.hpp"

using namespace std;

/*****************************************************************************************
**										Library
** Default constructor used to initialize currentDate to zero.
******************************************************************************************/
Library::Library()
{
	currentDate = 0; //Set current date to zero
}


/*****************************************************************************************
**										addBook
** Used to add the parameter to holdings
******************************************************************************************/
void Library::addBook(Book *pBook)
{
	holdings.push_back(pBook); //adds the parameter to holdings
}


/*****************************************************************************************
**										addPatron
** Used to add the parameter to members.
******************************************************************************************/
void Library::addPatron(Patron *pPatron)
{
	members.push_back(pPatron); //adds the parameter to members
}


/*****************************************************************************************
**										checkOutBook
** Used to allow a patron to check out a book in the Library.
******************************************************************************************/
string Library::checkOutBook(string pID, string bID)
{
	Book *pBook = getBook(bID);
	Patron *pPatron = getPatron(pID);
	
	if (pBook == NULL) //if the specified Book is not in the Library
		return "book not found";
	
	if (pPatron == NULL) //if the specified Patron is not in the Library
		return "patron not found";

	if (pBook->getLocation() == CHECKED_OUT) //if the specified Book is already checked out
		return "book already checked out";

	if ((pBook->getRequestedBy()) != NULL) //if the specified Book is on hold by another Patron
	{
		Patron *holder = pBook->getRequestedBy();
		if ((pBook->getLocation() == ON_HOLD_SHELF) && (holder->getIdNum() != pID))
			return "book on hold by other patron";
	}

	pBook->setCheckedOutBy(pPatron); //update the Book's checkedOutBy
	pBook->setDateCheckedOut(currentDate); //update the Book's dateCheckedOut
	pBook->setLocation(CHECKED_OUT); //update the Book's Location

	if ((pBook->getRequestedBy()) != NULL) //if the Book was on hold for this Patron
	{
		Patron *holder = pBook->getRequestedBy(); //update requestedBy
		if (holder->getIdNum() == pID)
		{
		  pBook->setRequestedBy(NULL);
		}
	}   

	pPatron->addBook(pBook); //update the Patron's checkedOutBooks
	return "check out successful";
}


/*****************************************************************************************
**										returnBook
** Used to allow a patron to return a book that they checked out.
******************************************************************************************/
string Library::returnBook(string bID)
{
	Book *pBook = getBook(bID);

	if (pBook == NULL) //if the specified Book is not in the Library
		return "book not found";

	if (pBook->getLocation() != CHECKED_OUT)  //if the Book is not checked out
		return "book already in library";
   
	Patron *member = pBook->getCheckedOutBy();
   
	member->removeBook(pBook); //update the Patron's checkedOutBooks
   
	if ((pBook->getRequestedBy()) != NULL) //update the Book's location 
		pBook->setLocation(ON_HOLD_SHELF); //depending on whether another Patron has requested it
	else
		pBook->setLocation(ON_SHELF);

	pBook->setCheckedOutBy(NULL); //update the Book's checkedOutBy
	return "return successful";
}


/*****************************************************************************************
**										requestBook
** Used to allow a patron to request a book and put it on hold.
******************************************************************************************/
string Library::requestBook(string pID, string bID)
{
	Book *pBook = getBook(bID);
	Patron *pPatron = getPatron(pID);

	if (pBook == NULL) //if the specified Book is not in the Library
		return "book not found";

	if (pPatron == NULL) //if the specified Patron is not in the Library
		return "patron not found";

	if (pBook->getRequestedBy() != NULL) //if the specified Book is already requested
		return "book already on hold";
  
	if(pBook->getCheckedOutBy() != NULL) //if the specified Book is already checked out
		return "book already checked out"; 

	pBook->setRequestedBy(pPatron); //updates the Book's requestedBy

	if (pBook->getLocation() == ON_SHELF) //updates the Book's location if ON_SHELF
	{
		pBook->setLocation(ON_HOLD_SHELF);
		return "request successful";
	}
}


/*****************************************************************************************
**										payFine
** Used to pay a patrons fine.  It takes as a parameter the amount that is being paid
** (not the negative of that amount).
******************************************************************************************/
string Library::payFine(string pID, double payment)
{
	Patron *patronID = getPatron(pID);
	
	if (patronID == NULL)
		return "patron not found";
	else
	{
		patronID->amendFine(-payment);
		return "payment successful";
	}
}


/*****************************************************************************************
**										incrementCurrentDate
** Used to increment current date.  It will also allow to increase each Patron's fines by 
** 10 cents for each overdue Book they have checked out using amendFine.
******************************************************************************************/
void Library::incrementCurrentDate()
{ 
	int daysCheckedOut;
	
	currentDate++;
	
	for (int i = 0; i < members.size(); i++)
	{
		vector<Book*> daysRemaining = members[i]->getCheckedOutBooks(); //store count that is < 21 days

		for (int j = 0; j < daysRemaining.size(); j++)
		{
			daysCheckedOut = currentDate - (*daysRemaining[j]).getDateCheckedOut();
		
			if (daysCheckedOut > holdings[i]->getCheckOutLength())
				members[i]->amendFine(.10);
		}
	}
}


/*****************************************************************************************
**										getPatron
** Used to return a pointer to the Patron corresponding to the ID parameter, or NULL if 
** no such Patron is a member.
******************************************************************************************/
Patron *Library::getPatron(string pID)
{
	for (int i = 0; i < members.size(); i++)
	{
		Patron *patronID = members[i];

		if (pID == patronID->getIdNum())
			return patronID;
	}
	return NULL;
}


/*****************************************************************************************
**										getBook
** Used to return a pointer to the Book corresponding to the ID parameter, or NULL if no
** such Book is in the holdings.
******************************************************************************************/
Book *Library::getBook(string bID)
{
	for (int i = 0; i < holdings.size(); i++)
	{
		Book *bookID = holdings[i];

		if (bID == bookID->getIdCode())
			return bookID;
	}
	return NULL;
}