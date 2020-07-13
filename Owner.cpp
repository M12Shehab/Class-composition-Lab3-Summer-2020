#include <iostream>
#include <string>
using namespace std;

#include "Owner.h"


// Default constructor    
Owner::Owner() {
    id = 0;
    name = "";
    accounts = new Account[10];
    numAccounts = 0;
}

// Initializes attributes of Owner
Owner::Owner(int id1, string name1) {
    id = id1;
    name = name1;
    accounts = new Account[10];
    numAccounts = 0;
}

// Copy constructor
Owner::Owner(const Owner& anotherOwner) {
    name = anotherOwner.name;
    accounts = new Account[10];
    numAccounts = anotherOwner.numAccounts;
    for (int i = 0; i < numAccounts; i++)
        accounts[i] = anotherOwner.accounts[i];
}

// Destructor 
Owner::~Owner() {
    delete[] accounts;
}

int Owner::getID() const {
    return id;
}

string Owner::getName() const {
    return name;
}

// Adds an account to the person
void Owner::addAccount(const Account& a) {
    if (numAccounts < 10) {
        accounts[numAccounts] = a;
        numAccounts++;
    }
    else {
        cout << "Account: " << a.getAccountNumber() << " cannot be added � number of  accounts exceeded " << endl;
    }
    return;
}

// Removes an account using account number
void Owner::removeAccount(int acct) {
    // We need to search for acct first
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].getAccountNumber() == acct) {
            // We need to shift the  elements of the array
            for (int j = i; j < numAccounts - 1; j++) {
                accounts[j] = accounts[j + 1]; //shifts the elements of the array
            }
            numAccounts--;
            return;
        }
    }
    cout << "Account " << acct << " cannot be found!" << endl;
}

// displays all accounts of the person
void Owner::listAllAccounts()  const {
    for (int i = 0; i < numAccounts; i++)
        cout << "Account:  " << accounts[i].getAccountNumber() << endl;
}

// Searches if the account number entered is an account of this person
bool Owner::searchAccount(int accountNum) const {
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].getAccountNumber() == accountNum)
            return true;
    }
    return false;
}