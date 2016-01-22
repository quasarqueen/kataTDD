#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <string>

using namespace std;


TEST_CASE("needs to convert a RN to Arabic N","[RN2Arab]"){
    REQUIRE( RN2Arab(I)== 1);
}
