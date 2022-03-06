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