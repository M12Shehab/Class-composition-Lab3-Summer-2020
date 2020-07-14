#pragma once
#include "Account.h"
#include "Book.h"

class LibraryAccount :public Account
{
	Book* books;
	const int MAX_BOOKS = 5;

public:
	LibraryAccount(double);
	~LibraryAccount();

	void borrow_book(Book&);
	void return_book(Book&);

};

