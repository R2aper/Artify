#include <iostream>
#include <string>
#include <map>
#include <fstream>

#include "../include/TTSCI_LIB.h"

 void Font::Print(const std::string input, std::map<char, std::string> font, unsigned int row, unsigned int width)  {
        for (unsigned int i = 0; i < row; ++i) { // Предполагается, что каждая буква занимает 5 строк
            for (char c : input) {
                if ((font.find(static_cast<char>(toupper(c))) != font.end())) {
                    std::cout <<font.at(static_cast<char>(toupper(c))).substr(i * (width+1), width) << " \t"; //!! 6 — ширина буквы + пробел
                } else {
                    std::cout << "     "; // Пробел для недоступных символов
                }
            }
            std::cout << std::endl; 
        }
    }

void Font::PrintToFile(const std::string input, std::map<char, std::string> font ,unsigned  int row, unsigned  int width, std::fstream &file) {
    for (unsigned int i = 0; i < row; ++i) { 
            for (char c : input) {
                if ((font.find(static_cast<char>(toupper(c))) != font.end())) {
                    file <<font.at(static_cast<char>(toupper(c))).substr(i * (width+1), width) << " \t"; //!! 6 — ширина буквы + пробел
                } else {
                    file << "     "; // Пробел для недоступных символов
                }
            }
           file << "\n"; 
        }
    file.close();

}
