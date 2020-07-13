#include <iostream>
using namespace std;

#include "Account.h"
// Default constructor
Account::Account() {
	accountNum = 0;
	balance = 0;
}

// Regular constructor
Account::Account(int an, double b) {
	accountNum = an;
	balance = b;
}

// Copy constructor
Account::Account(const Account& a) {
	accountNum = a.accountNum;
	balance = a.balance;
}

// Destructor
Account::~Account() {
	// We do not need nothing
}

// Returns account number
int Account::getAccountNumber() const {
	return accountNum;
}

// Makes a withdrawal
double Account::withdrawal(double amount) {
	if (balance >= amount)
		balance = balance - amount;
	else
		cout << "Insufficient funds" << endl;
	return balance;
}

// Makes a deposit (assume amount is positive)
double Account::deposit(double amount) {
	balance = balance + amount;
	return balance;
}

// Sets the balance (we may not need this since we can change balance through withdrawal and deposit functions)
void Account::setBalance(double b) {
	balance = b;
}

// Returns the balance
double Account::getBalance() const {
	return balance;
}