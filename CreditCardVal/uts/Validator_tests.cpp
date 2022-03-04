#include <gtest/gtest.h>
#include "Validator.h"
#include <tuple>

class ValidatorTests : public ::testing::Test
{
protected:
    ValidatorTests()
    { };

    ~ValidatorTests() override
    { };
};

TEST_F(ValidatorTests,FOO)
{
    Validator a;
    EXPECT_EQ(a.add(2,2),4);
}

