#pragma once
class Date
{
private:
    int day, month, year;
public:
    Date();
    Date(int, int, int);   // sets day, month, year
    void printDate() const;   	    // print date to the screen
};

