#include <map>

#include "tiny.hpp"

Tiny::Tiny() {
  Tiny::row = 3;
  Tiny::width = 4;

  FontLetter['A'] = "    \n /\\ \n/--\\n";
  FontLetter['B'] = " __ \n|__)\n|__)\n";
  FontLetter['C'] = " __ \n/   \n\\__ \n";
  FontLetter['D'] = " __ \n|  \\\n|__/\n";
  FontLetter['E'] = " __ \n|_  \n|__ \n";
  FontLetter['F'] = " __ \n|_  \n|   \n";
  FontLetter['G'] = " __ \n/ _ \n\\__)\n";
  FontLetter['H'] = "    \n|__|\n|  |\n";
  FontLetter['I'] = "    \n |  \n |  \n";
  FontLetter['J'] = "    \n  | \n(_) \n";
  FontLetter['K'] = "    \n|_/ \n| \\ \n";
  FontLetter['L'] = "    \n|   \n|__ \n";
  FontLetter['M'] = "    \n|\\/|\n|  |\n";
  FontLetter['N'] = "    \n|\\ |\n| \\|\n";
  FontLetter['O'] = " __ \n/  \\\n\\__/\n";
  FontLetter['P'] = " __ \n|__)\n|   \n";
  FontLetter['Q'] = " __ \n/  \\\n\\_\\/\n";
  FontLetter['R'] = " __ \n|__)\n| \\ \n";
  FontLetter['S'] = " __ \n(_  \n__) \n";
  FontLetter['T'] = "___ \n |  \n |  \n";
  FontLetter['U'] = "    \n/  \\\n\\__/\n";
  FontLetter['V'] = "    \n\\  /\n \\/ \n";
  FontLetter['W'] = "    \n|  |\n|/\\|\n";
  FontLetter['X'] = "    \n\\/  \n/\\  \n";
  FontLetter['Y'] = "    \n\\_/ \n |  \n";
  FontLetter['Z'] = "___ \n _/ \n/__ \n";

  FontLetter['0'] = " __ \n/ /\\\n\\/_/\n";
  FontLetter['1'] = "    \n/|  \n |  \n";
  FontLetter['2'] = " __ \n  _)\n /__\n";
  FontLetter['3'] = " __ \n  _)\n __)\n";
  FontLetter['4'] = "    \n|__|\n   |\n";
  FontLetter['5'] = "  __\n |_ \n __)\n";
  FontLetter['6'] = "  __\n/__ \n\\__)\n";
  FontLetter['7'] = " ___\n   /\n  / \n";
  FontLetter['8'] = " __ \n(__)\n(__)\n";
  FontLetter['9'] = " __ \n(__\\\n __/\n";

  FontLetter['!'] = " |  \n |  \n o  \n";
  FontLetter['.'] = "    \n    \no   \n";
  FontLetter['?'] = " _  \n  ) \n o  \n";
  FontLetter[':'] = " o  \n    \n o  \n";
  FontLetter['^'] = " /\\ \n    \n    \n";
}