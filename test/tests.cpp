#include <tuple>
#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"

// Include student file below this line
// ----------------------------------------
#include "../functions.h"
// ----------------------------------------

// ----------------------------------------
// Include test cases below
// TEST_CASE(Name of test, tags) {
//     REQUIRE(fun(INPUTS) == some value)
// }
// ----------------------------------------

std::string phrase = "The quick brown fox jumps over the lazy dog";
int testArray[20] = {
    68,
    45,
    23,
    87,
    12,
    56,
    94,
    32,
    77,
    5,
    38,
    61,
    79,
    25,
    90,
    18,
    42,
    71,
    9,
    50,
};

TEST_CASE("Check prime number", "[prime]") {
    REQUIRE(prime(29) == true);
}

TEST_CASE("Check word count", "[wordCount]") {
    REQUIRE(wordCount(phrase) == 9);
}

TEST_CASE("Check letter count", "[letterCount]") {
    REQUIRE(letterCount(phrase) == 35);
}

TEST_CASE("Check addition", "[add]") {
    REQUIRE(add(5, 15) == 20);
}

TEST_CASE("Check subtraction", "[sub]") {
    REQUIRE(sub(15, 5) == 10);
}

TEST_CASE("Check multiplication", "[mult]") {
    REQUIRE(mult(15, 3) == 45);
}

TEST_CASE("Check division", "[div]") {
    REQUIRE(divide(15, 5) == 3);
}

TEST_CASE("Check temperature conversion", "[temp]") {
    REQUIRE(tempConvert(50.0f) == Catch::Approx(10.0f));
}

TEST_CASE("Find min in array", "[arrayMin]") {
    REQUIRE(arrayMin(testArray) == 5);
}

TEST_CASE("Find max in array", "[arrayMax]") {
    REQUIRE(arrayMax(testArray) == 94);
}