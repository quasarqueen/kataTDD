#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
#include <string>

using namespace std;

string RN2Arab (string roman) {
    int arabic=0;
    const int length = roman.length();
    int i;
    int l=(length);
    for (i=0; i<l; i++)
    {
        int j=(i-1);
        int k=(i+1);
        if(roman[i] == 'M' && roman[j] != 'C')  {arabic=(arabic+1000);}
        if(roman[i] == 'M' && roman[j] == 'C')  {arabic=(arabic+900);}
        if(roman[i] == 'D' && roman[j] != 'C')  {arabic=(arabic+500);}
        if(roman[i] == 'D' && roman[j] == 'C')  {arabic=(arabic+400);}
        if(roman[i] == 'C' && roman[j] != 'X'&& roman[k] != 'M' && roman[k] != 'D')  {arabic=(arabic+100);}
        if(roman[i] == 'C' && roman[j] == 'X')  {arabic=(arabic+90);}
        if(roman[i] == 'L' && roman[j] != 'X')  {arabic=(arabic+50);}
        if(roman[i] == 'L' && roman[j] == 'X')  {arabic=(arabic+40);}
        if(roman[i] == 'X' && roman[j] != 'I'&& roman[k] != 'L' && roman[k] != 'C')  {arabic=(arabic+10);}
        if(roman[i] == 'X' && roman[j] == 'I')  {arabic=(arabic+9);}
        if(roman[i] == 'V' && roman[j] != 'I')  {arabic=(arabic+5);}
        if(roman[i] == 'V' && roman[j] == 'I')  {arabic=(arabic+4);}
        if(roman[i] == 'I' && roman[k] != 'X' && roman[k] != 'V')  {arabic=(arabic+1);}
    }
    std::string strarb = std::to_string(arabic);
    return strarb;
}

TEST_CASE("needs to convert a RN to Arabic N","[RN2Arab]"){
    CHECK( RN2Arab("I")== "1");
    REQUIRE( RN2Arab("IV")== "4");
    REQUIRE( RN2Arab("IX")== "9");
    REQUIRE( RN2Arab("XL")== "40");
    REQUIRE( RN2Arab("XC")== "90");
}

