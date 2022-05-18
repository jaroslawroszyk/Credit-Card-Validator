#pragma once
#include <string>
#include <regex>

namespace valide
{
class Validator
{
public:
//    Validator(int cardNumber,cardExpiryDate validThru,std::string holder,int cvc);
    Validator() = default;
    static auto checkCard(const std::string &s)->bool;
    static auto passesLuhn(std::basic_string<char> cardNo) -> bool;

private:
//    int cardNumber;
//    CardDetails validThru;
//    std::string holder;
//    int cvc;
    static std::vector<int> &checkDigit(std::vector<int> &digit , size_t i);

    static bool sumWholeDigits(std::vector<int> &digit , const int &lastElement);
};
}
