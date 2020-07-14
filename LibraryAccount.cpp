#include <iostream>
using namespace std;

#include "LibraryAccount.h"

LibraryAccount::LibraryAccount(double amount):Account(amount)
{
	books = new Book[MAX_BOOKS];
}

LibraryAccount::~LibraryAccount()
{
}

void LibraryAccount::borrow_book(Book& b)
{
	if (b.get_available())
	{
		cout << "+ Processing library.\n";
		double temp_price = b.get_price();
		if (this->getBalance() >= temp_price)
		{
			cout << "+ Transfered money is successfully done.\n";
			cout<<"+ Your current balance = "<<this->withdrawal(temp_price)<<" CA\n";
			b.set_quantity(b.get_quantity() - 1);
		}
		else
		{
			cout << "- Transfered money is failed.\n";
		}
	}
	else
	{
		cout << "- Sorry this book is unavaliable now.\n";
	}
}

void LibraryAccount::return_book(Book& b)
{
	b.set_quantity(b.get_quantity() + 1);
}
