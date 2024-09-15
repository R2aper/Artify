#include <iostream>
#include <string>
#include <cstring>

#include "../include/TTSCI_LIB.h"
#include "../fonts/default.h"

/*
TODO:
- Сделать правильную обратотку входных данных 
- Передалать метод Print
- Изучить std::map
- Изучить добавление классов в заголовочные файлы
- Добавить больше шрифтов
- Добавить чтение из файла и запись в файл
- Разобратся с флагом -Wsign-conversion
*/

void usage() {
    printf("TTSCI - Generate ASCII art from text     \n\nUsage: TTSCI <text> or TTSCI <text1> <text2> ...\n");

}


int main(int argc, char *argv[]) {
    if(argc < 2 ) {
        usage();
        return 1;  
    }

    else {
        Default a;
        for(int i = 1; i < argc; i++) {
            if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
                usage();
                return 1;
            }
            a.Print(argv[i], a.GetFont());
        }
    }

    return 0;
}