#include <iostream>
#include <string>
#include <map>

#include "../../include/TTSCI_LIB.h"
#include "../../fonts/regular.h"


Regular::Regular() {
    Regular::row = 5;//!!!!
    FontLetter['A'] = " /\\ \n/--\\ \n|  |\n|  |\n";
    FontLetter['B'] = "-----\n|   \\\n|----\n|   \\\n-----\n";
    FontLetter['C'] = "  __ \n /  \\\n|    \n \\__/\n";
    FontLetter['D'] = "---- \n|   \\\n|    \\\n|     \\\n ----\n";
    FontLetter['E'] = "-----\n|    \n|-----\n|    \n-----\n";
    FontLetter['F'] = "-----\n|    \n|-----\n|    \n|    \n";
    FontLetter['G'] = "  __ \n /  \\\n|    \n|  --|\n \\__/\n";
    FontLetter['H'] = "|   |\n|   |\n|---|\n|   |\n|   |\n";
    FontLetter['I'] = "  -- \n   | \n   | \n  -- \n";
    FontLetter['J'] = "   --\n    |\n    |\n|   |\n -- \n";
    FontLetter['K'] = "|   / \n|--/  \n| /    \n|      \n|      \n";
    FontLetter['L'] = "|    \n|    \n|    \n|    \n|----\n";
    FontLetter['M'] = "|\\   /|\n| \\_/ |\n|     |\n|     |\n|     |\n";
    FontLetter['N'] = "|\\    |\n| \\   |\n|  \\  |\n|   \\ |\n|    \\|\n";
    FontLetter['O'] = " /\\ \n/__\\\n|  |\n|__|\n";
    FontLetter['P'] = "-----\n|   |\n|--- \n|    \n|    \n";
    FontLetter['Q'] = " /\\ \n/__\\\n|  |\n|_/\n";
    FontLetter['R'] = "-----\n|   |\n|--- \n|   \\\n|    \n";
    FontLetter['S'] = " ----\n|    \n ----\n     |\n ----\n";
    FontLetter['T'] = "-----\n   |  \n   |  \n   |  \n   |  \n";
    FontLetter['U'] = "|   |\n|   |\n|   |\n|   |\n \\_/\n";
    FontLetter['V'] = "|   |\n|   |\n|   |\n \\ / \n  V  \n";
    FontLetter['W'] = "|   |\n|   |\n|\\_/|\n|   |\n|   |\n";
    FontLetter['X'] = "\\   /\n \\ / \n  |  \n / \\ \n/   \\\n";
    FontLetter['Y'] = "\\   /\n \\_/ \n  |  \n  |  \n  |  \n";
    FontLetter['Z'] = "-----\n   Z \n  Z  \n Z   \n-----\n";

    FontLetter['1'] = "  1  \n  1  \n  1  \n  1  \n 111 \n";
    FontLetter['2'] = "22222\n    2\n   2 \n  2  \n22222\n";
    FontLetter['3'] = "33333\n    3\n33333\n    3\n33333\n";
    FontLetter['4'] = "4   4\n4   4\n44444\n    4\n    4\n";
    FontLetter['5'] = "55555\n5    \n55555\n    5\n55555\n";
    FontLetter['6'] = " 666 \n6    \n66666\n6   6\n 666 \n";
    FontLetter['7'] = "77777\n    7\n   7 \n  7  \n 7   \n";
    FontLetter['8'] = " 888 \n8   8\n 888 \n8   8\n 888 \n";
    FontLetter['9'] = " 999 \n9   9\n 9999\n    9\n 999 \n";
    FontLetter['0'] = " 000 \n0   0\n0   0\n0   0\n 000 \n";
/*
    FontLetter['!'];
    FontLetter['.'];
    FontLetter[','];
    FontLetter['?'];
    FontLetter[':'];
    FontLetter['-']
 */   
}


int Regular::getRow() {
    return row;
}

  std::map<char, std::string> Regular::GetFont() {
        return FontLetter;
}