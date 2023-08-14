#include <iostream> 
#include "Book.h"
#include "Manager.h"
#include <string>
#define SIZE 10
using namespace std;

Manager::Manager()      /* Default Constructor */	
{
    managerName = "";
    managerEmail = "";
}

Manager::Manager(string manager_name, string manager_email)     /* overloaded constructor */
{
    managerName = manager_name;
    managerEmail = manager_email;
    noOfBooks = 0;
}
void Manager::addbook(Book* b)  
{
    if (noOfBooks < SIZE) {
        book[noOfBooks] = b;
    }
    noOfBooks++;
}

void Manager::displayManager()      /* Dsiplay Manager details */
{
    cout << "\nManager Name  = " << managerName << endl;
    cout << "Manager Email  = " << managerEmail << endl;
    for (int i = 0; i < noOfBooks; i++)
        book[i]->displayBookDetails();
}

Manager::~Manager()     /* Calling destructor */
{
    cout << "\nDestructor Called For Manager : " << managerName << endl;
}