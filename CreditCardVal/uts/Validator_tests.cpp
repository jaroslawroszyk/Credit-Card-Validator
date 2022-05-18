#include <gtest/gtest.h>
#include "Validator.h"
#include <fstream>
#include <tuple>

class ValidatorTests : public ::testing::Test
{
protected:
    ValidatorTests()
    {};

    ~ValidatorTests() override
    {};
};
namespace testing
{

class ValidatorParameterizedTest : public ::testing::TestWithParam<std::tuple<std::string , bool>>
{
public:
    valide::Validator sut;
};


TEST_P(ValidatorParameterizedTest , CheckCorrectCardNumbers)
{
    auto [number , expected] = GetParam();
    EXPECT_EQ(sut.passesLuhn(reinterpret_cast<std::basic_string<char> &&>(number)) , expected);
}

INSTANTIATE_TEST_SUITE_P(
        ValidatorParameterized ,
        ValidatorParameterizedTest ,
        ::testing::Values(
                std::make_tuple("5375156078687270" , true) ,
                std::make_tuple("537515607868727043214214" , false) ,
                std::make_tuple("6011441626735823" , false) ,
                std::make_tuple("34571024536102500" , true) ,
                std::make_tuple("5375156078687270" , true)
        ));
} // namespace testing