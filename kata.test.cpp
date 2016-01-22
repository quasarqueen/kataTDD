
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions.hpp"

#include <iostream>
#include <string>

using namespace std;

TEST_CASE("needs to convert an arabic number to RN","[Arab2RN]"){
    CHECK( Arab2RN("1")== "I");
    REQUIRE( Arab2RN("444")== "CDXLIV");
    REQUIRE( Arab2RN("999")== "CMXCIX");
}

TEST_CASE("needs to convert a RN to Arabic N","[RN2Arab]"){
    CHECK( RN2Arab("I")== "1");
    REQUIRE( RN2Arab("CDXLIV")== "444");
    REQUIRE( RN2Arab("CMXCIX")== "999");
}
