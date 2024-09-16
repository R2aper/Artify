#pragma once
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"

class ABC:public Font {
private:
 std::map<char , std::string> FontLetter;
 int row;
 int width;

public:
    ABC();

    std::map<char, std::string> GetFont(); 

    int getRow();
    int getWidth();

};