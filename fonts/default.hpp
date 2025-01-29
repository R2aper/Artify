#ifndef DEFAULT_HPP
#define DEFAULT_HPP

#include "libartify.hpp"
#include <map>

class Default {
protected:
  std::map<char, std::string> FontLetter;
  unsigned int row;
  unsigned int width;

public:
  Default();
  void Print(const std::string &input, std::map<char, std::string> font, unsigned int row,
             unsigned int width);
  void PrintToFile(const std::string &input, std::map<char, std::string> font, unsigned int row,
                   unsigned int width, std::fstream &file);
  std::map<char, std::string> GetFont();
  unsigned int getRow();
  unsigned int getWidth();
};

#endif // DEFAULT_HPP