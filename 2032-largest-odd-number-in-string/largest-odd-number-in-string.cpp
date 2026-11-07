#include <iostream>
#include <string>
class Solution {
public:
    string largestOddNumber(string num) {

        int last =-1 ;

        for(int i = num.size()-1; i>=0 ; i--){
            if(int(num[i]) % 2 != 0 ){

                last = i;
                break;

            }
        }

        if(last != -1) return num.substr(0,last+1);

        return "";
        
    }
};