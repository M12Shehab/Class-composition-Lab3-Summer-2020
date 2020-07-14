#pragma once
class Account
{
private:
    int accountNum;      // Account number
    double balance;      // Account balance
    static int id_generator; // Make account id generated automatically.
public:
    Account();	                     // Default constructor    
    Account(double);            // Regular constructor
    Account(const Account&);         // Copy constructor
    ~Account();                      // Destructor

    int getAccountNumber() const;    // Returns account number 
    double withdrawal(double);       // Makes a withdrawal
    double deposit(double);          // Makes a deposit
    void setBalance(double);         // Sets the balance
    double getBalance() const;       // Returns the balance
};

