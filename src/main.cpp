#include "libartify.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

/*           Fonts              */
#include "abc.hpp"
#include "default.hpp"
#include "shady.hpp"
#include "tiny.hpp"

/*
TODO:

*Написать тесты
*Написать README

*/

void usage() {
  printf("Artify - Generate ASCII art from text     \n\nUsage: artify [options] <text> \n\
Options: \n\
 -h, --help                       Show this help \n\
 --abc <text>                     Display Ascii art from <text> with ABC font\n\
 --shady <text>                   Display Ascii art from <text> with Shady font\n\
 --tiny  <text>                   Display Ascii art from <text> with Tiny font\n\
 -ff <path to file>               Display Ascii art from <file>\n\
 -tf <path to file> <text>        Writy Ascii art to <file> from <text>\n");
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    usage();
    return 1;
  }
  std::vector<std::string> OptionFonts = {"--shady", "--tiny", "--abc"};

  std::unordered_map<std::string, Default> Fonts = {
      {OptionFonts[0], Shady()}, {OptionFonts[1], Tiny()}, {OptionFonts[2], ABC()}};

  Default Font;
  std::fstream file;

  for (int i = 1; i < argc; i++) {
    if (argv[i][0] == '-') {

      if (std::string(argv[i]) == "-h" || std::string(argv[i]) == "--help") {
        usage();
        return 0;
      }

      else if (argv[i][1] == '-' &&
               std::find(OptionFonts.begin(), OptionFonts.end(), argv[i]) != OptionFonts.end()) {
        Font = Fonts[argv[i]];
        continue;
      }

      else if (std::string(argv[i]) == "-tf" && i + 2 < argc) {
        file.open(argv[i + 1]);

        if (!file.is_open()) {
          std::cerr << "File " << argv[i + 1] << " is not found!" << std::endl;
          return 1;
        }

        Font.PrintToFile(argv[i + 2], Font.GetFont(), Font.getRow(), Font.getWidth(), file);
        return 0;
      }

      else if (std::string(argv[i]) == "-ff" && i + 1 < argc) {
        file.open(argv[i + 1]);

        if (!file.is_open()) {
          std::cerr << "File " << argv[i + 1] << " is not found!" << std::endl;
          return 1;
        }

        std::string input = GetTextFromFile(file);
        Font.Print(input, Font.GetFont(), Font.getRow(), Font.getWidth());
        return 0;
      }

      else {
        std::cerr << "Unknown option: " << std::string(argv[i]) << std::endl;
        return 1;
      }
    }
    Font.Print(argv[i], Font.GetFont(), Font.getRow(), Font.getWidth());
    break;
  }

  return 0;
}
