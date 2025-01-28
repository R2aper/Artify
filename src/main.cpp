#include <cstring>
#include <fstream>
#include <iostream>
#include <string>

/*           Fonts              */
#include "abc.hpp"
#include "default.hpp"
#include "libartify.hpp"
#include "shady.hpp"
#include "tiny.hpp"

/*
TODO:
*Переписать функцию IsValidFont
*Написать тесты
*Написать README

*/

void usage() {
  printf("Artify - Generate ASCII art from text     \n\nUsage: TTSCI [options] <text> \n\
Options: \n\
 -h                               Show this help \n\
 --abc <text>                     Display Ascii art from text with ABC font\n\
 --shady <text>                   Display Ascii art from text with Shady font\n\
 --tiny  <text>                   Display Ascii art from text with Tiny font\n\
 -ff <path to file>               Display Ascii art from file with default font\n\
 -tf <path to file> <text>        Display Ascii art from text with default font to file");
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    usage();
    return 1;
  }
  std::string OptionFonts[3] = {"--shady", "--tiny", "--abc"};

  std::map<std::string, Default> Fonts = {
      {OptionFonts[0], Shady()}, {OptionFonts[1], Tiny()}, {OptionFonts[2], ABC()}};

  Default Font;
  bool FromFileFlag = false, ToFileFlag = false;

  for (int i = 1; i < argc; i++) {
    if (argv[i][0] == '-') {
      std::string option = argv[i];

      if (option == "-h") {
        usage();
        return 0;
      }

      if (option == "-tf") {
        ToFileFlag = true;
        continue;
      }

      if (option == "-ff") {
        FromFileFlag = true;
        continue;
      }

      Font = Fonts[option];

      if (IsValidFont(option, OptionFonts) && !FromFileFlag && !ToFileFlag) { //!
        std::cerr << "Unknown option: " << option << std::endl;
        return 1;
      }

    } else {
      if (FromFileFlag) {
        std::fstream file;
        file.open(argv[i]);

        if (!file.is_open()) {
          printf("File is not found!\n");
          return 1;
        }

        std::string input = GetTextFromFile(file);
        Font.Print(input, Font.GetFont(), Font.getRow(), Font.getWidth());

        return 0;
      }

      if (ToFileFlag) {
        if (i + 1 >= argc) {
          usage();
          return 1;
        }
        std::fstream file;
        file.open(argv[i]);

        if (!file.is_open()) {
          printf("File is not found!\n");
          return 1;
        }

        Font.PrintToFile(argv[i + 1], Font.GetFont(), Font.getRow(), Font.getWidth(), file);

        return 0;
      }

      Font.Print(argv[i], Font.GetFont(), Font.getRow(), Font.getWidth());
    }
  }

  return 0;
}
