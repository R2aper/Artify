#include <fstream>
#include <iostream>
#include <map>
#include <string>

#include "default.hpp"

Default::Default() {
  Default::row = 5;
  Default::width = 7;

  FontLetter['A'] = " ***   \n**  ** \n*******\n**   **\n**   **\n";
  FontLetter['B'] = "****   \n*   *  \n****   \n*   *  \n****   \n";
  FontLetter['C'] = "  ***  \n *     \n*      \n *     \n  ***  \n";
  FontLetter['D'] = "****   \n*   *  \n*   *  \n*   *  \n****   \n";
  FontLetter['E'] = "*******\n*      \n*******\n*      \n*******\n";
  FontLetter['F'] = "*******\n*      \n*******\n*      \n*      \n";
  FontLetter['G'] = "  **** \n *     \n*  *** \n*    * \n ****  \n";
  FontLetter['H'] = "*     *\n*     *\n*******\n*     *\n*     *\n";
  FontLetter['I'] = " ***   \n  *    \n  *    \n  *    \n ***   \n";
  FontLetter['J'] = "  **** \n    *  \n    *  \n*   *  \n ****  \n";
  FontLetter['K'] = "*   *  \n*  *   \n***    \n*  *   \n*   *  \n";
  FontLetter['L'] = "*      \n*      \n*      \n*      \n*******\n";
  FontLetter['M'] = "*    * \n**  ** \n* ** * \n*    * \n*    * \n";
  FontLetter['N'] = "*    * \n**   * \n* *  * \n*  * * \n*    * \n";
  FontLetter['O'] = "  ***  \n *   * \n*     *\n *   * \n  ***  \n";
  FontLetter['P'] = "****   \n*   *  \n****   \n*      \n*      \n";
  FontLetter['Q'] = "  ***  \n *   * \n*     *\n *   * \n  *****\n";
  FontLetter['R'] = "****   \n*   *  \n****   \n*  *   \n*   *  \n";
  FontLetter['S'] = "  **** \n *     \n  **** \n     * \n  **** \n";
  FontLetter['T'] = "*******\n   *   \n   *   \n   *   \n   *   \n";
  FontLetter['U'] = "*   *  \n*   *  \n*   *  \n*   *  \n ***   \n";
  FontLetter['V'] = "*    * \n*    * \n*    * \n*    * \n *  *  \n";
  FontLetter['W'] = "*     *\n*  *  *\n* * * *\n**   **\n*     *\n";
  FontLetter['X'] = "*   *  \n * *   \n  *    \n * *   \n*   *  \n";
  FontLetter['Y'] = "*    * \n *  *  \n  **   \n   *   \n   *   \n";
  FontLetter['Z'] = "*******\n    *  \n   *   \n  *    \n*******\n";

  FontLetter['0'] = "  ***  \n *   * \n*     *\n *   * \n  ***  \n";
  FontLetter['1'] = "   *   \n  **   \n   *   \n   *   \n  ***  \n";
  FontLetter['2'] = "  ***  \n *   * \n    *  \n   *   \n  ***  \n";
  FontLetter['3'] = "  ***  \n *   * \n   **  \n *   * \n  ***  \n";
  FontLetter['4'] = " *   * \n *   * \n*******\n     * \n     * \n";
  FontLetter['5'] = "  ***  \n *     \n  ***  \n     * \n  ***  \n";
  FontLetter['6'] = "  ***  \n *     \n****** \n *   * \n  ***  \n";
  FontLetter['7'] = "*******\n    *  \n   *   \n  *    \n *     \n";
  FontLetter['8'] = "  ***  \n *   * \n  ***  \n *   * \n  ***  \n";
  FontLetter['9'] = "  ***  \n *   * \n  **** \n     * \n  ***  \n";

  FontLetter['!'] = "   *   \n   *   \n   *   \n       \n   *   \n";
  FontLetter['.'] = "       \n       \n       \n       \n   *   \n";
  FontLetter['?'] = "**     \n  *    \n   *   \n*      \n*      \n";
  FontLetter[':'] = "       \n   *   \n       \n   *   \n       \n";
  FontLetter['^'] = "   *   \n  * *  \n *   * \n       \n       \n";
}

void Default::Print(const std::string input, std::map<char, std::string> font, unsigned int row,
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

void Default::PrintToFile(const std::string input, std::map<char, std::string> font,
                          unsigned int row, unsigned int width, std::fstream &file) {
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

std::map<char, std::string> Default::GetFont() { return FontLetter; }
unsigned int Default::getRow() { return row; }
unsigned int Default::getWidth() { return width; }