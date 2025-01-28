#include <fstream>
#include <map>
#include <string>

#include "libartify.hpp"

std::string GetTextFromFile(std::fstream &file) {
  std::string input, line;
  while (std::getline(file, line)) {
    input += line;
  }
  file.close();
  return input;
}

bool IsValidFont(std::string option, std::string OptionFonts[]) { //!
  return (option != OptionFonts[0] && option != OptionFonts[1] && option != OptionFonts[2]);
}