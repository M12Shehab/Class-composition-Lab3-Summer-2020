#pragma once
#include<string>

// Using class Account that we implemented in header file.
#include"Account.h"
class Owner
{
private:
    int id;      // Owner id
    std::string name; // Owner name 

    // We omitted other owner's infor for simplicity

    Account* accounts;     // List of accounts of this person (10 accounts max)
    int numAccounts;        // The current number of accounts held  by this owner                   

public:
    Owner();	            // Default constructor    
    Owner(int, std::string);     // Initializes attributes of Owner with user input
    Owner(const Owner&);    // Copy constructor
    ~Owner();               // Destructor needed is Owner contains pointers

    /* Getters and setter */
    int getID() const;
    std::string getName() const;

    /* Subsystem that manages arrays */

    void addAccount(const Account&);        // Adds an account to the person
    void removeAccount(int);                // Removes an account
    void listAllAccounts() const;	        // Displays all accounts of the person
    bool searchAccount(int) const;          // Searches if the account number entered is an account of this person
};

