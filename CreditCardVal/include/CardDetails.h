#pragma once

#include <string>

struct CardDetails
{
public:
    int month;
    int year;
    int day;

    bool isValidDate(CardDetails* validCard);
    bool isLeapYear(int year);
};
