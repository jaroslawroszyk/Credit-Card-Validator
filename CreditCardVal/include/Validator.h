#pragma once

#include <string>
#include "CardDetails.h"

namespace
{
    constexpr int MAX_YEAR{9999};
    constexpr int MIN_YEAR{1900};
} // namespace

enum class CardType
{
    Mastercard,
    Bankcard,
    Visa,
    AmericanExpress,
    LaunchPass,
};

class Validator
{
public:
//    Validator(int cardNumber,cardExpiryDate validThru,std::string holder,int cvc);
    int add(int a,int b);

private:
    int cardNumber;
    CardDetails validThru;
    std::string holder;
    int cvc;
};

//function type type() return std::string
/*
 * bool checkLuhn(const std::string& cardNo) {

    int nDigits = cardNo.length();
    int nSum = 0, isSecond = false;
    for(int i = nDigits - 1; i >= 0; i--) {

        int d = cardNo[i] - '0';
        if(isSecond == true)
           d = d * 2;

        nSum += d / 10;
        nSum += d % 10;
        isSecond = !isSecond;
    }
    return (nSum % 10 == 0);
}
 */
