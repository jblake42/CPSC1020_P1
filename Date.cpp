#include "Date.h"
#include <string>

bool Date::setDay(int d)
{
    if(d > 0 && d < 31)
    {
        day = d;
        return true;
    }
    return false;
}

bool Date::setMonth(int m)
{
    if(m > 0 && m < 13)
    {
        month = m;
        return true;
    }
    return false;
}

bool Date::setYear(int y)
{
    if(y > 2020 && y < 2023)
    {
        year = y;
        return true;
    }
    return false;
}
int Date::getDay()
{
    return day;
}
int Date::getMonth()
{
    return month;
}
int Date::getYear()
{
    return year;
}
string Date::showDate()
{
    //return "hello world";
}



