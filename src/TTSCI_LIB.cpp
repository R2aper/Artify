#include <iostream>
#include <string>
#include <map>

#include "../include/TTSCI_LIB.h"

 void Font::Print(const std::string input, std::map<char, std::string> font) {
        for (int row = 0; row < 5; ++row) { // Предполагается, что каждая буква занимает 5 строк
            for (char c : input) {
                if ((font.find(static_cast<char>(toupper(c))) != font.end())) {
                    std::cout <<font.at(static_cast<char>(toupper(c))).substr(row * 6, 5) << " \t"; // 6 — ширина буквы + пробел
                } else {
                    std::cout << "     "; // Пробел для недоступных символов
                }
            }
            printf("\n"); 
        }
    }