#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
  map<char, string> morse;
  morse['A'] = "・ー";
  morse['B'] = "ー・・・";
  morse['C'] = "ー・ー・";
  morse['D'] = "ー・・";
  morse['E'] = "・";
  morse['F'] = "・・ー・";
  morse['G'] = "ーー・";
  morse['H'] = "・・・・";
  morse['I'] = "・・";
  morse['J'] = "・ーーー";
  morse['K'] = "ー・ー";
  morse['L'] = "・ー・・";
  morse['M'] = "ーー";
  morse['N'] = "ー・";
  morse['O'] = "ーーー";
  morse['P'] = "・ーー・";
  morse['Q'] = "ーー・ー";
  morse['R'] = "・ー・";
  morse['S'] = "・・・";
  morse['T'] = "ー";
  morse['U'] = "・・ー";
  morse['V'] = "・・・ー";
  morse['W'] = "・ーー";
  morse['X'] = "ー・・ー";
  morse['Y'] = "ー・ーー";
  morse['Z'] = "ーー・・";
  morse[' '] = " ";
  morse[':'] = "ーーー・・・ ";
  morse['+'] = "・ー・ー・";
  morse['_'] = "・・ーー・ー";
  morse['^'] = "・・・・・・ ";
  morse['"'] = "・ー・・ー・ ";
  morse['?'] = "・・ーー・・";
  morse['.'] = "・ー・ー・ー";
  morse[','] = "ーー・・ーー";
  morse['@'] = "・ーー・ー・ ";
  morse['('] = "ー・ーー・ ";
  morse[')'] = "ー・ーー・ー ";
  morse['-'] = "ー・・・・ー ";
  morse['/'] = "ー・・ー・";
  morse['1'] = "・ーーーー";
  morse['2'] = "・・ーーー";
  morse['3'] = "・・・ーー";
  morse['4'] = "・・・・ー";
  morse['5'] = "・・・・・";
  morse['6'] = "ー・・・・";
  morse['7'] = "ーー・・・";
  morse['8'] = "ーーー・・";
  morse['9'] = "ーーーー・";
  morse['0'] = "ーーーーー";

  int i = 0;
  if (argc > 1) { // $1
    while (argv[1][i] != '\0') {
      cout << morse[toupper(argv[1][i])] << " ";
      i++;
    }
    cout << endl;
  } else { // pipe
    string str;
    while (cin >> str) {
      i = 0;
      while (str[i] != '\0') {
        cout << morse[toupper(str[i])] << " ";
        i++;
      }
      cout << "  ";
    }
    cout << endl;
  }

  return 0;
}
