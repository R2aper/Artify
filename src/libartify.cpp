#include "libartify.hpp"

std::string GetTextFromFile(std::fstream &file) {
  std::string input, line;
  while (std::getline(file, line)) {
    input += line;
  }
  file.close();
  return input;
}