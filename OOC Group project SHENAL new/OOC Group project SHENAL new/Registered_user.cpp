#include <iostream>
#include <cstring>
#include "Book.h"
#include "Registered_user.h"
using namespace std;
#define SIZE 2

Registered_user::Registered_user()	/* Constructor */
{
	userId = "";
	userName = "";
	userEmail = "";
}

Registered_user::Registered_user(string user_id, string user_name, string user_email)	/* Overloaded Constructor */
{
	userId = user_id;
	userName = user_name;
	userEmail = user_email;
}

void Registered_user::buyBook(Book* book1, Book* book2)		/* Adding books */
{
	book[0] = book1;
	book[1] = book2;
}

void Registered_user::displayUser()
{
	cout << "\nUser ID: " << userId << "\nUser Name: " << userName << "\nUser Email: " << userEmail << endl;

	for (int i = 0; i < SIZE; i++)	
	{
		book[i]->displayBookDetails();	/* displaying all the elements in the array */
	}
}

Registered_user::~Registered_user()		/* destructor */
{
	cout << "\nDeleted User ID : " << userId << endl;	/* in here  book1 and book2 will not be deleted because this is a Aggregation Relationship */
	
}