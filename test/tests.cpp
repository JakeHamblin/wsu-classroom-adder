#include <tuple>
#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

// Include student file below this line
// ----------------------------------------
#include "../student.cpp"
// ----------------------------------------

// ----------------------------------------
// Include test cases below
// TEST_CASE(Name of test, tags) {
//     REQUIRE(fun(INPUTS) == some value)
// }
// ----------------------------------------
TEST_CASE("Check addition function", "[add]") {
    REQUIRE(add(3,5) == 8);
}

TEST_CASE("Check multiplication function", "[mult]") {
    REQUIRE(mult(3, 5) == 15);
}
