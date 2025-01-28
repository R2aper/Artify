#ifndef LIBARTIFY_HPP
#define LIBARTIFY_HPP

#include <fstream>
#include <map>
#include <string>

std::string GetTextFromFile(std::fstream &file);

bool IsValidFont(std::string option, std::string OptionFonts[]);

class Font {
protected:
  std::map<char, std::string> FontLetter;
  unsigned int row;
  unsigned int width;

public:
  void Print(const std::string input, std::map<char, std::string> font, unsigned int row,
             unsigned int width);
  void PrintToFile(const std::string input, std::map<char, std::string> font, unsigned int row,
                   unsigned int width, std::fstream &file);
  std::map<char, std::string> GetFont();
  unsigned int getRow();
  unsigned int getWidth();
};

#endif // LIBARTIFY_HPP