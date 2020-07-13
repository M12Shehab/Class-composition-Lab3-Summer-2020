#pragma once
class Account
{
private:
    int accountNum;      // Account number
    double balance;      // Account balance

public:
    Account();	                     // Default constructor    
    Account(int, double);            // Regular constructor
    Account(const Account&);         // Copy constructor
    ~Account();                      // Destructor

    int getAccountNumber() const;    // Returns account number 
    double withdrawal(double);       // Makes a withdrawal
    double deposit(double);          // Makes a deposit
    void setBalance(double);         // Sets the balance
    double getBalance() const;       // Returns the balance
};

