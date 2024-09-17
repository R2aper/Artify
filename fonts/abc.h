#pragma once
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"

class ABC:public Font {
private:
 std::map<char , std::string> FontLetter;
 unsigned int row;
 unsigned int width;

public:
    ABC();

    std::map<char, std::string> GetFont(); 

    unsigned int getRow();
    unsigned int getWidth();

};