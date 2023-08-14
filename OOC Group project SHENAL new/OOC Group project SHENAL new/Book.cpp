#include "Book.h"
//#include "Manager.h"
#include<iostream>
#include<cstring>
#include <iomanip>

using namespace std;

Book::Book()		/* Default Constructor */
{
	bookId = "";
	bookName = "";
	price = 0.0;
}

Book::Book(string book_id, string book_name, double book_price)		/* Overloaded Constructor */
{
	bookId = book_id;
	bookName = book_name;
	price = book_price;
	
}

/*Book::Book(string book_id, string book_name, double book_price, Manager* M_new)
{
	bookId = book_id;
	bookName = book_name;
	price = book_price;
	M = M_new;
	M->addbook(this);

}*/

void Book::displayBookDetails()			/* Display Book Details */
{
	cout << "\nBook ID : " << bookId << endl;
	cout << "Book Name : " << bookName << endl;
	cout << "Book Price : " << price << fixed << setprecision(2) << endl;
}

Book::~Book()			// calling destructor
{
	cout << "\nDeleted Book : " << bookId << endl;
}