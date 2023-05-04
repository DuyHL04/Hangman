#ifndef BASEFUNC_
#define BASEFUNC_
#include <iostream>
#include "const.h"
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <conio.h>

using namespace std;




void render(string guessed,int tries);
string chooseWord();
char readAGuess();
bool contains(string word, char c);
string update(string guessed,const string word, char guess);

#endif // BASEFUNC_

