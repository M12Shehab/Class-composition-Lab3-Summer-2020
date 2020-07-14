#pragma once
#include <string>

#include"Date.h"

class Book
{
private:
	int reference_id;			// Store the book unique id
	std::string title;			// Title of book
	std::string author;			// Author name
	Date publish_date;			// Date of publishing
	static int id_generator;	// Make account id generated automatically.
	double price;				// The rent price of book 
	int quantity;				// The total quantity number of books
	bool available;    	// flag indicating availability of the book, this attribute will be managed by system.

public:
	Book();
	Book(std::string, std::string, double, int, Date& data);
	Book(Book&);
	~Book();

	// System functions
	void set_title(std::string);
	void set_author(std::string);
	void set_price(double);
	void set_quantity(int);

	double get_price();
	int get_quantity();
	bool get_available();

	friend void print_bookInfo(Book&);
};

