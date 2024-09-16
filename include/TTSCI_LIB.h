#pragma once
#include <string>
#include <map>
#include <fstream>

class Font {
public:
    void Print(const std::string input, std::map<char, std::string> font, int row, int width); 
    void PrintToFile(const std::string input, std::map<char, std::string> font, int row,int width ,std::fstream &file);
    
};