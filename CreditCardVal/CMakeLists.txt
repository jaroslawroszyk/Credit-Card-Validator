add_library(implementations src/Validator.cpp)
target_include_directories(implementations PUBLIC include)

add_executable(tests uts/Validator_tests.cpp)
target_link_libraries(tests gmock_main gtest gmock implementations)
