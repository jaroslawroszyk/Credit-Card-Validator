#pragma once
#include <string>


namespace
{
    constexpr int MAX_YEAR{9999};
    constexpr int MIN_YEAR{1900};
} // namespace

struct cardExpiryDate
{
    int month;
    int year;
};

int isValidDate(cardExpiryDate* validDate)
{
    if(validDate->year > MAX_YEAR || validDate->year < MIN_YEAR)
        return 0;
    return 1;
}


class Validator
{
public:
    int leapYear(int year);

private:
    int cardNumber;
    //struct valid month czy cos
    cardExpiryDate validThru;
    std::string holder;
    int cvc;
};