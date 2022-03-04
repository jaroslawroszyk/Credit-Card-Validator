#include "Validator.h"

bool Validator::isLeapYear(int year)
{
    return ((year%4==0) && (year%100!=0)) || (year%400==0);
}

//int isValidDate(cardExpiryDate* validDate)
//{
//    if(validDate->year > MAX_YEAR || validDate->year < MIN_YEAR)
//        return 0;
//    return 1;
//}
