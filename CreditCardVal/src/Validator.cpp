#include "Validator.h"
#include <regex>
#include <numeric>
#include <iostream>
#include <utility>

namespace valide
{
auto Validator::checkCard(const std::string &s)->bool
{
    std::regex pattern{R"(\d{13,19})"};
    return std::regex_match(s , pattern);
}

std::vector<int> &Validator::checkDigit(std::vector<int> &digit , size_t i)
{
    if (!(i % 2))
        digit[i] *= 2;
    if (digit[i] > 9)
        digit[i] -= 9;
    return digit;
}

bool Validator::sumWholeDigits(std::vector<int> &digit , const int &lastElement)
{ return std::accumulate(digit.begin() , digit.end() , 0) % 10 == lastElement; }

auto Validator::passesLuhn(std::basic_string<char> cardNo)->bool
{
    std::string cardNumber = std::move(cardNo);

    std::vector<int> digit;
    for (const auto &number: cardNumber)
        digit.push_back(number - '0');

    const auto &lastElement = digit.back();
    digit.pop_back();
    std::reverse(digit.begin() , digit.end());

    for (size_t i = 0; i < digit.size(); ++i)
    {
        digit = checkDigit(digit , i);
    }

    return sumWholeDigits(digit , lastElement);
}
} // namespace valide
