/*****************************************************************************************

Author: Stephen Townsend
Date: 08/7/2016
Description: This is the Book.cpp that contains the function definitions for the
Book header. The Book constructor function is used to initialize checkedOutBy and 
requestedBy to Null.  A new book will be set to on the shelf.  There are accessors and 
mutators for each function.  This is used to retrieve information for the library's Books.

*****************************************************************************************/

#include "Book.hpp"

using namespace std;

/*****************************************************************************************
**										Book
** Constructor used to initialize checkedOutBy and requestedBy to Null.  A new book will
** be set to on the shelf.
******************************************************************************************/
Book::Book(string idc, string t, string a)
{
	idCode = idc;
	title = t;
	author = a;

	setCheckedOutBy(NULL);
	setRequestedBy(NULL);
	setLocation(ON_SHELF);
}


/*****************************************************************************************
**										getIdCode
**
******************************************************************************************/
string Book::getIdCode()
{
	return idCode;
}


/*****************************************************************************************
**										getTitle
**
******************************************************************************************/
string Book::getTitle()
{
	return title;
}


/*****************************************************************************************
**										getLocation
**
******************************************************************************************/
Locale Book::getLocation()
{
	return location;
}


/*****************************************************************************************
**										setLocation
** Sets a Books location.  Can be either on the shelf, on the hold shelf, or checked out.
******************************************************************************************/
void Book::setLocation(Locale loc)
{
	location = loc;
}


/*****************************************************************************************
**										getCheckedOutBy
** 
******************************************************************************************/
Patron* Book::getCheckedOutBy()
{
	return checkedOutBy;
}


/*****************************************************************************************
**										setCheckedOutBy
** Pointer to the Patron who has it the book checked out (if any).
******************************************************************************************/
void Book::setCheckedOutBy(Patron *pPatron)
{
	checkedOutBy = pPatron;
}


/*****************************************************************************************
**										getRequestedBy
**
******************************************************************************************/
Patron* Book::getRequestedBy()
{
	return requestedBy;
}


/*****************************************************************************************
**										setRequestedBy
** Pointer to the Patron who has requested the book.
******************************************************************************************/
void Book::setRequestedBy(Patron *pPatron)
{
	requestedBy = pPatron;
}


/*****************************************************************************************
**										getDateCheckedOut
**
******************************************************************************************/
int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}


/*****************************************************************************************
**										setDateCheckedOut
** Will be set to the currentDate of the Library when book is checked out.
******************************************************************************************/
void Book::setDateCheckedOut(int outDate)
{
	dateCheckedOut = outDate;
}


/*****************************************************************************************
**										getCheckOutLength
** Constant that gives how long a Book can be checked out for.
******************************************************************************************/
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}


/*****************************************************************************************
**										getAuthor
**
******************************************************************************************/
string Book::getAuthor()
{
	return author;
}