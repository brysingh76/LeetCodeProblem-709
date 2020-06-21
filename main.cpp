//
//  main.cpp
//  toLowerCase
//
//  Created by Bryant Sahota on 6/20/20.
//  Copyright © 2020 Bryant Sahota. All rights reserved.
//

#include <iostream>
//#include <string>

class Solution {
public:
    std::string toLowerCase(std::string str) {
        std::string lowerStr = "";
        for(int i = 0; i < str.length(); i++)
        {
            lowerStr += tolower(str[i]);
        }
        return lowerStr;
    }
};

int main()
{
    Solution s;
    std::string mixedCaseWord = "i KnOw YoU aRe BuT wHaT aM i?";
    std::string solved = " ";
    solved = s.toLowerCase(mixedCaseWord);
    std::cout << solved << std::endl;
    return 0;
}
