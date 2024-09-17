#pragma once
#include <string>
#include <map>
#include <fstream>

class Font {
public:
    void Print(const std::string input, std::map<char, std::string> font, unsigned int row, unsigned int width); 
    void PrintToFile(const std::string input, std::map<char, std::string> font, unsigned int row, unsigned int width ,std::fstream &file);
    
};