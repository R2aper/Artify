#pragma once
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"


class Regular:public Font {
private:
 std::map<char , std::string> FontLetter;
 int row;

public:
    Regular();

    std::map<char, std::string> GetFont(); 

    int getRow();

};