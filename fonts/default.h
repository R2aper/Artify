#pragma once
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"

class Default:public Font {
private:
 std::map<char , std::string> FontLetter;
 int row;
 int width;

public:
    Default();

    std::map<char, std::string> GetFont(); 

    int getRow();
    int getWidth();

};