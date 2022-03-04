cmake_minimum_required(VERSION 3.10)
project(CreditCardValidator CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -pedantic -Werror -Wno-unused-parameter -Wunused)

include(cmake/GTest.cmake)

add_subdirectory(CreditCardVal)

enable_testing()
add_test(tests CreditCardVal/tests)

add_custom_target(tests1
                  COMMAND "./CreditCardVal/tests"
                  DEPENDS tests)
