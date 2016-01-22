#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;


// Main function
int main()
{
    int go;
    do
    {
        cout << "This Program will convert numbers between Arabic and Roman Numerals. Please input 1 if you wish to convert from Roman Numerals to Arabic or 2 if you wish to convert from Arabic to Roman Numerals." << endl;
        int userchoice;
        cin >> userchoice;
        cout<<endl;
        string roman;
        string numStr;
        switch (userchoice)
        {
            case 1:
                cout<<"\nPlease input a valid Roman Numeral"<<endl;
                
                cin>>roman;
                cout<< "Arabic Number is: " <<RN2Arab(roman) <<endl;
                break;
            case 2:
                cout<<"\nPlease input a valid Arabic Number between 1 & 1000"<<endl;
                cin>>numStr;
                cout<< "Roman Numeral is: " <<Arab2RN(numStr) <<endl;
                break;
            default:
                cout<<"please make a vaild choice.";
        }
        cout<<"\nWould you like to use convert another number? 1 for yes, 2 for no"<<endl;
        cin>>go;
        cout<<endl;
        
        
    }while (go < 2);
    return 0;
}

 
