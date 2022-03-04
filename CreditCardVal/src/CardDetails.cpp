#include "CardDetails.h"
#include <iostream>

//bool CardDetails::isValidDate(CardDetails* validCard);
bool CardDetails::isLeapYear(int year)
{
    return ((year%4==0) && (year%100!=0)) || (year%400==0);
}