#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;
 
 class Date{
     private:
        //declaring needed variables and their default value
        int day{1}, month{1}, year{2021};

     public:
        //default constructors 
        Date() = default; 
        Date(int d, int m, int y) : month{m}, day{d} ,year{y} {}
        bool setDay(int d);
        bool setMonth(int m);
        bool setYear(int y);
        int getDay();
        int getMonth();
        int getYear();
        string showDate();

 };
 #endif