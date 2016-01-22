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

string Arab2RN(string numStr)
{
    
    string roman;
    const int length = numStr.length();
    
    int ones=length-1;
    int tens=length-2;
    int huns=length-3;
    
    if (length==1)
    {
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
        
    }
    if (length==2)
    {
        if (numStr[tens] == '1')  {roman.append("X");}
        if (numStr[tens] == '2')  {roman.append("XX");}
        if (numStr[tens] == '3')  {roman.append("XXX");}
        if (numStr[tens] == '4')  {roman.append("XL");}
        if (numStr[tens] == '5')  {roman.append("L");}
        if (numStr[tens] == '6')  {roman.append("LX");}
        if (numStr[tens] == '7')  {roman.append("LXX");}
        if (numStr[tens] == '8')  {roman.append("LXXX");}
        if (numStr[tens] == '9')  {roman.append("XC");}
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
    }
    if (length==3)
    {
        if (numStr[huns] == '1')  {roman.append("C");}
        if (numStr[huns] == '2')  {roman.append("CC");}
        if (numStr[huns] == '3')  {roman.append("CCC");}
        if (numStr[huns] == '4')  {roman.append("CD");}
        if (numStr[huns] == '5')  {roman.append("D");}
        if (numStr[huns] == '6')  {roman.append("DC");}
        if (numStr[huns] == '7')  {roman.append("DCC");}
        if (numStr[huns] == '8')  {roman.append("DCCC");}
        if (numStr[huns] == '9')  {roman.append("CM");}
        if (numStr[tens] == '1')  {roman.append("X");}
        if (numStr[tens] == '2')  {roman.append("XX");}
        if (numStr[tens] == '3')  {roman.append("XXX");}
        if (numStr[tens] == '4')  {roman.append("XL");}
        if (numStr[tens] == '5')  {roman.append("L");}
        if (numStr[tens] == '6')  {roman.append("LX");}
        if (numStr[tens] == '7')  {roman.append("LXX");}
        if (numStr[tens] == '8')  {roman.append("LXXX");}
        if (numStr[tens] == '9')  {roman.append("XC");}
        if (numStr[ones] == '1')  {roman.append("I");}
        if (numStr[ones] == '2')  {roman.append("II");}
        if (numStr[ones] == '3')  {roman.append("III");}
        if (numStr[ones] == '4')  {roman.append("IV");}
        if (numStr[ones] == '5')  {roman.append("V");}
        if (numStr[ones] == '6')  {roman.append("VI");}
        if (numStr[ones] == '7')  {roman.append("VII");}
        if (numStr[ones] == '8')  {roman.append("VIII");}
        if (numStr[ones] == '9')  {roman.append("IX");}
    }
    if (length==4)
    {
        roman.append("M");
    }
    return roman;
}

TEST_CASE("needs to convert an arabic number to RN","[Arab2RN]"){
    CHECK( Arab2RN("1")== "I");
    REQUIRE( Arab2RN("4")== "IV");
    REQUIRE( Arab2RN("9")== "IX");
    REQUIRE( Arab2RN("40")== "XL");
    REQUIRE( Arab2RN("90")== "XC");
}
