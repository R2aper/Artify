#pragma once
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"

class Default:public Font {
private:
 std::map<char , std::string> FontLetter;
 unsigned int row;
 unsigned int width;

public:
    Default();

    std::map<char, std::string> GetFont(); 

    unsigned int getRow();
    unsigned int getWidth();

};