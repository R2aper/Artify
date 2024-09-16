#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

/*           Fonts              */
#include "../include/TTSCI_LIB.h"
#include "../fonts/default.h"
#include "../fonts/regular.h"
#include "../fonts/abc.h"

/*
TODO:
https://textfancy.com/text-art/
- Сделать правильную обратотку входных данных a.k.a сделать читабельным main() и n-аргументво не дефолтных шрифтов 
- Передалать метод Print
- Изучить std::map
- Добавить больше шрифтов:
Shady(
     \   
    _ \  
   ___ \ 
 _/    _\                       
)

Надо разобратся с выводом специальных сиволов Regular(
 █████╗ 
██╔══██╗
███████║
██╔══██║
██║  ██║
╚═╝  ╚═╝
 )

Tiny(
 /\ 
/--\
)

- Добавить чтение из файла и запись в файл(Возможно придется переделать)
- Разобратся с флагом -Wsign-conversion
- Раозобратся с git
- Написать нормальный help
*/

void usage() {
    printf("  TTSCI - Generate ASCII art from text     \n\nUsage:\n  For print Ascii art from text with default font: ./TTSCI <text> or ./TTSCI <text1> <text2> ...\n");
    printf("  For print Ascii art from file with default font: ./TTSCI -ff <path to file>\n");
    printf("  For print Ascii art from text with default font to file: ./TTSCI -tf <path to file> <text>\n");
    printf("  For print Ascii from text with abc font to file: ./TTSCI --abc <text>\n\n");

}


int main(int argc, char *argv[]) {
    if(argc < 2 ) {
        usage();
        return 1;  
    }

    for(int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-h") == 0) {
            usage();
            return 1;
        }

        if(strcmp(argv[i],"-ff") == 0 && i+1 <= argc) {
            i++;
            std::fstream file;
            file.open(argv[i]);

            if(file.is_open()) {
                std::string input;

                while(!file.eof()) file >> input;
                file.close();

                Default font;
                font.Print(input, font.GetFont(),font.getRow(),font.getWidth());

                return 0;

            } else {
                printf("File is not found!\n");
                return 1;
            }
        }

        if(strcmp(argv[i],"-tf") == 0 && i+2 <= argc) {
            i++;
            std::fstream file;
            file.open(argv[i]);

            if(file.is_open()) {
                i++;
                Default font;
                font.PrintToFile(argv[i], font.GetFont(),font.getRow(),font.getWidth() ,file);
                file.close();
                    
                return 0;

            } else {
                printf("File is not found!\n");
                return 1;
            }}

        if(strcmp(argv[i],"--regular") == 0) {
            // Regular font;
            // a.Print(argv[i], a.GetFont());
        }

        if(strcmp(argv[i],"--tiny") == 0) {
        // Tiny font;
        // font.Print(argv[i], t.GetFont());
        }

        if(strcmp(argv[i],"--shady") == 0) {
        // Shady font;
        // font.Print(argv[i], t.GetFont());
        }

        if((strcmp(argv[i],"--abc")==0 && i+1 <= argc)) {
            i++;
            ABC font;
            font.Print(argv[i], font.GetFont(),font.getRow(), font.getWidth());
            return 0;
        }


        if(strcmp(argv[i],"--listFont") == 0) {
            printf("Default \n ABC \n");
            return 0;
        }

        else {
            Default font;
            font.Print(argv[i], font.GetFont(),font.getRow(), font.getWidth());
        }
    }

    return 0;
}
