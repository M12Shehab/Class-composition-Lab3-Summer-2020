#include <iostream>
using namespace std;


#include "Date.h"
Date::Date()
{
    day = 1;
    month = 1;
    year = 1970;
}
Date::Date(int d, int m, int y) {
    cout << "Constructor Date(...) is called" << endl;
    day = d;
    month = m;
    year = y;
}

void Date::printDate() const {
    cout << month << "/" << day << "/" << year << " ";
}
