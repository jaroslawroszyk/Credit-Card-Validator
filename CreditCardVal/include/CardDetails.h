#pragma once

#include <string>

enum class CardType
{
    Mastercard,
    Bankcard,
    Visa,
    AmericanExpress,
    LaunchPass,
};

class CardDetails
{
public:
//    CardDetails(int day, int month, int year);

//    CardDetails();

    static bool isLeapYear(int year);

private:
    int day;
    int month;
    int year;
};
