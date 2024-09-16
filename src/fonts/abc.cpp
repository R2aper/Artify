#include <iostream>
#include <string>
#include <map>

#include "../../include/TTSCI_LIB.h"
#include "../../fonts/abc.h"

ABC::ABC() {
    ABC::row = 5;
    ABC::width = 5;

    FontLetter['A'] = "  A  \n A A \nAAAAA\nA   A\nA   A\n";
    FontLetter['B'] = "BBBB \nB   B\nBBBB \nB   B\nBBBB \n";
    FontLetter['C'] = " CCC \nC   C\nC    \nC   C\n CCC \n";
    FontLetter['D'] = "DDDD \nD   D\nD   D\nD   D\nDDDD \n";
    FontLetter['E'] = "EEEEE\nE    \nEEEEE\nE    \nEEEEE\n";
    FontLetter['F'] = "FFFFF\nF    \nFFFFF\nF    \nF    \n";
    FontLetter['G'] = " GGG \nG   G\nG    \nG  GG\n GGG \n";
    FontLetter['H'] = "H   H\nH   H\nHHHHH\nH   H\nH   H\n";
    FontLetter['I'] = "IIIII\n  I  \n  I  \n  I  \nIIIII\n";
    FontLetter['J'] = "JJJJJ\n    J\n    J\nJ   J\n JJJ \n";
    FontLetter['K'] = "K   K\nK  K \nKKK  \nK  K \nK   K\n";
    FontLetter['L'] = "L    \nL    \nL    \nL    \nLLLLL\n";
    FontLetter['M'] = "M   M\nMM MM\nM M M\nM   M\nM   M\n";
    FontLetter['N'] = "N   N\nN N N\nN  NN\nN   N\nN   N\n";
    FontLetter['O'] = " OOO \nO   O\nO   O\nO   O\n OOO \n";
    FontLetter['P'] = "PPPP \nP   P\nPPPP \nP    \nP    \n";
    FontLetter['Q'] = " QQQ \nQ   Q\nQ   Q\nQ  QQ\n QQQ \n";
    FontLetter['R'] = "RRRR \nR   R\nRRRR \nR  R \nR   R\n";
    FontLetter['S'] = " SSS \nS   S\n SSS \n    S\n SSS \n";
    FontLetter['T'] = "TTTTT\n  T  \n  T  \n  T  \n  T  \n";
    FontLetter['U'] = "U   U\nU   U\nU   U\nU   U\n UUU \n";
    FontLetter['V'] = "V   V\nV   V\nV   V\n V V \n  V  \n";
    FontLetter['W'] = "W   W\nW   W\nW W W\nWW WW\nW   W\n";
    FontLetter['X'] = "X   X\n X X \n  X  \n X X \nX   X\n";
    FontLetter['Y'] = "Y   Y\n Y Y \n  Y  \n  Y  \n  Y  \n";
    FontLetter['Z'] = "ZZZZZ\n   Z \n  Z  \n Z   \nZZZZZ\n";

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

    FontLetter['!'] = "  !  \n  !  \n  !  \n     \n  !  \n";
    FontLetter['.'] = "     \n     \n     \n     \n  .  \n";
    FontLetter['?'] = "??   \n  ?  \n   ? \n?    \n?    \n";
    FontLetter[':'] = "     \n  :  \n     \n  :  \n     \n";
    FontLetter['^'] = "  ^  \n ^ ^ \n ^ ^ \n     \n     \n"; 
}

  std::map<char, std::string> ABC::GetFont() {
        return FontLetter;
}

int ABC::getRow() {
    return row;
}

int ABC::getWidth() {
    return width;
}