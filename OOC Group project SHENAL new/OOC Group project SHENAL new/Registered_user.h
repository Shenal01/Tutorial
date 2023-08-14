#include<iostream>
//#include <"Manager.h">
#include<cstring>
#include "Book.h"
using namespace std;
#define SIZE 2


#pragma once

class Registered_user
{
private:
	string userId;			/* Attributes */
	string userName;
	string userEmail;
	Book* book[SIZE];		/* ggregation Relationship */
	//Manager* Mngr

public:
	Registered_user();		/* Constructor */	
	Registered_user(string user_id, string user_name, string user_email);	/* overloaded constructor */
	void buyBook(Book* book1, Book* book2);		
	void displayUser();			/* Dsiplay book details , function declaration */
	~Registered_user();			/* Destructor */

};

