#include <cctype>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[]) {
  map<string, char> morse; // E for dash, T for dot
  morse["ET"] = 'A';
  morse["TEEE"] = 'B';
  morse["TETE"] = 'C';
  morse["TEE"] = 'D';
  morse["E"] = 'E';
  morse["EETE"] = 'F';
  morse["TTE"] = 'G';
  morse["EEEE"] = 'H';
  morse["EE"] = 'I';
  morse["ETTT"] = 'J';
  morse["TET"] = 'K';
  morse["ETEE"] = 'L';
  morse["TT"] = 'M';
  morse["TE"] = 'N';
  morse["TTT"] = 'O';
  morse["ETTE"] = 'P';
  morse["TTET"] = 'Q';
  morse["ETE"] = 'R';
  morse["EEE"] = 'S';
  morse["T"] = 'T';
  morse["EET"] = 'U';
  morse["EEET"] = 'V';
  morse["ETT"] = 'W';
  morse["TEET"] = 'X';
  morse["TETT"] = 'Y';
  morse["TTEE"] = 'Z';
  morse["TTTEEE "] = ':';
  morse["ETETE"] = '+';
  morse["EETTET"] = '_';
  morse["EEEEEE "] = '^';
  morse["ETEETE "] = '"';
  morse["EETTEE"] = '?';
  morse["ETETET"] = '.';
  morse["TTEETT"] = ',';
  morse["ETTETE "] = '@';
  morse["TETTE "] = '(';
  morse["TETTET "] = ')';
  morse["TEEEET "] = '-';
  morse["TEETE"] = '/';
  morse["ETTTT"] = '1';
  morse["EETTT"] = '2';
  morse["EEETT"] = '3';
  morse["EEEET"] = '4';
  morse["EEEEE"] = '5';
  morse["TEEEE"] = '6';
  morse["TTEEE"] = '7';
  morse["TTTEE"] = '8';
  morse["TTTTE"] = '9';
  morse["TTTTT"] = '0';

  const char dash = '-';
  const char dot = '.';
  int i = 0;
  string tmp = "";
	if (argc>1){
  while (argv[1][i] != '\0') {
    if (argv[1][i] == ' ') {
      cout << morse[tmp];
      tmp = "";
      if (argv[1][i + 1] == ' ') {
        cout << " ";
      }
    } else if (argv[1][i] == dash) {
      tmp += "T";
    } else if (argv[1][i] == dot) {
      tmp += "E";
    }
    i++;
  }
  cout << morse[tmp] << " ";
  cout << endl;
	}
	else return 1;
  return 0;
}
