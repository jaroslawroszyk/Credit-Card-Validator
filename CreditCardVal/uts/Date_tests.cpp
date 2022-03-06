#include <gtest/gtest.h>
#include "Date.h"
#include <tuple>

class DateTests : public ::testing::Test
{
protected:
    DateTests()
    { };

    ~DateTests() override
    { };
};

TEST_F(DateTests,ValidationOfTheGivenDate)
{
    Date sut(Date{31,2,2016});
    EXPECT_FALSE(sut.isValid());
}

