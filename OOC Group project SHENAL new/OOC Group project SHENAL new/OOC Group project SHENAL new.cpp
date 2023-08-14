#include "Registered_user.h"
#include "Book.h"
#include "Manager.h"
#include <iostream>
#include <cstring>

using namespace std;


int main()              /* Begining of the main method */
{
    Book* b1 = new Book("b001", "David Copperfield", 2100.00);              /* declaring a pointers and assign values to it */
    Book* b2 = new Book("b002", "Be the light in Future", 2600.00);

    Registered_user* u1 = new Registered_user("USR001", "Shenal Mario", "mario@2001gmail.com");     /* assing values for user */

    Manager* M1 = new Manager("Gihan", "gihan222@gmail.com");

    u1->buyBook(b1, b2);        /* invoke functions or calling functions */
    u1->displayUser();          /*Displaying user*/

    b1->displayBookDetails();   /* Displaying books */
    b2->displayBookDetails();

    M1->displayManager();       /* Display Manager */




    cout << "\n***Destrcutor Called****\n" << endl;

    delete b1;      // dlete Books
    delete b2;

    delete u1;      // delete User

    delete M1;      // delete Manager

    return 0;
}
