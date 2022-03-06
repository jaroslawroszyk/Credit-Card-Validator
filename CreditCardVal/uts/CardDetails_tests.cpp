#include <gtest/gtest.h>
#include "CardDetails.h"
#include <tuple>

class CardDetailsTests : public ::testing::Test
{
protected:
    CardDetailsTests()
    { };

    ~CardDetailsTests() override
    { };
};

class LeapYearParameterTestFixture : public ::testing::TestWithParam<std::tuple<int, bool>>
{
};

TEST_P(LeapYearParameterTestFixture, ChecksIfLeapYear)
{
    bool expected = std::get<1>(GetParam());
    auto year = std::get<0>(GetParam());
    CardDetails obj;
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