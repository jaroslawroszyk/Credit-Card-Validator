#pragma once
#include <string>
//#include "CardDetails.h"

class Validator
{
public:
//    Validator(int cardNumber,cardExpiryDate validThru,std::string holder,int cvc);
    Validator() = default;
    int add(int a,int b);

private:
    int cardNumber;
//    CardDetails validThru;
    std::string holder;
    int cvc;
};