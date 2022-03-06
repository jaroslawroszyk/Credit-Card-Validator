#include "Date.h"
#include "CardDetails.h"

namespace
{
    constexpr int MAX_YEAR{9999};
    constexpr int MIN_YEAR{1900};
} // namespace

Date::Date(int day,int month,int year) : day(day),month(month),year(year){}

bool Date::isValid() const
{
    if (year>MAX_YEAR ||year<MIN_YEAR)
        return false;
    if (month<1 || month>12)
        return false;
    if (day<1 ||day>31)
        return false;

    if (month==2)
    {
        if (CardDetails::isLeapYear(year))
            return (day<=29);
        else
            return (day<=28);
    }

    if (month==4 || month==6 || month==9 || month==11)
        return day<=30;

    return true;
}