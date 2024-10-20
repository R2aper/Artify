#include <fstream>
#include <iostream>
#include <map>
#include <string>

#include "../include/TTSCI_LIB.h"

std::string GetTextFromFile(std::fstream &file) {
  std::string input, line;
  while (std::getline(file, line)) {
    input += line;
  }
  file.close();
  return input;
}

bool IsValidFont(std::string option, std::string OptionFonts[]) { //!
  return (option != OptionFonts[0] && option != OptionFonts[1] && option != OptionFonts[2] &&
          option != OptionFonts[3]);
}

void Font::Print(const std::string input, std::map<char, std::string> font, unsigned int row,
                 unsigned int width) {
  for (unsigned int i = 0; i < row; ++i) {
    for (char c : input) {
      if ((font.find(static_cast<char>(toupper(c))) != font.end())) {
        std::cout << font.at(static_cast<char>(toupper(c))).substr(i * (width + 1), width) << " ";
      } else {
        std::cout << "     ";
      }
    }
    std::cout << std::endl;
  }
}

void Font::PrintToFile(const std::string input, std::map<char, std::string> font, unsigned int row,
                       unsigned int width, std::fstream &file) {
  for (unsigned int i = 0; i < row; ++i) {
    for (char c : input) {
      if ((font.find(static_cast<char>(toupper(c))) != font.end())) {
        file << font.at(static_cast<char>(toupper(c))).substr(i * (width + 1), width) << " ";
      } else {
        file << "     ";
      }
    }
    file << "\n";
  }
  file.close();
}

std::map<char, std::string> Font::GetFont() { return FontLetter; }
unsigned int Font::getRow() { return row; }
unsigned int Font::getWidth() { return width; }
