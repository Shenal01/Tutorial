#pragma once
//#include "Manager.h"
#include<iostream>
#include<cstring>
using namespace std;

class Book
{
private:
	string bookId;		// attributes
	string bookName;
	double price;
	//Manager* M;

public:
	Book(); //constructor
	Book(string book_id, string book_name, double book_price);	// overloaded constructor
	//Book(string book_id, string book_name, double book_price, Manager* M_new);
	void displayBookDetails();	// display book details
	~Book();	// destructor
};