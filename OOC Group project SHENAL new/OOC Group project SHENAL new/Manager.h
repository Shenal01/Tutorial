#include <iostream> 
#include "Book.h"
#include <string>
#define SIZE 2
using namespace std;

class Manager		/* Declaring Manager Class */
{
private:
	string managerName;	/* Attributes */
	string managerEmail;
	Book* book[SIZE];	/* Manager has many books */
	int noOfBooks;
public:
	Manager();		/* Constructor */	
	Manager(string manager_name, string manager_email);		/* overloaded constructor */
	void addbook(Book* b);
	void displayManager();		/* Dsiplay Manager details , function declaration */
	~Manager();		/* Destructor */
};