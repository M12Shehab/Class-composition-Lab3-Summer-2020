#include <iostream>
using namespace std;
#include "Book.h"

int Book::id_generator = 0;

Book::Book()
{
	this->reference_id = ++id_generator;

	this->title = "";
	this->author = "";
	this->publish_date = Date();
	this->price = 0.0;
	this->quantity = 0;
	this->available = (quantity > 0) ? true : false;
}

Book::Book(string t, string a, double p, int q, Date& date)
{
	this->reference_id = ++id_generator;

	this->title = t;
	this->author = a;
	this->publish_date = date;
	this->price = p;
	this->quantity = q;
	this->available = (q > 0)? true: false;
}

Book::Book(Book& b)
{
	this->reference_id = b.reference_id;
	this->title = b.title;
	this->author = b.author;
	this->publish_date = b.publish_date;
	this->price = b.price;
	this->quantity = b.quantity;
	this->available = b.available;
}

Book::~Book()
{
}

void Book::set_title(std::string t)
{
	this->title = t;
}

void Book::set_author(std::string a)
{
	this->author = a;
}

void Book::set_price(double p)
{
	this->price = p;
}

void Book::set_quantity(int q)
{
	this->quantity = q;
	this->available = (quantity > 0) ? true : false;
}

double Book::get_price()
{
	return price;
}

int Book::get_quantity()
{
	return quantity;
}

bool Book::get_available()
{
	return available;
}

void print_bookInfo(Book& b)
{
	cout << "\"Print function\"\n";
	cout << "Title : " << b.title << endl;
	cout << "Author : " << b.author << endl;
	cout << "Quantity : " << b.quantity << endl;
	cout << "Rent price = " << b.price << " CA\n";
	cout << "Publised date : ";
	b.publish_date.printDate();
	cout << endl;
	if (b.available)
	{
		cout << "Book is available.\n";
	}
	else
	{
		cout << "Book is unavailable.\n";
	}

}
