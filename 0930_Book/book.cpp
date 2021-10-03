/**
* book.cpp - implementing Book Class
*/

#include "book.h"

// Constructor for Book object
Book::Book(string givenName) {
	myName = givenName;
}

//return the name of the Book object
string Book::getName() {
	return myName;
}