#pragma once

#include <string>

namespace {
    constexpr int MAX_YEAR{9999};
    constexpr int MIN_YEAR{1900};
} // namespace

struct cardExpiryDate {
    int month;
    int year;
};

class Validator {
public:
    bool isLeapYear(int year);

private:
    int cardNumber;
    cardExpiryDate validThru;
    std::string holder;
    int cvc;
};

