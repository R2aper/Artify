#ifndef LIBARTIFY_HPP
#define LIBARTIFY_HPP

#include <fstream>
#include <map>
#include <string>

std::string GetTextFromFile(std::fstream &file);

bool IsValidFont(std::string option, std::string OptionFonts[]);

#endif // LIBARTIFY_HPP