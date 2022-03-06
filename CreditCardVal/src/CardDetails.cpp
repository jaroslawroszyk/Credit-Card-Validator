#include "CardDetails.h"
#include <iostream>



//CardDetails::CardDetails(int day, int month, int year)
//        :day(day), month(month), year(year)
//{ }

//bool CardDetails::isValidDate(CardDetails* validCard);
bool CardDetails::isLeapYear(int year)
{
    return ((year%4==0) && (year%100!=0)) || (year%400==0);
}