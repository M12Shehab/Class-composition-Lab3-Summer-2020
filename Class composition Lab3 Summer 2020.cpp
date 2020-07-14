// Class composition Lab3 Summer 2020.cpp
//

#include <iostream>
using namespace std;

#include "Owner.h"
#include "Book.h"
#include "LibraryAccount.h"
int main()
{
   /* Account a1(11111, 500.00);
    Account a2(22222, 900.50);
    Account a3(33333, 1500.04);

    Owner o1(100, "Ric");
    Owner o2(200, "Karen");*/
    
    /*Account a1(500.00);
    Account a2(900.50);
    Account a3(1500.04);

    Owner o1("Ric");
    Owner o2("Karen");

    o1.addAccount(a1);
    o1.addAccount(a2);
    cout << o1.getName() << "'s accounts:" << endl;
    o1.listAllAccounts();

    if (o1.searchAccount(11111))
        cout << o1.getName() << " is the owner of Account 11111" << endl;
    else
        cout << o1.getName() << " is not the owner of Account 11111" << endl;

    cout << endl;

    o1.removeAccount(11111);
    cout << o1.getName() << "'s new accounts:" << endl;
    o1.listAllAccounts();

    cout << endl;

    o2.addAccount(a3);
    cout << o2.getName() << "'s accounts:" << endl;
    o2.listAllAccounts();*/

    // session 2, lab# 3
    Date d(12, 12, 2002);
    // Book data
    Book book1("How to program C++", "Details and detail", 10.12, 2, d);
    print_bookInfo(book1);
    // Library account
    LibraryAccount account1(5.2);
    LibraryAccount account2(10.12);
    LibraryAccount account3(55.2);
    cout << "Account1 try to rent book\n";
    account1.borrow_book(book1);
    cout << "\n---------------------\n";
    print_bookInfo(book1);

    cout << "Account2 try to rent book\n";
    account2.borrow_book(book1);
    cout << "\n---------------------\n";
    print_bookInfo(book1);

    cout << "Account2 try to rent book\n";
    account2.borrow_book(book1);
    cout << "\n---------------------\n";
    print_bookInfo(book1);


    cout << "Account3 try to rent book\n";
    account3.borrow_book(book1);
    cout << "\n---------------------\n";
    print_bookInfo(book1);

    cout << "Account3 try to return book\n";
    account2.return_book(book1);
    cout << "\n---------------------\n";
    print_bookInfo(book1);
    return 0;
}

