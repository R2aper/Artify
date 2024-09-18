#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

/*           Fonts              */
#include "../include/TTSCI_LIB.h"
#include "../fonts/default.h"
#include "../fonts/abc.h"

/*
TODO:
https://textfancy.com/text-art/
- Исправить баги 
- Передалать метод Print
- Изучить std::map
- Добавить больше шрифтов:
Shady(
     \   
    _ \  
   ___ \ 
 _/    _\                       
)

Tiny(
 /\ 
/--\
)

- Раозобратся с git
*/

void usage() {
    printf("TTSCI - Generate ASCII art from text     \n\nUsage: TTSCI [options] <text> \n\
Options: \n\
 -h or --help                     Show this help \n\
 --abc <text>                     Display Ascii art from text with ABC font\n\
 --shady <text>                   Display Ascii art from text with Shady font\n\
 --tiny  <text>                   Display Ascii art from text with Tiny font\n\
 -ff <path to file>               Display Ascii art from file with default font\n\
 -tf <path to file> <text>        Display Ascii art from text with default font to file");
}


std::string GetTextFromFile(std::fstream &file) {
    std::string input,line;
    while (std::getline(file, line)) {
        input += line;
    }
    file.close();
    return input;
}



int main(int argc, char *argv[]) {
    if(argc < 2 ) {
        usage();
        return 1;  
    }

bool FromFileFlag = false,
ToFileFlag = false, 
ABCFont = false;
//bool ShadyFont = false;
//bool TinyFont = false;

    for(int i = 1 ; i < argc; i++) {
        if(argv[i][0] == '-') {

            if(argv[i][1] == 'h' || (argv[i][1] == '-' && argv[i][2] == 'h' && argv[i][3] == 'e' && argv[i][4] == 'l' && argv[i][5] == 'p')) {
                usage();
                return 0; 
            }
           
            if(argv[i][1] == 'f' && argv[i][2] == 'f') FromFileFlag = true;
            if(argv[i][1] == 't' && argv[i][2] == 'f') ToFileFlag = true;
            if(argv[i][1] == '-' && argv[i][2] == 'a' && argv[i][3] == 'b' && argv[i][4] == 'c') ABCFont = true;
            /*
            if(argv[i][1] == '-' && argv[i][2] == 's' && argv[i][3] == 'h' && argv[i][4] == 'a' && argv[i][5] == 'd' && argv[i][6] == 'y') ShadyFont = true;
            if(argv[i][1] == '-' && argv[i][2] == 't' && argv[i][3] == 'i' && argv[i][4] == 'n' && argv[i][5] == 'y') TinyFont = true;
            */
            if(!ABCFont && !FromFileFlag && !ToFileFlag) {
                printf("Unknown option: %s\n", argv[i]);
                return 1;
            }

        } else {

            if(FromFileFlag && i <= argc) {
                std::fstream file;
                file.open(argv[i]);

                if(!file.is_open()) {
                    printf("File is not found!\n");
                    return 1;
                }

                std::string input = GetTextFromFile(file);

                Default font;
                font.Print(input, font.GetFont(),font.getRow(),font.getWidth());

                return 0;
            }
              
            if(ToFileFlag && i+1 <= argc) {
                std::fstream file;
                file.open(argv[i]);

                if(!file.is_open()) {
                    printf("File is not found!\n");
                    return 1;
                }

                Default font;
                font.PrintToFile(argv[i+1], font.GetFont(),font.getRow(),font.getWidth(),file);

                return 0;
            }

            /*
            if(ShadyFont && i+1 <= argc) {
                Shady a;
                a.Print(argv[i], a.GetFont(),a.getRow(),a.getWidth());

                return 0;
            }

            if(TinyFont && i+1 <= argc) {
                Tiny a;
                a.Print(argv[i], a.GetFont(),a.getRow(),a.getWidth());

                return 0;
            }
           
            */
            if(ABCFont && i+1 <= argc) {
                ABC font;
                font.Print(argv[i], font.GetFont(),font.getRow(),font.getWidth());

                return 0;
            } 

            if(!ABCFont && !FromFileFlag && !ToFileFlag) {
                Default font;
                font.Print(argv[i], font.GetFont(),font.getRow(),font.getWidth());

                return 0;
            }

        }
    
    }

    return 0;
}
