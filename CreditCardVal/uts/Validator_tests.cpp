#include <gtest/gtest.h>
#include "Validator.h"
#include <tuple>

class ValidatorTests : public ::testing::Test {
protected:
    ValidatorTests() { };

    ~ValidatorTests() override { };
};

class LeapYearParameterTestFixture : public ::testing::TestWithParam<std::tuple<int, bool>> {
};

TEST_P(LeapYearParameterTestFixture, ChecksIfLeapYear)
{
    bool expected = std::get<1>(GetParam());
    auto year = std::get<0>(GetParam());
    Validator obj;
    ASSERT_EQ(expected, obj.isLeapYear(year));
}

INSTANTIATE_TEST_SUITE_P(
        LeapYearParameterTests,
        LeapYearParameterTestFixture,
        ::testing::Values(
                std::make_tuple(1700, false),
                std::make_tuple(1900, false),
                std::make_tuple(2001, false),
                std::make_tuple(1996, true),
                std::make_tuple(2012, true),
                std::make_tuple(2015, false),
                std::make_tuple(2020, true)));
