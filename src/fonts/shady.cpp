#include <map>

#include "shady.hpp"

Shady::Shady() {
  Shady::row = 4;
  Shady::width = 8;

  FontLetter['A'] = "    \\   \n   _ \\  \n  ___ \\ \n_/    _\\\n";
  FontLetter['B'] = " __ )   \n __ \\   \n |   |  \n____/   \n";
  FontLetter['C'] = "  ___|  \n |      \n |      \n\\____|  \n";
  FontLetter['D'] = " __ \\   \n |   |  \n |   |  \n ___/   \n";
  FontLetter['E'] = "  ____| \n  __|   \n   |    \n  ____| ";
  FontLetter['F'] = "  ____| \n   |    \n  __|   \n _|     ";
  FontLetter['G'] = "  ____| \n |      \n |   |  \n\\____|  ";
  FontLetter['H'] = " |   |  \n |   |  \n ___ |  \n_|  _|  \n";
  FontLetter['I'] = "_ _|    \n  |     \n  |     \n___|    ";
  FontLetter['J'] = "     |  \n     |  \n \\   |  \n\\___/   \n";
  FontLetter['K'] = " |  /   \n | /    \n . \\    \n_|\\_\\   \n";
  FontLetter['L'] = " |      \n |      \n |      \n_____|  \n";
  FontLetter['M'] = "  \\  |  \n |\\/ |  \n |   |  \n |   |  \n";
  FontLetter['N'] = "  \\  |  \n   \\ |  \n |\\  |  \n_|\\ _|  \n";
  FontLetter['O'] = "  _ \\   \n |   |  \n |   |  \n\\___/   \n";
  FontLetter['P'] = "  _ \\   \n |   |  \n ___/   \n_|      \n";
  FontLetter['Q'] = "  _ \\   \n |   |  \n |   |  \n\\__\\_\\  n";
  FontLetter['R'] = "  _ \\   \n |   |  \n __ <   \n_| \\_\\  \n";
  FontLetter['S'] = "  ___|  \n\\___ \\  \n      | \n_____/  \n";
  FontLetter['T'] = "__ __|  \n   |    \n   |    \n   |    \n";
  FontLetter['U'] = " |   |  \n |   |  \n |   |  \n\\___/   \n";
  FontLetter['V'] = "\\ \\    /\n \\ \\  / \n  \\ \\/  \n   \\/   \n";
  FontLetter['W'] = "        \n\\ \\  \\ /\n \\ \\ \\/ \n  \\/\\/  \n";
  FontLetter['X'] = "  \\  /  \n    /   \n    \\   \n _/\\_\\  \n";
  FontLetter['Y'] = "\\ \\   / \n \\   /  \n    |   \n   _|   \n";
  FontLetter['Z'] = "__  /   \n   /    \n  /     \n_____|  \n";

  FontLetter['0'] = "  _ \\   \n | / |  \n |/  |  \n\\___/   \n";
  FontLetter['1'] = "  _ |   \n    |   \n    |   \n   _|   \n";
  FontLetter['2'] = "___ \\   \n   ) |  \n  __/   \n_____|  \n";
  FontLetter['3'] = "___ /   \n  _ \\   \n   ) |  \n____/   \n";
  FontLetter['4'] = " |  |   \n |  |   \n___ __| \n   _|   \n";
  FontLetter['5'] = " ___|   \n __ \\   \n   ) |  \n____/   \n";
  FontLetter['6'] = "  /     \n  _ \\   \n (   |  \n\\___/   \n";
  FontLetter['7'] = "____  | \n     /  \n    /   \n  _/    \n";
  FontLetter['8'] = "  _ )   \n  _ \\   \n (   |  \n\\___/   \n";
  FontLetter['9'] = "  _ \\   \n (   |  \n\\__  |  \n  __/   \n";

  FontLetter['!'] = "    |   \n    |   \n   _|   \n   _)   \n";
  FontLetter['.'] = "        \n        \n        \n   _)   \n";
  FontLetter['?'] = "  __ \\  \n     /  \n   _|   \n   _)   \n";
  FontLetter[':'] = "   _)   \n        \n        \n   _)   \n";
  FontLetter['^'] = "   /\\   \n        \n        \n        \n";
}